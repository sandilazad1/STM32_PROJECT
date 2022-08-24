/*
 * rcc.c
 *
 *  Created on: 22 Aug 2022
 *      Author: sandilazad
 */

#include "rcc.h"

/**
 * HSE Configuration Setup
 */

void rcc_HSE_config(void) {
	/*
	 *  Configuration Parameter --> STM32F103 Clock Tree
	 *  HSE is = 8Mhz
	 *  PLL_M  = 9
	 *  UBS_Prescalar     = 1.5
	 *  AHB_Prescalar     = 1
	 *  Cortex_Prescalar  = 1
	 *  --> 72 System Clock
	 *
	 *
	 *  APB1Prescalar  = 2 -->  36,72Mhz
	 *  APB2Prescalar  = 1 -->  72MHz Both
	 *  ADC_Prescalar  = 6 -->  12Mhz
	 */
	//PLL CONFIGUTRTION
	RCC->CFGR &= ~(RCC_CFGR_PLLMULL);
	RCC->CFGR |= (RCC_CFGR_PLLMULL9);
	//USB DIVIDER
	RCC->CFGR &= ~(RCC_CFGR_USBPRE);
	//HSEOsilator
	RCC->CR &= ~(RCC_CR_HSEON);
	RCC->CR |= (RCC_CR_HSEON);
	while ((RCC->CR & RCC_CR_HSERDY) == 0)
		;
	//HSE as PLL source
	RCC->CFGR &= ~(RCC_CFGR_PLLSRC);
	RCC->CFGR |= (RCC_CFGR_PLLSRC);
	RCC->CR &= ~(RCC_CR_PLLON);
	RCC->CR |= (RCC_CR_PLLON);
	while ((RCC->CR & RCC_CR_HSERDY) == 0)
		;
	//Flash pre-fetch enable and wait-state=2
	//0WS: 0-24MHz
	//1WS: 24-48MHz
	//2WS: 48-72MHz
	FLASH->ACR = FLASH_ACR_PRFTBE | FLASH_ACR_LATENCY_1;
	//Select PLL as main System Clock source
	RCC->CFGR &= ~(RCC_CFGR_SW);
	RCC->CFGR |= (RCC_CFGR_SW_1);
	while ((RCC->CFGR & RCC_CFGR_SWS_1) == 0)
		;
	//Peripherals Clock Setup
	//AHB PreScalar Setup
	RCC->CFGR &= ~(RCC_CFGR_HPRE);
	RCC->CFGR |= (RCC_CFGR_HPRE_0);
	//Peripherals Clock Setup
	//APB PreScalar Setup
	RCC->CFGR &= ~(RCC_CFGR_PPRE1);
	RCC->CFGR |= (RCC_CFGR_PPRE1_2);
	//Peripherals Clock Setup
	//APB2 PreScalar Setup
	RCC->CFGR &= ~(RCC_CFGR_PPRE2);
	//Peripherals Clock Setup
	//ADC PreScalar Setup
	RCC->CFGR &= ~(RCC_CFGR_ADCPRE);
	RCC->CFGR |= (RCC_CFGR_ADCPRE_1);

}

/**
 * SystrickConfiguration Setup
 */

void systick_init(void)
{
	SysTick->CTRL = 0;
	SysTick->LOAD = 0x00FFFFFF;
	SysTick->VAL = 0;
	SysTick->CTRL |= 5;
}

void DelayMillis(void)
{
	SysTick->LOAD = 72000-1;
	SysTick->VAL = 0;
	while((SysTick->CTRL & 0x00010000) == 0);
}

void DelayMs(unsigned long t)
{
	for(;t>0;t--)
		{
			DelayMillis();
		}
}
