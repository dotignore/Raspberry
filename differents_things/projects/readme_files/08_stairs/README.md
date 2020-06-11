<img src="

" alt="" data-canonical-src="" width="700" />




[<h1 id="custom-id"># Fix connectors in this Auto Blaupunkt San Francosco 310 </h1>](https://github.com/dotignore/Raspberry/tree/master/differents_things/projects/08_stairs)

[<h1 id="custom-id"> -- Back -- </h1>](https://github.com/dotignore/Raspberry/tree/master/differents_things/)







```
#############################
## Плата управления
## stm32f4discovery
## к плате надо шнурок USB <-> microUSB
#############################
## Транзисторы TO-220
## любые не подойдут должны быть MOSFET с питанием открытия при 3в и пропускной способностью 5-10а
## IRL2505 			(должен подойти но надо проверить)
## FQB140N03L FQI140N03L	(должен подойти но надо проверить)
## cep603al			работает
## 75N3LLH6			(должен подойти но надо проверить)
## возьми ОДИН!!! транзистор на проверку потому что я проверял только на этом работает cep603al 100% остальные надо проверять
## IRFZ44 не работает!!!
## размеры транзистора
## http://www.promelec.ru/UPLOAD/fck/image/lines_pict/sit/to220.gif
#############################
## сопротивление выводное  0,125вата или 0,5вата какие будут
## 100ом столько же сколько ступенек будет 16 или 17
## +
## сопротивления выводные
## 100ом	2шт 
## 220к	2шт
## 330ом	2шт
#############################
## конденсаторы выводные керамически 
## 0,1мкф 4шт
## Конденсаторы электролиты 
## 2200мкф 25в 2шт
#############################
## Диод
## HER или UF на 3 ампера 1шт
## какой нибудь UF4004 на 1 ампера 1шт
#############################
## диодная лента незнаю тут ты сам должен опрделитса 12в желательно в силиконе у неё лучше освещение получаетса
#############################
## датчик IR двидения от Arduino	2шт (5вольт питание)
## http://kiev.ko.slando.ua/obyavlenie/infrakrasnyy-pirometricheskiy-datchik-dvizheniya-dlya-arduino-pir-motion-ID62EOL.html
#############################
## клемы 5мм
## http://files.клеммник.рф/i/d/pcb_screw/dg301-5.0.png
## 5 клемм + сколько будет ступенек столько же и клемм 17ступенек значит 5+17=22шт
#############################
## две кнопки такие SWT-6x6x7 мм
## http://trigger.ru/?cattov=31820&cat=4
#############################
## пины надо вот такие 2,54 шаг 
## 25пинов в одном ряду
## http://eleka.info/content/pdf/BL1.pdf
## http://eleka.info/content/images/items/bl1.36z.jpg
## http://eleka.info/content/pdf/BL2.pdf
## http://eleka.info/content/images/items/bl2.72z.jpg
#############################

блок питания надо +12в +5в
пока можеш взять компьютерный ATX блок питания
по амперажу надо смотреть на тестовой модели тебе хватит

а для полноразмерной модели надо щитать сколько потребляет на одну ступень и умножать


Transistors
----------------
cep603al, 40N03P, 50n06, 140N03, IRL2505 ,75N3LLH6

irlml2402, irlml2502, irLML0030, irfh3702, IRLR1xx

```

#fix


# 01
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/pic1.jpg" alt="" data-canonical-src="" width="700" />

# 01
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/bGfVNYIzlRg.jpg" alt="" data-canonical-src="" width="700" />

# 01
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/plata.jpg" alt="" data-canonical-src="" width="700" />


# 01
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/cl_G4GawQ-A.jpg" alt="" data-canonical-src="" width="700" />


# 01
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/pic2_.jpg" alt="" data-canonical-src="" width="700" />


# 01
https://github.com/dotignore/Raspberry/blob/master/differents_things/projects/08_stairs/video.mp4





```

// ?????????? ?????????
#include <stm32f4xx.h>

// ???????????? ????????
// ????????? ???? D (GPIOD)
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


        // ????????? ??????? setup_leds
void setup_leds(void){
    // ??????? ?????? ??? ?????? GPIOA ? ??? LED GPIOD (Make sure clocks work..)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
    GPIOA->MODER &= ~GPIO_MODER_MODER0;

    RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
    // ????????????? ???????? ???? 12, 13, 14, 15 ??????a (set to outputs)

    LED_PORTD->MODER |=
    		GPIO_MODER_MODER0_0 | GPIO_MODER_MODER1_0 |
    		GPIO_MODER_MODER2_0 | GPIO_MODER_MODER3_0 |
    		GPIO_MODER_MODER4_0 | GPIO_MODER_MODER5_0;

}
// ??????? ??????????? LED
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

// ?? ? ???? ??????? main c ?????????? (void)
int main(void){
  setup_leds();         // ????? ?????? ?? ??????? void setup_leds(void)

//###########################################
  delay_cycles(5000000UL);  // 5 000 000
  //###########################################


  while (1)  {                // ????????? ????
          if (GPIOA->IDR & GPIO_IDR_IDR_0) // ???? ??????????? ???????
          {
                  //LED_PORT->ODR = LED_ORANGE | LED_RED; // (???? ?? ?? ??????????? ???????) ???? ?????? ?????? ?? ????? (?? ???????)
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
          else if (GPIOA->IDR & GPIO_IDR_IDR_1)  // (???? ?? ?? ??????????? ???????) ???? ?????? ?????? ?? ????? (?????? ???????)
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
              switch_leds_off();		//?????????? PORTE
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
          {                                                                        // ?????


                 // switch_leds_off();                                        // ????? ?????? ?? ??????? void switch_leds_off(void)
                  //LED_PORT->ODR = LED_BLUE;
                  //LED_PORT->ODR = LED_BLUE | LED_GREEN; // (???? ??? ?? ??????????? ???????) ???? ?????? ?????? ?? ?????
          }


 }
}

```


[<h1 id="custom-id"> -- Back --</h1>](https://github.com/dotignore/Raspberry/tree/master/differents_things/)

<!-- =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= -->








