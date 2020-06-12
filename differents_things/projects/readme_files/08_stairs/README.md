```
███╗   ███╗██╗   ██╗    ██████╗ ██████╗  ██████╗      ██╗███████╗ ██████╗████████╗    
████╗ ████║╚██╗ ██╔╝    ██╔══██╗██╔══██╗██╔═══██╗     ██║██╔════╝██╔════╝╚══██╔══╝    
██╔████╔██║ ╚████╔╝     ██████╔╝██████╔╝██║   ██║     ██║█████╗  ██║        ██║       
██║╚██╔╝██║  ╚██╔╝      ██╔═══╝ ██╔══██╗██║   ██║██   ██║██╔══╝  ██║        ██║       
██║ ╚═╝ ██║   ██║       ██║     ██║  ██║╚██████╔╝╚█████╔╝███████╗╚██████╗   ██║       
╚═╝     ╚═╝   ╚═╝       ╚═╝     ╚═╝  ╚═╝ ╚═════╝  ╚════╝ ╚══════╝ ╚═════╝   ╚═╝       
                                                                                      
██╗     ███████╗██████╗     ██╗     ██╗ ██████╗ ██╗  ██╗████████╗                     
██║     ██╔════╝██╔══██╗    ██║     ██║██╔════╝ ██║  ██║╚══██╔══╝                     
██║     █████╗  ██║  ██║    ██║     ██║██║  ███╗███████║   ██║                        
██║     ██╔══╝  ██║  ██║    ██║     ██║██║   ██║██╔══██║   ██║                        
███████╗███████╗██████╔╝    ███████╗██║╚██████╔╝██║  ██║   ██║                        
╚══════╝╚══════╝╚═════╝     ╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═╝   ╚═╝                        
                                                                                      
███████╗ ██████╗ ██████╗     ███████╗████████╗ █████╗ ██╗██████╗ ███████╗             
██╔════╝██╔═══██╗██╔══██╗    ██╔════╝╚══██╔══╝██╔══██╗██║██╔══██╗██╔════╝             
█████╗  ██║   ██║██████╔╝    ███████╗   ██║   ███████║██║██████╔╝███████╗             
██╔══╝  ██║   ██║██╔══██╗    ╚════██║   ██║   ██╔══██║██║██╔══██╗╚════██║             
██║     ╚██████╔╝██║  ██║    ███████║   ██║   ██║  ██║██║██║  ██║███████║             
╚═╝      ╚═════╝ ╚═╝  ╚═╝    ╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚══════╝             
```                                                                                      
                                                                                      ``

[<h1 id="custom-id"># My project Led Light for Stairs <br>  --> full source </h1>](https://github.com/dotignore/Raspberry/tree/master/differents_things/projects/08_stairs)

<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/video.gif" alt="" data-canonical-src="" width="400" />


```
My project Led Light for Stairs 

I create PCB on "Eagle PCB CAD" schematic capture user.

about Eagle PCB CAD you can read this
https://www.autodesk.com/products/eagle/overview

And create program in Coocox IDE on C++ to control LED lights 

Board stm32f4discovery
https://www.st.com/en/evaluation-tools/stm32f4discovery.html

```
# Components

```
Transistor TO-220  
our need any MOSFET with power opening Drain Carrent 5-10à Drain-to-Source Voltage 3v 
cep603al, 40N03P, 50n06, 140N03, IRL2505 ,75N3LLH6, irlml2402, irlml2502 
irLML0030, irfh3702, IRLR1xx, IRL2505, FQB140N03L, FQI140N03L, 75N3LLH6
cep603al is work
IRFZ44 isnt work

resistor need 0,125wat or 0,5wat 

resistor 100oHm 2 pieces, 220kOhm 2 pieces, 330oHm 2 pieces

capasitor ceramist 0,1uF 2 pieces
capasitor electorate 2200uF 25v 2 pieces

diode HER or UF on 3 amper 1 pieces any UF4004 on 1 amper 1 pieces

sensor IR from Arduino 2 pieces (5v power) 
Arduino HC-SR501
https://lastminuteengineers.com/pir-sensor-arduino-tutorial/

terminals 5mm
https://www.tme.eu/en/details/dg301-5.0-2p12/pcb-terminal-blocks/degson-electronics/dg301-5-0-02p-12-00a-h/

two key SWT-6x6x7 mm 
https://www.chinadaier.com/kfc-06-h-tact-switch/

You can use ATX power supplay +12v +5v
```

#stm32f4discovery #c++ #PCB #LED


# 01
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/pic1.jpg" alt="" data-canonical-src="" width="700" />

# 02
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/bGfVNYIzlRg.jpg" alt="" data-canonical-src="" width="700" />

# 03
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/plata.jpg" alt="" data-canonical-src="" width="700" />

# 04
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/cl_G4GawQ-A.jpg" alt="" data-canonical-src="" width="700" />

# 05
<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/08_stairs/pic2_.jpg" alt="" data-canonical-src="" width="700" />


```

// Ïîäîêëþ÷åì áèáëèòåêó
#include <stm32f4xx.h>

// Óòàíàâëèâàåì çíà÷åíèÿ
// óêàçûâàåì ïîðò D (GPIOD)
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


        // îáúÿâëÿåì ôóíêöèþ setup_leds
void setup_leds(void){
    // ñîçäà¸ì òàéìåð äëÿ êíîïêè GPIOA è äëÿ LED GPIOD (Make sure clocks work..)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
    GPIOA->MODER &= ~GPIO_MODER_MODER0;

    RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
    // óñòàíàâëèâàåì âûõîäíûå ïèíû 12, 13, 14, 15 ñèãíàëa (set to outputs)

    LED_PORTD->MODER |=
    		GPIO_MODER_MODER0_0 | GPIO_MODER_MODER1_0 |
    		GPIO_MODER_MODER2_0 | GPIO_MODER_MODER3_0 |
    		GPIO_MODER_MODER4_0 | GPIO_MODER_MODER5_0;

}
// ôóíêöèÿ âûêëþ÷åííûõ LED
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

// íó è ñàìà ôóíêöèÿ main c ïåðåìåííîé (void)
int main(void){
  setup_leds();         // áåð¸ì äàííûå èç ôóíêöèè void setup_leds(void)

//###########################################
  delay_cycles(5000000UL);  // 5 000 000
  //###########################################


  while (1)  {                // îòêðûâàåì öèêë
          if (GPIOA->IDR & GPIO_IDR_IDR_0) // åñëè âûïîëíÿåòñÿ óñëîâèå
          {
                  //LED_PORT->ODR = LED_ORANGE | LED_RED; // (åñëè äà òî âûïîëíÿåòñÿ óñëîâèå) åñëè êíîïêà íàæàòà òî ãîðÿò (ïî ÷àñîâîé)
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
          else if (GPIOA->IDR & GPIO_IDR_IDR_1)  // (åñëè äà òî âûïîëíÿåòñÿ óñëîâèå) åñëè êíîïêà íàæàòà òî ãîðÿò (ïðîòèâ ÷àñîâîé)
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



              switch_leds_off();		//ââûêëþ÷àåì PORTE


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
          {                                                                        // òîãäà


                 // switch_leds_off();                                        // áåð¸ì äàííûå èç ôóíêöèè void switch_leds_off(void)
                  //LED_PORT->ODR = LED_BLUE;
                  //LED_PORT->ODR = LED_BLUE | LED_GREEN; // (åñëè íåò òî âûïîëíÿåòñÿ óñëîâèå) åñëè êíîïêà îòæàòà òî ãîðÿò
          }


 }
}


```


[<h1 id="custom-id"> -- Back --</h1>](https://github.com/dotignore/Raspberry/tree/master/differents_things/)

<!-- =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= -->
