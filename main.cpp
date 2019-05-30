#include <wiringPi.h>
#include <stdio.h>

#define LedPin    0								// int LED = 2;
#define ButtonPin 1								// int pinButton = 8;

int main(void)

{	//when initialize wiring failed,print messageto screen
	if (wiringPiSetup() == -1)
	{
		printf("setup wiringPi failed !");
		return 1;
	}
	
	int stateLED = LOW;
	int previous = LOW;

	int stateButton;
	long time = 0;
	long debounce = 500;

	pinMode(LedPin, OUTPUT);	// pinMode(LED, OUTPUT);
	pinMode(ButtonPin, INPUT);	// pinMode(pinButton, INPUT);

	digitalRead(ButtonPin) == 0; // pin ON

	//pull up to 3.3V,make GPIO1 a stable level
	pullUpDnControl(ButtonPin, PUD_UP);

	while (1)
	{
		stateButton = (digitalRead(ButtonPin) == 0);	// push pin botton
		//printf("" stateButton);
		if (stateButton == HIGH &&
			previous == LOW &&		// зачем? 
			millis() - time > debounce)
		{
			if (stateLED == HIGH)						// | change digitalWrite 
			{											// |
				stateLED = LOW;							// |
			}											// |
			else 										// |
			{											// |
				stateLED = HIGH;						// |
			}											// |
			time = millis();							// |
		}											    // |
		digitalWrite(LedPin, stateLED);					// | digitalWrite(LedPin, HIGH);  // led OFF
														// | digitalWrite(LedPin, LOW);   // led ON	
		previous == stateButton;	// зачем?

	}
	return 0;
}
