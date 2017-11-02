/*
 * PR_Manejo_Motores_Servo.c
 *
 *  Created on: 2 de nov. de 2017
 *      Author: seba-pc
 */
#include "PR_Manejo_Motores_Servo.h"
void	Mover_Servo	(uint8_t	Movimiento)
{
	static uint8_t girando=NO_GIRAR;
	switch (Movimiento)
	{
		case GIRAR_180:
			Girar_A_180();
			girando=0;
			break;
		case GIRAR_90:
			Girar_A_90();
			girando=0;
			break;
		case GIRAR_0:
			Girar_A_0();
			girando=0;
			break;
		default:
			if(girando <= TERMINO_DE_GIRAR)
			{
				girando++;
			}
			else
			{
				girando=NO_GIRAR;
				Apagar_Servo();
			}
			break;
	}
}
