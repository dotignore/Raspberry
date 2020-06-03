/*
 * how2.org.ua smt32 interrupt example. by dimas
 * */

#include <stm32f4xx.h>
#include <stm32f4xx_rcc.h>
#include <stm32f4xx_gpio.h>
#include <stm32f4xx_syscfg.h>
#include <stm32f4xx_exti.h>
#include <misc.h>

const uint16_t LEDS = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;  // все диоды

const uint16_t LED[] = {GPIO_Pin_12, GPIO_Pin_13, GPIO_Pin_14, GPIO_Pin_15};  // массив с диодами


void ButtonInit() {
	  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);  // разрешаем тактирование
	  GPIO_InitTypeDef gpio_b;  // структура для настройки
	  GPIO_StructInit(&gpio_b); // вносим стандартные настройки
	  gpio_b.GPIO_Mode = GPIO_Mode_IN;  // работаем как вход
	  GPIO_Init(GPIOA, &gpio_b);
}

void leds_init() {
	  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);  // тактирование
	  /* аналогично ButtonInit() */
	  GPIO_InitTypeDef gpio;
	  GPIO_StructInit(&gpio);
	  gpio.GPIO_OType = GPIO_OType_PP;
	  gpio.GPIO_Mode = GPIO_Mode_OUT;
	  gpio.GPIO_Pin = LEDS;
	  GPIO_Init(GPIOD, &gpio);
}

void it_init() {
	SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOA,EXTI_PinSource0); // разрешаем внешнее прерывание по порту А
	EXTI_InitTypeDef exti;  // структура для настройки
	exti.EXTI_Line = EXTI_Line0;  // по линии 0
	exti.EXTI_Mode = EXTI_Mode_Interrupt;  // прерывание а не событие
	exti.EXTI_Trigger = EXTI_Trigger_Rising;  // срабатывание по переднему фронту
	exti.EXTI_LineCmd = ENABLE;  // вкл
	EXTI_Init(&exti);

	NVIC_InitTypeDef nvic;
	nvic.NVIC_IRQChannel = EXTI0_IRQn;
	nvic.NVIC_IRQChannelPreemptionPriority = 2;  // приоритет канала (от 0 до 15)
	nvic.NVIC_IRQChannelSubPriority = 2;  // приоритет подгруппы
	nvic.NVIC_IRQChannelCmd = ENABLE;

	NVIC_Init(&nvic);
}

u16 flag = 0;  // номер горяжего диода

void EXTI0_IRQHandler(void){
	/* обработчик прерывания */
	if (EXTI_GetITStatus(EXTI_Line0) != RESET){  // если не reset
		flag += 1;  // увеличивает флаг
		if (flag >= 4) flag = 0;  // усли больше 3 сбрасываем

		EXTI_ClearITPendingBit(EXTI_Line0);  // сбрасываем флаг прерывания
	}
}

int main(){
	ButtonInit();  // инициализация кнопки
	it_init(); // инициализация прервыния
	leds_init(); // инициализация диодов

  do {
	  GPIO_Write(GPIOD, LED[flag]);  // зажигаем тукущий диод. остальные тушим
  } while(1);
}
