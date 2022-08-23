/*
 * gpio.c
 *
 *  Created on: Aug 22, 2022
 *      Author: Snadil Azad
 *
 */


#include "gpio.h"

// gpio config
void gpio_Config()
	{
    RCC->APB2ENR &= ~(RCC_APB2ENR_IOPAEN);
	RCC->APB2ENR |=   RCC_APB2ENR_IOPAEN;
	GPIOA->CRH &= ~(GPIO_CRH_MODE13);
	GPIOA->CRH |=   GPIO_CRH_MODE13_1;
	GPIOA->CRH &= ~(GPIO_CRH_CNF13);
	GPIOA->CRH |=   GPIO_CRH_CNF13_1;

    }


