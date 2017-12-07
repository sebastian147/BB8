#include <DR_Motores_Continua.h>
#include "DR_PWM.h"

uint8_t G_accion = 0;
uint8_t G_motor_max=0;

void		ApagarMotores		( void )
{
	SetPIN( MOTOR1A , ON );
	SetPIN( MOTOR2A , ON );
	SetPIN( MOTOR3A , ON );
	SetPIN( MOTOR1B , ON );
	SetPIN( MOTOR2B , ON );
	SetPIN( MOTOR3B , ON );

}
void		LiberarMotores		( void )
{
	SetPIN( MOTOR1A , OFF );
	SetPIN( MOTOR2A , OFF );
	SetPIN( MOTOR3A , ON );
	SetPIN( MOTOR1B , OFF );
	SetPIN( MOTOR2B , OFF );
	SetPIN( MOTOR3B , ON );

}
void		Init_Motores		( void )
{

	SetPINSEL( MOTOR1A , PINSEL_GPIO );
	SetPINSEL( MOTOR2A , PINSEL_GPIO );
	SetPINSEL( MOTOR3A , PINSEL_GPIO );
	SetPINSEL( MOTOR1B , PINSEL_GPIO );
	SetPINSEL( MOTOR2B , PINSEL_GPIO );
	SetPINSEL( MOTOR3B , PINSEL_GPIO );


	SetDIR( MOTOR1A , GPIO_OUTPUT );
	SetDIR( MOTOR2A , GPIO_OUTPUT );
	SetDIR( MOTOR3A , GPIO_OUTPUT );
	SetDIR( MOTOR1B , GPIO_OUTPUT );
	SetDIR( MOTOR2B , GPIO_OUTPUT );
	SetDIR( MOTOR3B , GPIO_OUTPUT );

	SetPIN( MOTOR1A , OFF );
	SetPIN( MOTOR2A , OFF );
	SetPIN( MOTOR3A , OFF );
	SetPIN( MOTOR1B , OFF );
	SetPIN( MOTOR2B , OFF );
	SetPIN( MOTOR3B , OFF );

}
void		Actualizar_Motores		( void )
{
	static uint8_t	mitad = 0;
	static uint8_t porcentaje1 = 0, porcentaje2 = 0,porcentaje3 = 0, flag = 0;

		switch( G_accion )
		{
			case FRENAR:
					LiberarMotores();
					porcentaje1=0;
					porcentaje2=0;
					porcentaje3=0;
					flag=0;
					break;
			case MOVERADELANTE:
				if( flag!=1 )
				{
					flag=1;
					porcentaje1=100;
					porcentaje2=100;
					porcentaje3=100;
				}
					if(G_motor_max>porcentaje1)
						porcentaje1++;
					if(G_motor_max<porcentaje1)
						porcentaje1--;
					if(G_motor_max>porcentaje2)
						porcentaje2++;
					if(G_motor_max<porcentaje2)
						porcentaje2--;
					if(G_motor_max>porcentaje3)
						porcentaje3++;
					if(G_motor_max<porcentaje3)
						porcentaje3--;

					SetPIN( MOTOR1A , ON );
					SetPIN( MOTOR2A , ON );
					SetPIN( MOTOR3A , ON );
					SetPIN( MOTOR1B , OFF );
					SetPIN( MOTOR2B , OFF );
					SetPIN( MOTOR3B , OFF );
					break;
			case MOVERATRAS:
				if( flag!=1 )
				{
					flag=1;
					porcentaje1=100;
					porcentaje2=100;
					porcentaje3=100;
				}
					if(G_motor_max>porcentaje1)
						porcentaje1++;
					if(G_motor_max<porcentaje1)
						porcentaje1--;
					if(G_motor_max>porcentaje2)
						porcentaje2++;
					if(G_motor_max<porcentaje2)
						porcentaje2--;
					if(G_motor_max>porcentaje3)
						porcentaje3++;
					if(G_motor_max<porcentaje3)
						porcentaje3--;
					SetPIN( MOTOR1A , OFF );
					SetPIN( MOTOR2A , OFF );
					SetPIN( MOTOR3A , OFF );
					SetPIN( MOTOR1B , ON );
					SetPIN( MOTOR2B , ON );
					SetPIN( MOTOR3B , ON );
					break;
			case MOVERIZQUIERDA:
				if( flag!=1 )
				{
					flag=1;
					porcentaje1=100;
					porcentaje2=100;
					porcentaje3=0;
				}
					if(G_motor_max>porcentaje1)
						porcentaje1++;
					if(G_motor_max<porcentaje1)
						porcentaje1--;
					if(G_motor_max>porcentaje2)
						porcentaje2++;
					if(G_motor_max<porcentaje2)
						porcentaje2--;
					SetPIN( MOTOR1A , ON );
					SetPIN( MOTOR2A , OFF );
					SetPIN( MOTOR1B , OFF );
					SetPIN( MOTOR2B , ON );
					break;
			case MOVERDERECHA:
				if( flag!=1 )
				{
					flag=1;
					porcentaje1=100;
					porcentaje2=100;
					porcentaje3=0;
				}
					if(G_motor_max>porcentaje1)
						porcentaje1++;
					if(G_motor_max<porcentaje1)
						porcentaje1--;
					if(G_motor_max>porcentaje2)
						porcentaje2++;
					if(G_motor_max<porcentaje2)
						porcentaje2--;
					SetPIN( MOTOR1A , OFF );
					SetPIN( MOTOR2A , ON );
					SetPIN( MOTOR1B , ON );
					SetPIN( MOTOR2B , OFF );
					break;
			case GIRARADELANTEDERECHA:

				if( flag!=1 )
				{
					flag=1;
					porcentaje1=100;
					porcentaje2=100;
					porcentaje3=100;
				}
				if(G_motor_max>porcentaje1)
					porcentaje1++;
				if(G_motor_max<porcentaje1)
					porcentaje1--;
				if(G_motor_max>porcentaje3)
					porcentaje3++;
				if(G_motor_max<porcentaje3)
					porcentaje3--;
					if( mitad == 1)
					{
						if((G_motor_max/2)>porcentaje2)
							porcentaje2++;
						if((G_motor_max/2)<porcentaje2)
							porcentaje2--;
					}
					mitad++;
					mitad %= 1;
					SetPIN( MOTOR1A , ON );
					SetPIN( MOTOR2A , ON );
					SetPIN( MOTOR3A , ON );
					SetPIN( MOTOR1B , OFF );
					SetPIN( MOTOR2B , OFF );
					SetPIN( MOTOR3B , OFF );
					break;
			case GIRARADELANTEIZQUIERDA:
				if( flag!=1 )
				{
					flag=1;
					porcentaje1=100;
					porcentaje2=100;
					porcentaje3=100;
				}
					if( mitad == 1)
					{
						if((G_motor_max/2)>porcentaje1)
							porcentaje1++;
						if((G_motor_max/2)<porcentaje1)
							porcentaje1--;
					}
					if(G_motor_max>porcentaje2)
						porcentaje2++;
					if(G_motor_max<porcentaje2)
						porcentaje2--;
					if(G_motor_max>porcentaje3)
						porcentaje3++;
					if(G_motor_max<porcentaje3)
						porcentaje3--;
					mitad++;
					mitad %= 1;
					SetPIN( MOTOR1A , ON  );
					SetPIN( MOTOR2A , ON  );
					SetPIN( MOTOR3A , ON  );
					SetPIN( MOTOR1B , OFF );
					SetPIN( MOTOR2B , OFF );
					SetPIN( MOTOR3B , OFF );
					break;
			case GIRARATRASDERECHA:
				if( flag!=1 )
				{
					flag=1;
					porcentaje1=100;
					porcentaje2=100;
					porcentaje3=100;
				}
				if(G_motor_max>porcentaje1)
					porcentaje1++;
				if(G_motor_max<porcentaje1)
					porcentaje1--;
				if(G_motor_max>porcentaje3)
					porcentaje3++;
				if(G_motor_max<porcentaje3)
					porcentaje3--;
				if( mitad == 1)
					{

						if((G_motor_max/2)>porcentaje2)
							porcentaje2++;
						if((G_motor_max/2)<porcentaje2)
							porcentaje2--;
					}
					mitad++;
					mitad %= 1;
					SetPIN( MOTOR1A , OFF );
					SetPIN( MOTOR2A , OFF );
					SetPIN( MOTOR3A , OFF );
					SetPIN( MOTOR1B , ON );
					SetPIN( MOTOR2B , ON );
					SetPIN( MOTOR3B , ON );
					break;
			case GIRARATRASIZQUIERDA:
				if( flag!=1 )
				{
					flag=1;
					porcentaje1=100;
					porcentaje2=100;
					porcentaje3=100;

				}
					if( mitad == 1)
					{
						if((G_motor_max/2)>porcentaje1)
							porcentaje1++;
						if((G_motor_max/2)<porcentaje1)
							porcentaje1--;
					}
					if(G_motor_max>porcentaje2)
						porcentaje2++;
					if(G_motor_max<porcentaje2)
						porcentaje2--;
					if(G_motor_max>porcentaje3)
						porcentaje3++;
					if(G_motor_max<porcentaje3)
						porcentaje3--;
					mitad++;
					mitad %= 1;
					SetPIN( MOTOR1A , OFF );
					SetPIN( MOTOR2A , OFF );
					SetPIN( MOTOR3A , OFF );
					SetPIN( MOTOR1B , ON );
					SetPIN( MOTOR2B , ON );
					SetPIN( MOTOR2B , ON );
					break;


		}

	Actualizar_Pwm(porcentaje1,porcentaje2, porcentaje3);

}
void		Init_MotoresAll		( void )
{
	Init_Motores();
	Init_Pwm();
}
