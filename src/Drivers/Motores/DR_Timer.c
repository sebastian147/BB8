#include "DR_Timer.h"

void TIMER0_Init(void)
{
	PCONP |= 1 << 1; 				// Habilitar Timer 0

	PCLKSEL0 |=(0x02 << 2);		// PCLK = CCLK/2

	T0MR0 = 0;			// modificar de aca, la cantidad de prendido

	T0MR1 = PERIODO;		//poner en 20ms el periodo

	T0MCR = 25;					// Match 0 interrumpre y 1 resetea e interrumpe

	T0PR = 0;						// Prescaler en 0

	T0CTCR = 0;						// Funcionamiento como timer

	T0TCR = 0x02;					// Apago y reseteo el timer
	T0TCR = 0x01;					// Enciendo el timer

	ISER0 |= 1<<1; 					// Habilito interrupcion del Timer0 en el vector de interrupciones.
}

void TIMER0_IRQHandler(void)
{

    if(T0IR & 0x01)					// Si interrumpio match 0
     {
     	T0IR |= 0x01 ; 				// Borro flag del Match 0
     	SetPIN(SERVO_MOTOR,OFF);
     }
    if(T0IR & 0x02)					// Si interrumpio match 1
     {
     	T0IR |= 0x02; 				// Borro flag del Match 1
     	SetPIN(SERVO_MOTOR,ON);
     }
}

