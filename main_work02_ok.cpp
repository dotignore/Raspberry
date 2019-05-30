#include <wiringPi.h>
#include <stdio.h>

#define LedPin    0
#define ButtonPin 1

int main(void)

{	//when initialize wiring failed,print messageto screen
	if (wiringPiSetup() == -1)
	{
		printf("setup wiringPi failed !");
		return 1;
	}

	pinMode(ButtonPin, INPUT);
	pinMode(LedPin, OUTPUT);

	//pull up to 3.3V,make GPIO1 a stable level
	pullUpDnControl(ButtonPin, PUD_UP);

	bool lampState = false;
	bool wasButtonDown = false;

	while (1)
	{

	/* 	digitalWrite(LedPin, HIGH); // LED OFF
		digitalRead(ButtonPin) == 0) //PIN ON	*/

	bool isButtonDown = digitalRead(ButtonPin);

	if (isButtonDown && !wasButtonDown) 
	{
		lampState = !lampState;
		delay(100);
	}
	
	wasButtonDown = isButtonDown;
	digitalWrite(LedPin, lampState);

	}
	return 0;
}
