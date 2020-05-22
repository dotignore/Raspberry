#include <wiringPi.h>
#include <stdio.h>

#define LedPin    0			// Wpi 0, GPIO 17 (P17), Phys 11 + GND
#define ButtonPin 1			// Wpi 1, GPIO 18 (P18), Phys 12 + GND

// https://www.electroschematics.com/8964/turn-on-led-button-arduino/

int main(void)

{	//when initialize wiring failed,print messageto screen
	if (wiringPiSetup() == -1)
	{
		printf("setup wiringPi failed !");
		return 1;
	}
	
	int stateLED = LOW;

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
		if (stateButton == HIGH &&						// если кнопка нажата
			millis() - time > debounce)					// убирает дребез кнопки
		{
			if (stateLED == HIGH)						// | change digitalWrite 
			{											// |
				stateLED = LOW;							// |
			}											// |
			else 										// |
			{											// |
				stateLED = HIGH;						// |
			}											// |
			time = millis();							// убирает дребез кнопки
		}											    // |
		digitalWrite(LedPin, stateLED);					// | digitalWrite(LedPin, HIGH);  // led OFF
														// | digitalWrite(LedPin, LOW);   // led ON	

		//printf("stateButton = %d\n", stateButton);		//int d
		//printf("debounce = %ld\n\n", debounce);			//long l

	}
	return 0;
}
