/*
 * PR_Manejo_Motores_Servo.c
 *
 *  Created on: 2 de nov. de 2017
 *      Author: seba-pc
 */
#include "PR_Manejo_Motores_Servo.h"
extern uint8_t G_flag_Servo;

void	Mover_Servo	(uint8_t	Movimiento)
{
	if( (Movimiento == GIRAR_0) || (Movimiento == GIRAR_180) || (Movimiento == GIRAR_90))
	{
		G_flag_Servo=Movimiento;
	}
}
