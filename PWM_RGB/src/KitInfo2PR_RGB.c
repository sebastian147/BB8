/*
 * KitInfo2_PR_RGB.c
 *
 *  Created on: 27/02/2012
 *      Author: Pablo
 */

#include "KitInfo2_RGB.h"

extern uint8_t duty_rojo;
extern uint8_t duty_verde;
extern uint8_t duty_azul;

void LedRGB_Color(ColorRGB color, uint8_t porcentaje)
{
	switch(color)
	{
	case ROJO:
		duty_rojo = porcentaje;
		break;
	case VERDE:
		duty_verde = porcentaje;
		break;
	case AZUL:
		duty_azul = porcentaje;
		break;
	}
	Actualizar();
}
