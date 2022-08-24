/*
 * rcc.h
 *
 *  Created on: 22 Aug 2022
 *      Author: sandilazad
 */

#ifndef INC_RCC_H_
#define INC_RCC_H_

#include<main.h>

/**
 * HSE Configuration Setup
 */

void rcc_HSE_config(void);

/**
 * SystrickConfiguration Setup
 */

void systick_init(void);

void DelayMs(unsigned long);


#endif /* INC_RCC_H_ */
