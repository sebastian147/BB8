/*
 * DR_Motores_Servo.h
 *
 *  Created on: 2 de nov. de 2017
 *      Author: seba-pc
 */

#ifndef DRIVERS_MOTORES_DR_MOTORES_SERVO_H_
#define DRIVERS_MOTORES_DR_MOTORES_SERVO_H_



#include "RegsLPC17xx.h"
#include "KitInfo2.h"
#include "DR_Timer.h"



void Apagar_Servo(void);
void Girar_A_0(void);
void Girar_A_90(void);
void Girar_A_180(void);
void Girar(void);
void Init_Servo_Motor(void);



#define SERVO_MOTOR 0,25

#define NO_GIRAR 100
#define TERMINO_DE_GIRAR 1200
#define GIRAR 0

#define GIRAR_180	110
#define GIRAR_90 	111
#define GIRAR_0		112
#define GIRANDO		15



#endif /* DRIVERS_MOTORES_DR_MOTORES_SERVO_H_ */
