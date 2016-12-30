/*
 * led.c
 *
 *  Created on: Dec 28, 2016
 *      Author: natnael
 */

#include "led.h"
#include "stm32f4xx_hal.h"

int a;

void led_init(void){

  GPIO_InitTypeDef init_gpio;

  __GPIOD_CLK_ENABLE();

  init_gpio.Pin  = GPIO_PIN_13;
  init_gpio.Mode = GPIO_MODE_OUTPUT_PP;
  init_gpio.Pull = GPIO_PULLDOWN;
  init_gpio.Speed= GPIO_SPEED_LOW;

  HAL_GPIO_Init(GPIOD, &init_gpio);

}

void led_on(void){

  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_13,GPIO_PIN_SET);

}

void led_off(void){

  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_13,GPIO_PIN_RESET);
}
void delay_t(unsigned long a){

 while(a--){

     __NOP();
 }


}



