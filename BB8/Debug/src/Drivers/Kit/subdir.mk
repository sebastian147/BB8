################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Drivers/Kit/DR_GPIO.c \
../src/Drivers/Kit/DR_KitInit.c \
../src/Drivers/Kit/cr_startup_lpc175x_6x.c \
../src/Drivers/Kit/crp.c \
../src/Drivers/Kit/systick.c 

OBJS += \
./src/Drivers/Kit/DR_GPIO.o \
./src/Drivers/Kit/DR_KitInit.o \
./src/Drivers/Kit/cr_startup_lpc175x_6x.o \
./src/Drivers/Kit/crp.o \
./src/Drivers/Kit/systick.o 

C_DEPS += \
./src/Drivers/Kit/DR_GPIO.d \
./src/Drivers/Kit/DR_KitInit.d \
./src/Drivers/Kit/cr_startup_lpc175x_6x.d \
./src/Drivers/Kit/crp.d \
./src/Drivers/Kit/systick.d 


# Each subdirectory must supply rules for building sources it contributes
src/Drivers/Kit/%.o: ../src/Drivers/Kit/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__LPC17XX__ -D__REDLIB__ -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Aplicacion" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Drivers/Acelerometro" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Drivers/Bluetooth" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Drivers/Kit" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Primitivas/Acelerometro" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Primitivas/Bluetooth" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Primitivas/Kit" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Primitivas/Motores" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Drivers/Motores" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Drivers" -I"/home/seba-pc/Documentos/utn/info 2/Trabajo_practico_Final/BB8/inc/Primitivas" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


