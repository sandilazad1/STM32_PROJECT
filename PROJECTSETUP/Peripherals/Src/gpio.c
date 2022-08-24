/*
 * gpio.c
 *
 *  Created on: Aug 22, 2022
 *      Author: Snadil Azad
 *
 */

#include "gpio.h"

// gpioConfig
void gpio_Config() {

	RCC->APB2ENR &= ~(RCC_APB2ENR_IOPCEN);
	RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
	GPIOC->CRH &= ~(GPIO_CRH_MODE13);
	GPIOC->CRH |= GPIO_CRH_MODE13_1;
	GPIOC->CRH &= ~(GPIO_CRH_CNF13);

}

void gpio_On_Off(){

	  GPIOC->ODR ^= (1UL << 13);
}

