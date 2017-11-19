/**
 	\file FW_KitInit.h
 	\brief Header de inicializacion del kit base
 	\author Pablo Irrera Condines
 	\date 2015.04.30
*/

#ifndef FW_KITINIT_H_
#define FW_KITINIT_H_

#include "DR_PWM.h"
#include "DR_Timer.h"
#include "DR_Bluetooth.h"
#include "DR_Motores_Servo.h"



void 		Kit_Init			( void );
void 		PLL_Init			( void );
void 		Kit_BaseInit		( void );



#endif /* FW_KITINIT_H_ */
