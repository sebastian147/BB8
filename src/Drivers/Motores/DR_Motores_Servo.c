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
void Girar_A_0(void)
{

	T0MR0 = 100000/2;

}
void Girar_A_90(void)
{
	T0MR0 =	150000/2;
}
void Girar_A_180(void)
{
	T0MR0 = 200000/2;
}
void Girar(void)
{
	static uint8_t flag=NO_GIRAR;
	switch(G_flag_Servo)
	{
	case GIRAR_0:
		Girar_A_0();
		flag=GIRAR;
		break;
	case GIRAR_90:
		Girar_A_90();
		flag=GIRAR;
		break;
	case GIRAR_180:
		Girar_A_180();
		flag=GIRAR;
		break;
	case GIRANDO:
			if(flag<=TERMINO_DE_GIRAR)
			{
				flag++;
			}
			else
			{
				flag=NO_GIRAR;
				Apagar_Servo();

			}
			break;
	default:
		break;
	}


}
