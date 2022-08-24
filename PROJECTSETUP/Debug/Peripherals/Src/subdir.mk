################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Peripherals/Src/gpio.c \
../Peripherals/Src/rcc.c \
../Peripherals/Src/uart.c 

OBJS += \
./Peripherals/Src/gpio.o \
./Peripherals/Src/rcc.o \
./Peripherals/Src/uart.o 

C_DEPS += \
./Peripherals/Src/gpio.d \
./Peripherals/Src/rcc.d \
./Peripherals/Src/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Peripherals/Src/%.o Peripherals/Src/%.su: ../Peripherals/Src/%.c Peripherals/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -c -I"/Users/sandilazad/Desktop/STM32/PROJECTSETUP/Core/Inc" -I"/Users/sandilazad/Desktop/STM32/PROJECTSETUP/CMSIS/Include" -I"/Users/sandilazad/Desktop/STM32/PROJECTSETUP/Peripherals/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Peripherals-2f-Src

clean-Peripherals-2f-Src:
	-$(RM) ./Peripherals/Src/gpio.d ./Peripherals/Src/gpio.o ./Peripherals/Src/gpio.su ./Peripherals/Src/rcc.d ./Peripherals/Src/rcc.o ./Peripherals/Src/rcc.su ./Peripherals/Src/uart.d ./Peripherals/Src/uart.o ./Peripherals/Src/uart.su

.PHONY: clean-Peripherals-2f-Src

