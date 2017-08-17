#include "DR_Motores.h"
#include "DR_Init_Motores.h"


uint8_t G_Motor = 0;

void		ApagarMotores		( void )
{
	SetPIN( MOTOR1 , OFF );
	SetPIN( MOTOR2 , OFF );
}
void		LiberarMotores		( void )
{

}
void		MoverMotores		( void )
{
	switch( G_Motor )
	{
		case FRENAR:
			    break;
		case MOVERADELANTE:
				break;
		case MOVERATRAS:
				break;
		case MOVERIZQUIERDA:
				break;
		case MOVERDERECHA:
				break;
		case GIRARDERECHA:
				break;
		case GIRARIZQUIERDA:
				break;
	}
}
