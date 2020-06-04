// Подоключем библитеку
#include <stdio.h>
#include <stdlib.h>

#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"

// Утанавливаем значения
// указываем порт D (GPIOD)
#define LED_PORT GPIOD
// указываем пины которые будут загоратся 12, 13, 14,15

#define LED_0 		(1 << 0)
#define LED_1 		(1 << 1)
#define LED_2 		(1 << 2)
#define LED_3 		(1 << 3)
#define LED_4 		(1 << 4)
#define LED_5 		(1 << 5)
#define LED_6 		(1 << 6)
#define LED_7 		(1 << 7)
#define LED_8 		(1 << 8)
#define LED_9 		(1 << 9)
#define LED_10 		(1 << 10)
#define LED_11 		(1 << 11)
#define LED_GREEN 	(1 << 12) /* port D, pin 12 */
#define LED_ORANGE 	(1 << 13) /* port D, pin 13 */
#define LED_RED 	(1 << 14) /* port D, pin 14 */
#define LED_BLUE 	(1 << 15) /* port D, pin 15 */

	// объявляем функцию setup_leds

void setup_leds(void){
    // создаём таймер для кнопки GPIOA и для LED GPIOD (Make sure clocks work..)
	  GPIO_InitTypeDef  GPIO_InitStructure;
	  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);

	//GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_14;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	  GPIO_Init(GPIOD, &GPIO_InitStructure);

    // устанавливаем выходные пины 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 сигналa (set to outputs)
      LED_PORT->MODER |= GPIO_MODER_MODER0_0  | GPIO_MODER_MODER1_0  | GPIO_MODER_MODER2_0  | GPIO_MODER_MODER3_0 |
    					 GPIO_MODER_MODER4_0  | GPIO_MODER_MODER5_0  | GPIO_MODER_MODER6_0  | GPIO_MODER_MODER7_0 |
    					 GPIO_MODER_MODER8_0  | GPIO_MODER_MODER9_0  | GPIO_MODER_MODER10_0 | GPIO_MODER_MODER11_0 |
    					 GPIO_MODER_MODER12_0 | GPIO_MODER_MODER13_0 | GPIO_MODER_MODER14_0 | GPIO_MODER_MODER15_0;
    				     // GPIO_MODER_MODER12_0 эквивалент ((uint32_t)0x01000000)
}

void leds_key(void){
    // создаём таймер для кнопки GPIOA и для LED GPIOD (Make sure clocks work..)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; 		// ((uint32_t)0x00000001) эквивалент RCC_AHB1ENR_GPIOAEN
    GPIOA->MODER &= ~GPIO_MODER_MODER0; 		// Кнопка по порту А пин 0
}

// функция выключенных LED
void switch_leds_off(void){
    LED_PORT->ODR = 0;
}

void delay_cycles(uint32_t cycles){
              while(cycles--);
      }

// ##############################################################
// ну и сама функция main c переменной (void)
int main(void){
  setup_leds(); 	// берём данные из функции void setup_leds(void)
  leds_key();

  while (1)  {		// открываем цикл
	  if (GPIOA->IDR & GPIO_IDR_IDR_0) // если выполняется условие
	  {
		  //LED_PORT->ODR = LED_ORANGE | LED_RED; // (если да то выполняется условие) если кнопка нажата то горят (по часовой)
		  LED_PORT->ODR = LED_0;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =		  LED_1 | LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =				  LED_2 | LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =						  LED_3 | LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 								  LED_4 | LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =										  LED_5 | LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 												  LED_6 | LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =														  LED_7 | LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 																  LED_8 | LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																		  LED_9 | LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																				  LED_10 | LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 																						   LED_11 | LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																									LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR = 																												LED_ORANGE | LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																														 	 LED_RED | LED_BLUE;
		  delay_cycles(500000UL);
		  LED_PORT->ODR =																																	   LED_BLUE;
		  delay_cycles(500000UL);
	  }
	  else if (GPIOA->IDR & GPIO_IDR_IDR_1)  // (если да то выполняется условие) если кнопка нажата то горят (против часовой)
	  {
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

	  }
	  else
	  {									// тогда


		  switch_leds_off();					// берём данные из функции void switch_leds_off(void)
		  //LED_PORT->ODR = LED_BLUE;
		  //LED_PORT->ODR = LED_BLUE | LED_GREEN; // (если нет то выполняется условие) если кнопка отжата то горят
	  }


 }
}
