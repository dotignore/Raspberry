// Подоключем библитеку
#include <stm32f4xx.h>

// Утанавливаем значения
// указываем порт D (GPIOD)
#define LED_PORTE GPIOE
#define LED_PORTD GPIOD

#define Px0 (1 << 0)         /* port D, pin 0 */
#define Px1 (1 << 1)         /* port D, pin 1 */
#define Px2 (1 << 2)         /* port D, pin 2 */
#define Px3 (1 << 3)         /* port D, pin 3 */
#define Px4 (1 << 4)         /* port D, pin 4 */
#define Px5 (1 << 5)         /* port D, pin 5 */
#define Px6 (1 << 6)         /* port D, pin 6 */
#define Px7 (1 << 7)         /* port D, pin 7 */
#define Px8 (1 << 8)         /* port D, pin 8 */
#define Px9 (1 << 9)         /* port D, pin 9 */
#define Px10 (1 << 10)         /* port D, pin 10 */
#define Px11 (1 << 11)         /* port D, pin 11 */
#define Px12 (1 << 12)         /* port D, pin 12 */
#define Px13 (1 << 13)         /* port D, pin 13 */
#define Px14 (1 << 14)         /* port D, pin 14 */
#define Px15 (1 << 15)         /* port D, pin 15 */

        // объявляем функцию setup_leds
void setup_leds(void){
    // создаём таймер для кнопки GPIOA и для LED GPIOD (Make sure clocks work..)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
    GPIOA->MODER &= ~GPIO_MODER_MODER0;

    RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
        RCC->AHB1ENR |= RCC_AHB1ENR_GPIOEEN;
    // устанавливаем выходные пины 12, 13, 14, 15 сигналa (set to outputs)
    LED_PORTE->MODER |=  GPIO_MODER_MODER0_0 | GPIO_MODER_MODER1_0 | GPIO_MODER_MODER2_0 | GPIO_MODER_MODER3_0 |
    		GPIO_MODER_MODER4_0 | GPIO_MODER_MODER5_0 | GPIO_MODER_MODER6_0 | GPIO_MODER_MODER7_0 |
    		GPIO_MODER_MODER8_0 | GPIO_MODER_MODER9_0 | GPIO_MODER_MODER10_0 | GPIO_MODER_MODER11_0 |
    		GPIO_MODER_MODER12_0 | GPIO_MODER_MODER13_0 | GPIO_MODER_MODER14_0 | GPIO_MODER_MODER15_0;

    LED_PORTD->MODER |=  GPIO_MODER_MODER0_0 | GPIO_MODER_MODER1_0 | GPIO_MODER_MODER2_0 | GPIO_MODER_MODER3_0 |
    		GPIO_MODER_MODER4_0 | GPIO_MODER_MODER5_0 | GPIO_MODER_MODER6_0 | GPIO_MODER_MODER7_0 |
    		GPIO_MODER_MODER8_0 | GPIO_MODER_MODER9_0 | GPIO_MODER_MODER10_0 | GPIO_MODER_MODER11_0 |
    		GPIO_MODER_MODER12_0 | GPIO_MODER_MODER13_0 | GPIO_MODER_MODER14_0 | GPIO_MODER_MODER15_0;

}
// функция выключенных LED
void switch_leds_off(void){
    LED_PORTE->ODR = 0;
    LED_PORTD->ODR = 0;
}

void switch_leds_off_e(void){
    LED_PORTE->ODR = 0;
}

void delay_cycles(uint32_t cycles)
      {
              while(cycles--);
      }

// ну и сама функция main c переменной (void)
int main(void){
  setup_leds();         // берём данные из функции void setup_leds(void)

  while (1)  {                // открываем цикл
          if (GPIOA->IDR & GPIO_IDR_IDR_0) // если выполняется условие
          {
                  //LED_PORT->ODR = LED_ORANGE | LED_RED; // (если да то выполняется условие) если кнопка нажата то горят (по часовой)
                  //LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
                  //delay_cycles(500000UL);
//            LED_PORTD->ODR = Px13;
        	  LED_PORTD->ODR = Px0;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);

              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
// stars off
              LED_PORTD->ODR = 		 Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			   Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  		 Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			  		 Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   			   Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					       Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 	         Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 				   Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 						  Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 								 Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 										Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   																   Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   																   		  Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);

              switch_leds_off();		// Выключем PORTE

              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 		 Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 			   Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 					 Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =						   Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =								 Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =									   Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 											 Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 												   Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 														 Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =															   Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =																	  Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =																			 Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =																					Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =																						   Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =																								  Px15;
              delay_cycles(500000UL);
              switch_leds_off();
          }
          else if (GPIOA->IDR & GPIO_IDR_IDR_1)  // (если да то выполняется условие) если кнопка нажата то горят (против часовой)
          {
              LED_PORTE->ODR =																								  Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =																						   Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =																					Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =																			 Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =																	  Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =															   Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 														 Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 												   Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 											 Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =									   Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =								 Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR =						   Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 					 Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 			   Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = 		 Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   																   		  Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   																   Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 										Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 								 Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 						  Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 				   Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 	         Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					       Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   					 Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   			   Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			  		 Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  			   Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			  		 Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 			   Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = 		 Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              // stars off
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3 | Px4;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2 | Px3;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1 | Px2;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0 | Px1;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              LED_PORTE->ODR = Px0;
              delay_cycles(500000UL);

              switch_leds_off();		//ввыключаем PORTE

              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2;
              delay_cycles(500000UL);
        	  LED_PORTD->ODR = Px0;
              delay_cycles(500000UL);
              switch_leds_off();
          }
          else
          {                                                                        // тогда


                  switch_leds_off();                                        // берём данные из функции void switch_leds_off(void)
                  //LED_PORT->ODR = LED_BLUE;
                  //LED_PORT->ODR = LED_BLUE | LED_GREEN; // (если нет то выполняется условие) если кнопка отжата то горят
          }


 }
}
