/*
 * KitInfo2FW_RGB.c
 *
 *  Created on: 27/02/2012
 *      Author: Pablo
 */

#include "KitInfo2_RGB.h"
#include "Info2_CortexM3pwm.h"
#include "Info2_CortexM3config.h"
#include "Info2_CortexM3gpio.h"

/*#define		PCLKSEL 		( ( register_t  * ) 0x400FC1A8UL )
#define		PCLKSEL0		PCLKSEL[0]
#define		PCLKSEL1 		PCLKSEL[1]*/

uint8_t duty_rojo = 0;		//Por defecto, todos los colores apagados
uint8_t duty_verde = 0;
uint8_t duty_azul = 0;

void Inic_LedRGB(void)
{
	uint32_t aux_prescale;

	PINSEL4 |= 1<<2;	FIO2DIR |= 1<<1;
	PINSEL4 |= 1<<4;	FIO2DIR |= 1<<2;
	PINSEL4 |= 1<<6;	FIO2DIR |= 1<<3;

	PWM1IR = 0x0000073F;
	PWM1TCR = 0x00;
	PWM1CTCR = 0x00;
	PWM1MCR = 0x00;
	PWM1CCR = 0x00;
	PWM1PCR = 0x00;
	PWM1LER = 0x00;
	if( (PWM_PRESCALE_NS%1000) <500 )
		aux_prescale = 	 PWM_PRESCALE_NS/1000;
	else
		aux_prescale = 	 PWM_PRESCALE_NS/1000 + 1;

	PWM1PR = (aux_prescale*25000000/1000000) -1;

	//Configuracion match 0,2,3,4
	PWM1MCR |= 1<<1;	//reset match 0
	PWM1MR0 = RGB_MAX;		//establece el periodo del PWM
	PWM1MR3 = duty_rojo;
	PWM1MR4 = duty_verde;
	PWM1MR2 = duty_azul;

	PWM1LER = 0x1D;

	PWM1PCR |= 1<<10;	//habilito salida PWM2
	PWM1PCR |= 1<<11;	//habilito salida PWM3
	PWM1PCR |= 1<<12;	//habilito salida PWM4

	PWM1TCR |=	1<<1;		//se resetea el contador
	PWM1TCR = 0x09;			//se habilitan contador y PWM
}

void Actualizar(void)
{
	PWM1MR3 = duty_rojo;
	PWM1MR4 = duty_verde;
	PWM1MR2 = duty_azul;

	PWM1LER = 0x1C;		//habilito latch de match 2, 3 y 4
}