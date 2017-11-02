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
#include "DR_PWM.h"



void Apagar_Servo(void);
void Girar_A_0(void);
void Girar_A_90(void);
void Girar_A_180(void);
void Girar(void);



#endif /* DRIVERS_MOTORES_DR_MOTORES_SERVO_H_ */
