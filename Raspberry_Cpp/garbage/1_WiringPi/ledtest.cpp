
led_test.cpp

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <stdio.h>
#include <wiringPi.h>

#define LED     0	// Wpi 0, GPIO 17 (P17), Phys 11 + GND

int main (void)
{
  printf ("Raspberry Pi Quick2Wire blink\n") ;

  wiringPiSetup () ;
  pinMode (LED, OUTPUT) ;

  for (;;)
  {
    digitalWrite (LED, HIGH) ;  // On
    delay (500) ;               // mS
    digitalWrite (LED, LOW) ;   // Off
    delay (500) ;
  }
  return 0 ;
}

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

$ gcc -o led_test led_test.cpp -lwiringPi
$ sudo ./led_test
