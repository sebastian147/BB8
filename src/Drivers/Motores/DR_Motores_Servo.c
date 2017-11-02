/*
 * DR_Motores_Servo.c
 *
 *  Created on: 2 de nov. de 2017
 *      Author: seba-pc
 */
#include "DR_Motores_Servo.h"
uint8_t duty=0;
void Apagar_Servo(void)
{
	duty=0;
	Girar();
}
void Girar_A_0(void)
{

	duty=25;
	Girar();


}
void Girar_A_90(void)
{
	duty=75;
	Girar();
}
void Girar_A_180(void)
{
	duty=125;
	Girar();
}
void Girar(void)
{

		PWM1MR2=duty;

		PWM1LER = 0x1C;

}
