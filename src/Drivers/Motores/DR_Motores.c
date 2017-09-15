#include "DR_Motores.h"
#include "DR_PWM.h"

uint8_t G_accion = 0;

void		ApagarMotores		( void )
{
	SetPIN( MOTOR1 , OFF );
	SetPIN( MOTOR2 , OFF );
}
void		LiberarMotores		( void )
{

}
void		Init_Motores		( void )
{
	SetPINSEL( MOTOR1 , PINSEL_GPIO );
	SetPINSEL( MOTOR2 , PINSEL_GPIO );


	SetDIR( MOTOR1 , GPIO_OUTPUT );
	SetDIR( MOTOR2 , GPIO_OUTPUT );

	SetPIN( MOTOR1 , OFF );
	SetPIN( MOTOR2 , OFF );


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
					break;
			case MOVERATRAS:
					porcentaje1--;
					porcentaje2--;
					break;
			case MOVERIZQUIERDA:
					porcentaje1++;
					porcentaje2--;
					break;
			case MOVERDERECHA:
					porcentaje1--;
					porcentaje2++;
					break;
			case GIRARADELANTEDERECHA:
					porcentaje1++;
					if( mitad == 1)
					{
						porcentaje2++;
					}
					mitad++;
					mitad %= 1;
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
					break;
			case GIRARATRASDERECHA:
					porcentaje1--; //liberarlo, despues ver bien como lo hago
					if( mitad == 1)
					{
						porcentaje2--;
					}
					mitad++;
					mitad %= 1;
					break;
			case GIRARATRASIZQUIERDA:
					if( mitad == 1)
					{
						porcentaje1--;
					}
					porcentaje2--;
					mitad++;
					mitad %= 1;
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
