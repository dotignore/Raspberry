// ���������� ���������
#include <stm32f4xx.h>

// ������������ ��������
// ��������� ���� D (GPIOD)
#define LED_PORTD GPIOD

#define Px00 (0 << 0)         /* port D, pin 0 */
#define Px01 (1 << 0)         /* port D, pin 0 */

#define Px10 (0 << 1)         /* port D, pin 1 */
#define Px11 (1 << 1)         /* port D, pin 1 */
#define Px20 (0 << 2)         /* port D, pin 2 */
#define Px21 (1 << 2)         /* port D, pin 2 */

#define Px30 (0 << 3)         /* port D, pin 3 */
#define Px31 (1 << 3)         /* port D, pin 3 */
#define Px40 (0 << 4)         /* port D, pin 4 */
#define Px41 (1 << 4)         /* port D, pin 4 */
#define Px50 (0 << 5)         /* port D, pin 5 */
#define Px51 (1 << 5)         /* port D, pin 5 */


        // ��������� ������� setup_leds
void setup_leds(void){
    // ������ ������ ��� ������ GPIOA � ��� LED GPIOD (Make sure clocks work..)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
    GPIOA->MODER &= ~GPIO_MODER_MODER0;

    RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
    // ������������� �������� ���� 12, 13, 14, 15 ������a (set to outputs)

    LED_PORTD->MODER |=
    		GPIO_MODER_MODER0_0 | GPIO_MODER_MODER1_0 |
    		GPIO_MODER_MODER2_0 | GPIO_MODER_MODER3_0 |
    		GPIO_MODER_MODER4_0 | GPIO_MODER_MODER5_0;

}
// ������� ����������� LED
void switch_leds_off(void){
    LED_PORTD->ODR = 0;
}
void switch_leds_on(void){
    LED_PORTD->ODR = 1;
}

void delay_cycles(uint32_t cycles)
      {
              while(cycles--);
      }

// �� � ���� ������� main c ���������� (void)
int main(void){
  setup_leds();         // ���� ������ �� ������� void setup_leds(void)

//###########################################
  delay_cycles(5000000UL);  // 5 000 000
  //###########################################


  while (1)  {                // ��������� ����
          if (GPIOA->IDR & GPIO_IDR_IDR_0) // ���� ����������� �������
          {
                  //LED_PORT->ODR = LED_ORANGE | LED_RED; // (���� �� �� ����������� �������) ���� ������ ������ �� ����� (�� �������)
                  //LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 | Px6 | Px7 | Px8 | Px9 | Px10 | Px11 | Px12 | Px13 | Px14 | Px15;
                  //delay_cycles(500000UL);
//            LED_PORTD->ODR = Px13;
//        	  LED_PORTD->ODR = Px0;
//              delay_cycles(500000UL);


        	  LED_PORTD->ODR = Px01;
              delay_cycles(500000UL);

        	  LED_PORTD->ODR = Px00;		//
              delay_cycles(500000UL);

        	  LED_PORTD->ODR = Px01 | Px11;
              delay_cycles(500000UL);

        	  LED_PORTD->ODR = Px00;		//
              delay_cycles(500000UL);

        	  LED_PORTD->ODR = Px31 | Px21;
              delay_cycles(500000UL);

        	  LED_PORTD->ODR = Px30;		//
              delay_cycles(500000UL);

        	  LED_PORTD->ODR = Px01;
              delay_cycles(500000UL);

        	  LED_PORTD->ODR = Px00;		//
              delay_cycles(500000UL);

              /*LED_PORTD->ODR = Px0 | Px1;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5;
              delay_cycles(500000UL);
              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 ;
              delay_cycles(500000UL);

              LED_PORTD->ODR = Px0 | Px1 | Px2 | Px3 | Px4 | Px5 ;
              delay_cycles(500000UL);*/


              //switch_leds_off();
          }
          else if (GPIOA->IDR & GPIO_IDR_IDR_1)  // (���� �� �� ����������� �������) ���� ������ ������ �� ����� (������ �������)
          {
             /* LED_PORTD->ODR =																								  Px1;
              delay_cycles(500000UL);
              LED_PORTD->ODR =																						   Px2 | Px1;
              delay_cycles(500000UL);
              LED_PORTD->ODR =																					Px3 | Px3 | Px1;
              delay_cycles(500000UL);
              LED_PORTD->ODR =																			 Px4 | Px3 | Px2 | Px1;
              delay_cycles(500000UL);
              LED_PORTD->ODR =																	  Px5 | Px4 | Px3 | Px2 | Px1;
              delay_cycles(500000UL);
              LED_PORTD->ODR =															   Px0 | Px5 | Px4 | Px3 | Px2 | Px1;
              delay_cycles(500000UL);



              switch_leds_off();		//���������� PORTE


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
              switch_leds_off();*/
          }
          else
          {                                                                        // �����


                 // switch_leds_off();                                        // ���� ������ �� ������� void switch_leds_off(void)
                  //LED_PORT->ODR = LED_BLUE;
                  //LED_PORT->ODR = LED_BLUE | LED_GREEN; // (���� ��� �� ����������� �������) ���� ������ ������ �� �����
          }


 }
}
