#include "main.h"
#include "rcc.h"
#include "gpio.h"

int main(void) {
	// ConfigHSE at 72Mhz
	rcc_HSE_config();
	// ConfigGpioA
	gpio_Config();

	while (1) {

	}
}
