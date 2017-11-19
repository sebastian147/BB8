/*
 * DR_Motores_Servo.c
 *
 *  Created on: 2 de nov. de 2017
 *      Author: seba-pc
 */
#include "DR_Motores_Servo.h"
uint8_t G_flag_Servo=0;

void Apagar_Servo(void)
{
	T0MR0 = 0;
}
void Init_Servo_Motor(void)
{
	SetPINSEL(SERVO_MOTOR,PINSEL_GPIO);
	SetDIR(SERVO_MOTOR,GPIO_OUTPUT);
	SetPIN(SERVO_MOTOR,OFF);
}
void Girar_A_0(void)
{

	T0MR0 = 50000/2;

}
void Girar_A_90(void)
{
	T0MR0 =	150000/2;
}
void Girar_A_180(void)
{
	T0MR0 = 250000/2;
}
void Girar(void)
{
	static uint8_t flag=NO_GIRAR;
	static uint32_t count=0;
	if( (flag != GIRANDO))
	{
		flag=G_flag_Servo;
		G_flag_Servo=NO_GIRAR;
	}
	switch(flag)
	{
	case GIRAR_0:
		Girar_A_0();
		flag=GIRANDO;
		count=0;
		break;
	case GIRAR_90:
		Girar_A_90();
		flag=GIRANDO;
		count=0;
		break;
	case GIRAR_180:
		Girar_A_180();
		flag=GIRANDO;
		count=0;
		break;
	case GIRANDO:
			if(count<=TERMINO_DE_GIRAR)
			{
				count++;
			}
			else
			{
				flag=NO_GIRAR;
				count=0;
			}
			break;
	case NO_GIRAR:
		Apagar_Servo();

		break;
	}


}
