/*
 * Info2_CortexM3pwm.h
 *
 *  Created on: 27/02/2012
 *      Author: Pablo
 */

#ifndef DR_INIT_MOTORES_H_
#define DR_INIT_MOTORES_H_



#include "RegsLPC17xx.h"
#include "KitInfo2.h"



#define 	RGB_MAX				255		//maximo valor que puede tomar un color
#define	 	PWM_FREC			1000
#define 	PWM_PRESCALE_NS		(1000000000/(PWM_FREC*RGB_MAX))	//en ns

#define 	MOTOR1				1,1//revisar si estos pines estan bien
#define		MOTOR2				1,2//revisar si estos pines estan bien




void 		Init_Pwm			( void );
void		Init_Motores		( void );
void		Init_MotoresAll		( void );



#endif /* DR_INIT_MOTORES_H_ */
