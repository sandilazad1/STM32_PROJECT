#include "main.h"
#include "rcc.h"
#include "gpio.h"

int main(void) {
    // ConfigHSE at 72Mhz
	rcc_HSE_config();
	//systick-at 72Mhz
	systick_init();
    gpio_Config();

	while (1) {
	DelayMs(100);
	gpio_On_Off();
	DelayMs(100);
	}
	return 0;
}
