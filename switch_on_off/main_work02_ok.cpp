#include <wiringPi.h>
#include <stdio.h>

#define LedPin    0
#define ButtonPin 1

// http://wiki.amperka.ru/%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5:%D0%BB%D0%BE%D0%B3%D0%B8%D1%87%D0%B5%D1%81%D0%BA%D0%B8%D0%B5-%D0%BF%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D0%B5-%D0%B2%D0%B5%D1%82%D0%B2%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5

int main(void)

{	//when initialize wiring failed,print messageto screen
	if (wiringPiSetup() == -1)
	{
		printf("setup wiringPi failed !");
		return 1;
	}

	pinMode(ButtonPin, INPUT);
	pinMode(LedPin, OUTPUT);

	pullUpDnControl(ButtonPin, PUD_UP);					//pull up to 3.3V,make GPIO1 a stable level

	bool lampState = false;
	bool wasButtonDown = false;

	while (1)
	{
		bool isButtonDown = digitalRead(ButtonPin);		// читаем значение кнопки
														// digitalRead(ButtonPin) == 0) //PIN ON
		if (isButtonDown && !wasButtonDown)
		{
			lampState = !lampState;						// on/off меняет значение ЛЕД для диода
			delay(100);									// убираем дребезг кнопки 0,1 сикекунды
		}

		wasButtonDown = isButtonDown;
		digitalWrite(LedPin, lampState);				// включаем ЛЕД
														// digitalWrite(LedPin, HIGH); // LED OFF
		//printf("lampState = %d \n", lampState);
		//printf("isButtonDown = %d, wasButtonDown = %d \n", isButtonDown, wasButtonDown);
	}
	return 0;
}
