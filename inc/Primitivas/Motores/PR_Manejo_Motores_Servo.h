/*
 * PR_Manejo_Motores_Servo.h
 *
 *  Created on: 2 de nov. de 2017
 *      Author: seba-pc
 */

#ifndef PRIMITIVAS_MOTORES_PR_MANEJO_MOTORES_SERVO_H_
#define PRIMITIVAS_MOTORES_PR_MANEJO_MOTORES_SERVO_H_



#include "DR_Motores_Servo.h"



#define NO_GIRAR 100
#define TERMINO_DE_GIRAR 50
#define GIRAR 0

#define GIRAR_180	9
#define GIRAR_90 	10
#define GIRAR_0		11



void	Mover_Servo	(uint8_t	Movimiento);



#endif /* PRIMITIVAS_MOTORES_PR_MANEJO_MOTORES_SERVO_H_ */
