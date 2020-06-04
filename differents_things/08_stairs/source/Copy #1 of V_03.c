// Подоключем библитеку
#include <stm32f4xx.h>

// Утанавливаем значения
// указываем порт D (GPIOD)
#define LED_PORT  GPIOE
#define LED_PORTD GPIOD
// указываем пины которые будут загоратся 12, 13, 14,15
//#define LED_BLUE1 (1 << 8) /* port D, pin 15 */

#define PE0 (1 << 0) 	/* port E, pin 0 */
#define PE1 (1 << 1) 	/* port E, pin 1 */
#define PE2 (1 << 2) 	/* port E, pin 2 */
#define PE3 (1 << 3) 	/* port E, pin 3 */
#define PE4 (1 << 4) 	/* port E, pin 4 */
#define PE5 (1 << 5) 	/* port E, pin 5 */
#define PE6 (1 << 6) 	/* port E, pin 6 */
#define PE7 (1 << 7) 	/* port E, pin 7 */
#define PE8 (1 << 8) 	/* port E, pin 8 */
#define PE9 (1 << 9) 	/* port E, pin 9 */
#define PE10 (1 << 10) 	/* port E, pin 10 */
#define PE11 (1 << 11) 	/* port E, pin 11 */
#define PE12 (1 << 12) 	/* port E, pin 12 */
#define PE13 (1 << 13) 	/* port E, pin 13 */
#define PE14 (1 << 14) 	/* port E, pin 14 */
#define PE15 (1 << 15) 	/* port E, pin 15 */

#define PD0 (2 << 0) 	/* port D, pin 0 */
#define PD1 (2 << 1) 	/* port D, pin 1 */
#define PD2 (2 << 2) 	/* port D, pin 2 */
#define PD3 (2 << 3) 	/* port D, pin 3 */
#define PD4 (2 << 4) 	/* port D, pin 4 */
#define PD5 (2 << 5) 	/* port D, pin 5 */
#define PD6 (2 << 6) 	/* port D, pin 6 */
#define PD7 (2 << 7) 	/* port D, pin 7 */
#define PD8 (2 << 8) 	/* port D, pin 8 */
#define PD9 (2 << 9) 	/* port D, pin 9 */
#define PD10 (2 << 10) 	/* port D, pin 10 */
#define PD11 (2 << 11) 	/* port D, pin 11 */
#define PD12 (2 << 12) 	/* port D, pin 12 */
#define PD13 (2 << 13) 	/* port D, pin 13 */
#define PD14 (2 << 14) 	/* port D, pin 14 */
#define PD15 (2 << 15) 	/* port D, pin 15 */


	// объявляем функцию setup_leds
void setup_leds(void){
    // создаём таймер для кнопки GPIOA и для LED GPIOD (Make sure clocks work..)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; 		// ((uint32_t)0x00000001) эквивалент RCC_AHB1ENR_GPIOAEN
    GPIOA->MODER &= ~GPIO_MODER_MODER0; 		// Кнопка по порту А пин 0

    RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN; 		// ((uint32_t)0x00000008)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOEEN; 		// ((uint32_t)0x00000008)
    // устанавливаем выходные пины 12, 13, 14, 15 сигналa (set to outputs)
    LED_PORT->MODER |=  GPIO_MODER_MODER0_0  | GPIO_MODER_MODER1_0  | GPIO_MODER_MODER2_0  | GPIO_MODER_MODER3_0 |
			   	   	    GPIO_MODER_MODER4_0  | GPIO_MODER_MODER5_0  | GPIO_MODER_MODER6_0  | GPIO_MODER_MODER7_0 |
    					GPIO_MODER_MODER8_0  | GPIO_MODER_MODER9_0  | GPIO_MODER_MODER10_0 | GPIO_MODER_MODER11_0 |
    					GPIO_MODER_MODER12_0 | GPIO_MODER_MODER13_0 | GPIO_MODER_MODER14_0 | GPIO_MODER_MODER15_0;
    				// GPIO_MODER_MODER12_0 эквивалент ((uint32_t)0x01000000)
    LED_PORTD->MODER |= GPIO_MODER_MODER0_0  | GPIO_MODER_MODER1_0  | GPIO_MODER_MODER2_0  | GPIO_MODER_MODER3_0 |
			   	   	    GPIO_MODER_MODER4_0  | GPIO_MODER_MODER5_0  | GPIO_MODER_MODER6_0  | GPIO_MODER_MODER7_0 |
    					GPIO_MODER_MODER8_0  | GPIO_MODER_MODER9_0  | GPIO_MODER_MODER10_0 | GPIO_MODER_MODER11_0 |
    					GPIO_MODER_MODER12_0 | GPIO_MODER_MODER13_0 | GPIO_MODER_MODER14_0 | GPIO_MODER_MODER15_0;
    				// GPIO_MODER_MODER12_0 эквивалент ((uint32_t)0x01000000)
}
// функция выключенных LED
void switch_leds_off(void){
    LED_PORT->ODR = 0;
    LED_PORTD->ODR = 0;
}

void delay_cycles(uint32_t cycles)
      {
              while(cycles--);
      }

// ну и сама функция main c переменной (void)
int main(void){
  setup_leds(); 	// берём данные из функции void setup_leds(void)

  while (1)  {		// открываем цикл
	  if (GPIOA->IDR & GPIO_IDR_IDR_0) // если выполняется условие
	  {
		  //LED_PORT->ODR = LED_ORANGE | LED_RED; // (если да то выполняется условие) если кнопка нажата то горят (по часовой)
		  LED_PORT->ODR = PD0 | PD1 | PD2 | PD3 | PD4 | PD5 | PD6 | PD7 | PD8 | PD9 | PD10 | PD11 | PD12 | PD13 | PD14 | PD15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = PE0 | PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 		PE1 | PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 			  PE2 | PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =					PE3 | PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 						  PE4 | PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =								PE5 | PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =									  PE6 | PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =											PE7 | PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =												  PE8 | PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =														PE9 | PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =															  PE10 | PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																	 PE11 | PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																		    PE12 | PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																				   PE13 | PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																						  PE14 | PE15;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																								 PE15;
		  delay_cycles(500000UL);
	  }
	  else if (GPIOA->IDR & GPIO_IDR_IDR_1)  // (если да то выполняется условие) если кнопка нажата то горят (против часовой)
	  {

		  /*
		  LED_PORT->ODR = 									LED_GREEN;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 						 LED_BLUE | LED_GREEN;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 			   LED_RED | LED_BLUE | LED_GREEN;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_ORANGE | LED_RED | LED_BLUE | LED_GREEN;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_ORANGE | LED_RED;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_ORANGE;
		  delay_cycles(500000UL);
		   */

	  }
	  else
	  {									// тогда


		  switch_leds_off();					// берём данные из функции void switch_leds_off(void)
		  //LED_PORT->ODR = LED_BLUE;
		  //LED_PORT->ODR = LED_BLUE | LED_GREEN; // (если нет то выполняется условие) если кнопка отжата то горят
	  }


 }
}
