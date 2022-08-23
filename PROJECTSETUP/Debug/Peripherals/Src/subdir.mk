################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Peripherals/Src/gpio.c \
../Peripherals/Src/rcc.c 

OBJS += \
./Peripherals/Src/gpio.o \
./Peripherals/Src/rcc.o 

C_DEPS += \
./Peripherals/Src/gpio.d \
./Peripherals/Src/rcc.d 


# Each subdirectory must supply rules for building sources it contributes
Peripherals/Src/%.o Peripherals/Src/%.su: ../Peripherals/Src/%.c Peripherals/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -c -I"C:/Users/Snadil Azad/OneDrive/Desktop/STM32_PROJECT/PROJECTSETUP/Core/Inc" -I"C:/Users/Snadil Azad/OneDrive/Desktop/STM32_PROJECT/PROJECTSETUP/CMSIS/Include" -I"C:/Users/Snadil Azad/OneDrive/Desktop/STM32_PROJECT/PROJECTSETUP/Peripherals/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Peripherals-2f-Src

clean-Peripherals-2f-Src:
	-$(RM) ./Peripherals/Src/gpio.d ./Peripherals/Src/gpio.o ./Peripherals/Src/gpio.su ./Peripherals/Src/rcc.d ./Peripherals/Src/rcc.o ./Peripherals/Src/rcc.su

.PHONY: clean-Peripherals-2f-Src

