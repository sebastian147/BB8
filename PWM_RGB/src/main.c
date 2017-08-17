/*
===============================================================================
 Name        : PWM_RGB.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#include <cr_section_macros.h>

#include "KitInfo2_RGB.h"
#include "Ejemplo_RGB.h"

volatile uint32_t msTicks = 5,f_avanzosec = 1;

int main(void)
{
	uint32_t secuencia = 1, cuenta = DELAY_ENTRE_SEC;
	uint8_t rojo = 255,verde = 0,azul = 0;

	TimerTickInic( 1000 );

	LedRGB_Color(ROJO, rojo);
	LedRGB_Color(VERDE, verde);
	LedRGB_Color(AZUL, azul);
	Inic_LedRGB();

	while(1)
	{
		if(f_avanzosec)
		{
			f_avanzosec = 0;
			switch(secuencia)
			{
			case 1:
				rojo--;
				verde++;
				LedRGB_Color(ROJO, rojo);
				LedRGB_Color(VERDE, verde);
				if(verde == 255)
					secuencia = 2;
				break;
			case 2:
				cuenta--;
				if(!cuenta)
				{
					secuencia = 3;
					cuenta = DELAY_ENTRE_SEC;
				}
				break;
			case 3:
				verde--;
				azul++;
				LedRGB_Color(VERDE, verde);
				LedRGB_Color(AZUL, azul);
				if(azul==255)
					secuencia = 4;
				break;
			case 4:
				cuenta--;
				if(!cuenta)
				{
					secuencia = 5;
					cuenta = DELAY_ENTRE_SEC;
				}
				break;
			case 5:
				azul--;
				rojo++;
				LedRGB_Color(AZUL, azul);
				LedRGB_Color(ROJO, rojo);
				if(rojo==255)
					secuencia = 6;
				break;

			case 6:
				cuenta--;
				if(!cuenta)
				{
					secuencia = 1;
					cuenta = DELAY_ENTRE_SEC;
				}
				break;
			}
		}
	}
	return 0 ;
}
