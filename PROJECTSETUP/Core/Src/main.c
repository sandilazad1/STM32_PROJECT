#include "main.h"
#include "rcc.h"
#include "gpio.h"
#include <stdio.h>
#include "uart.h"

int main(void) {
    // ConfigHSE at 72Mhz
	rcc_HSE_config();
	//systick-at 72Mhz
	systick_init();
	uart_Uart_GpioA_Config();
	uart_Uart1_Config();
    gpio_Config();

	while (1) {
	//DelayMs(1000);
	printf("hello world");
	//uart_Tx_Config("8",1);
	gpio_On_Off();
	//DelayMs(1000);
	}
	return 0;
}
