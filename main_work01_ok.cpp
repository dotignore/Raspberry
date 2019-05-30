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

	pinMode(LedPin, OUTPUT);
	pinMode(ButtonPin, INPUT);

	//pull up to 3.3V,make GPIO1 a stable level
	pullUpDnControl(ButtonPin, PUD_UP);

	//variable 
	//digitalWrite(LedPin, HIGH);

	int aaa;
	//aaa = 0;
	int iii;

	while (1)
	{
		printf("== (%o) ==\n", aaa);
		/*
		digitalWrite(LedPin, HIGH); // LED OFF

		digitalRead(ButtonPin) == 0) //PIN ON
		digitalWrite(LedPin, LOW);   //led ON
		*/



		if (digitalRead(ButtonPin) == 0) //PIN ON
		{			
			//printf("aaa(PIN ON)=(%o)\n", aaa);	// aaa(0)=(0)
			// delay(900);
			if (aaa == 1)
			{
				aaa = 0;
				for (int i=0; i<100; i++) 
				{
					iii = i;
					printf("i(%d)\n", i);
				}
			}
			else if (aaa == 0)
			{
				aaa = 1;
				for (int i = 0; i < 100; i++)
				{
					iii = i;
					printf("d(%d)\n", i);
				}
			}

		}

		if (aaa == 1)
		{
			digitalWrite(LedPin, LOW);   //led ON
			//indicate that button has pressed up
			//printf("ledpin_high\n");

		}

		if (aaa == 0)
		{
			digitalWrite(LedPin, HIGH); // LED OFF
			//printf("key off\n");
			//printf("ledpin_high\n");
		}


	}
	return 0;
}
