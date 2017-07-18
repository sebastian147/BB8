################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Primitivas/PR_rgb.c 

OBJS += \
./src/Primitivas/PR_rgb.o 

C_DEPS += \
./src/Primitivas/PR_rgb.d 


# Each subdirectory must supply rules for building sources it contributes
src/Primitivas/%.o: ../src/Primitivas/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__LPC17XX__ -D__REDLIB__ -I"/home/seba/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Aplicacion" -I"/home/seba/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Drivers" -I"/home/seba/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Primitivas" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


