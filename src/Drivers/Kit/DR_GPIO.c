#include "DR_GPIO.h"


void 		SetPINSEL		( uint8_t puerto, uint8_t pin, uint8_t modo )
{
	if( pin < 16 )
	{
		puerto = puerto * 2;
	}
	else
	{
		puerto = puerto * 2 + 1;
		pin = pin - 16;
	}
	PINSEL[puerto] &= ~( 0X03 << pin * 2 );
	PINSEL[puerto] |= ( modo << pin * 2 );
}
void 		SetPINMODE		( uint8_t puerto, uint8_t pin, uint8_t modo )
{
	if( pin < 16 )
	{
		puerto = puerto * 2;
	}
	else
	{
		puerto = puerto * 2 + 1;
		pin = pin - 16;
	}
	PINMODE[puerto] &= ~( 0X03 << pin * 2 );
	PINMODE[puerto] |= (modo << pin * 2 );
}
void 		SetDIR			( uint8_t puerto, uint8_t pin, uint8_t modo )
{
	GPIOs[8 * puerto] &=~( 0x01 << pin );
	GPIOs[8 * puerto] |=( modo << pin );
}
void 		SetPIN 			( uint8_t puerto, uint8_t pin, uint8_t modo )
{
	GPIOs[8 * puerto + 5] &=~( 0x01 << pin );
	GPIOs[8 * puerto + 5] |=( modo << pin );

}
uint8_t	    GetPIN 			( uint8_t puerto, uint8_t pin )
{
	return (( GPIOs[8 * puerto + 5] >> pin ) & 0x01 );

}
