#include "DR_Init_Motores.h"


uint8_t duty_prendido = 0;

void		Init_Motores		( void )
{
	SetPINSEL( MOTOR1 , PINSEL_GPIO );
	SetPINSEL( MOTOR2 , PINSEL_GPIO );


	SetDIR( MOTOR1 , GPIO_OUTPUT );
	SetDIR( MOTOR2 , GPIO_OUTPUT );

	SetPIN( MOTOR1 , OFF );
	SetPIN( MOTOR2 , OFF );


}
void		Init_MotoresAll		( void )
{
	Init_Motores();
	Init_Pwm();
}
void 		Init_Pwm			( void )
{

	uint32_t aux_prescale;

	SetPINSEL( PORT3 , 1 , PINSEL_GPIO );	//IN0
	SetDIR( 3 , 1 , 1 );

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
	PWM1MR3 = duty_prendido;

	PWM1LER = 0x1D;

	PWM1PCR |= 1<<10;	//habilito salida PWM2

	PWM1TCR |=	1<<1;		//se resetea el contador
	PWM1TCR = 0x09;			//se habilitan contador y PWM
}
