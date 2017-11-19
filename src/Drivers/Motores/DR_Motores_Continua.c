#include <DR_Motores_Continua.h>
#include "DR_PWM.h"

uint8_t G_accion = 0;

void		ApagarMotores		( void )
{
	SetPIN( MOTOR1A , ON );
	SetPIN( MOTOR2A , ON );
	SetPIN( MOTOR1B , ON );
	SetPIN( MOTOR2B , ON );
}
void		LiberarMotores		( void )
{
	SetPIN( MOTOR1A , OFF );
	SetPIN( MOTOR2A , OFF );
	SetPIN( MOTOR1B , OFF );
	SetPIN( MOTOR2B , OFF );
}
void		Init_Motores		( void )
{

	SetPINSEL( MOTOR1A , PINSEL_GPIO );
	SetPINSEL( MOTOR2A , PINSEL_GPIO );
	SetPINSEL( MOTOR1B , PINSEL_GPIO );
	SetPINSEL( MOTOR2B , PINSEL_GPIO );

	SetDIR( MOTOR1A , GPIO_OUTPUT );
	SetDIR( MOTOR2A , GPIO_OUTPUT );
	SetDIR( MOTOR1B , GPIO_OUTPUT );
	SetDIR( MOTOR2B , GPIO_OUTPUT );

	SetPIN( MOTOR1A , ON );
	SetPIN( MOTOR2A , ON );
	SetPIN( MOTOR1B , ON );
	SetPIN( MOTOR2B , ON );




}
void		Actualizar_Motores		( void )
{
	static uint8_t	mitad = 0;
	static uint8_t porcentaje1 = 0, porcentaje2 = 0;
		switch( G_accion )
		{
			case FRENAR:
					LiberarMotores();
					break;
			case MOVERADELANTE:
					porcentaje1++;
					porcentaje2++;
					SetPIN( MOTOR1A , ON );
					SetPIN( MOTOR2A , ON );
					SetPIN( MOTOR1B , OFF );
					SetPIN( MOTOR2B , OFF );
					break;
			case MOVERATRAS:
					porcentaje1++;
					porcentaje2++;
					SetPIN( MOTOR1A , OFF );
					SetPIN( MOTOR2A , OFF );
					SetPIN( MOTOR1B , ON );
					SetPIN( MOTOR2B , ON );
					break;
			case MOVERIZQUIERDA:
					porcentaje1++;
					porcentaje2++;
					SetPIN( MOTOR1A , ON );
					SetPIN( MOTOR2A , OFF );
					SetPIN( MOTOR1B , OFF );
					SetPIN( MOTOR2B , ON );
					break;
			case MOVERDERECHA:
					porcentaje1++;
					porcentaje2++;
					SetPIN( MOTOR1A , OFF );
					SetPIN( MOTOR2A , ON );
					SetPIN( MOTOR1B , ON );
					SetPIN( MOTOR2B , OFF );
					break;
			case GIRARADELANTEDERECHA:
					porcentaje1++;
					if( mitad == 1)
					{
						porcentaje2++;
					}
					mitad++;
					mitad %= 1;
					SetPIN( MOTOR1A , ON );
					SetPIN( MOTOR2A , ON );
					SetPIN( MOTOR1B , OFF );
					SetPIN( MOTOR2B , OFF );
					break;
			case GIRARADELANTEIZQUIERDA:
					porcentaje1 = 0; //liberarlo, despues ver bien como lo hago
					if( mitad == 1)
					{
						porcentaje1++;
					}
					porcentaje2++;
					mitad++;
					mitad %= 1;
					SetPIN( MOTOR1A , ON );
					SetPIN( MOTOR2A , ON );
					SetPIN( MOTOR1B , OFF );
					SetPIN( MOTOR2B , OFF );
					break;
			case GIRARATRASDERECHA:
					porcentaje1--; //liberarlo, despues ver bien como lo hago
					if( mitad == 1)
					{
						porcentaje2--;
					}
					mitad++;
					mitad %= 1;
					SetPIN( MOTOR1A , OFF );
					SetPIN( MOTOR2A , OFF );
					SetPIN( MOTOR1B , ON );
					SetPIN( MOTOR2B , ON );
					break;
			case GIRARATRASIZQUIERDA:
					if( mitad == 1)
					{
						porcentaje1--;
					}
					porcentaje2--;
					mitad++;
					mitad %= 1;
					SetPIN( MOTOR1A , OFF );
					SetPIN( MOTOR2A , OFF );
					SetPIN( MOTOR1B , ON );
					SetPIN( MOTOR2B , ON );
					break;


				/*case FRENAR:

					    break;
				case MOVERADELANTE:
						G_porcentaje1++;
						G_porcentaje2 = 0; //liberarlo, despues ver bien como lo hago
						break;
				case MOVERATRAS:
						G_porcentaje1--;
						G_porcentaje2 = 0; //liberarlo, despues ver bien como lo hago
						break;
				case MOVERIZQUIERDA:
						G_porcentaje1++;
						G_porcentaje2--;
						break;
				case MOVERDERECHA:
						G_porcentaje1++;
						G_porcentaje2++;
						break;
				case GIRARDERECHA:
						G_porcentaje1 = 0; //liberarlo, despues ver bien como lo hago
						G_porcentaje2++;
						break;
				case GIRARIZQUIERDA:
						G_porcentaje1 = 0; //liberarlo, despues ver bien como lo hago
						G_porcentaje2--;
						break;*/

	}
	Actualizar_Pwm(porcentaje1,porcentaje2);

}
void		Init_MotoresAll		( void )
{
	Init_Motores();
	Init_Pwm();
}
