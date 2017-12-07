#include "DR_PWM.h"



void		Actualizar_Pwm		( uint8_t porcentaje1, uint8_t porcentaje2, uint8_t porcentaje3 )
{
	PWM1MR2 = porcentaje1;
	PWM1MR3 = porcentaje2;
	PWM1MR4 = porcentaje3;


	PWM1LER = 0x1C;		//habilito latch de match 2, 3 y 4
}
void		Init_Pwm		( void )
{

	uint32_t aux_prescale;

	PINSEL4 |= 1<<2;	FIO2DIR |= 1<<1;//lo pongo como funcion 1 y salida
	PINSEL4 |= 1<<4;	FIO2DIR |= 1<<2;//lo pongo como funcion 1 y salida
	PINSEL4 |= 1<<6;	FIO2DIR |= 1<<3;//lo pongo como funcion 1 y salida//este es para los servos

	PWM1IR = 0x0000073F;//configuro interrupcionese
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
	PWM1MR0 = MOTOR_MAX;		//establece el periodo del PWM
	PWM1MR2 = 0;
	PWM1MR4 = 0;
	PWM1MR3 = 0;

	PWM1LER = 0x1D;//sirve para actualizar el registro de cada match seteado en 1

	PWM1PCR |= 1<<10;	//habilito salida PWM2
	PWM1PCR |= 1<<11;	//habilito salida PWM3
	PWM1PCR |= 1<<12;	//habilito salida PWM4

	PWM1TCR |=	1<<1;		//se resetea el contador
	PWM1TCR = 0x09;			//se habilitan contador y PWM
}
