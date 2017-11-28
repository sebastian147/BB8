#include <PR_Manejo_Motores_Continua.h>

extern uint8_t G_accion;
extern uint8_t G_motor_max;

void		ActualizarMotores	( uint8_t Accion )
{
	static uint8_t flag=0;
	if((Accion == GIRARATRASIZQUIERDA ) ||(Accion == GIRARATRASDERECHA ) ||(Accion == GIRARADELANTEIZQUIERDA ) ||(Accion == GIRARADELANTEDERECHA ) ||(Accion == MOVERDERECHA ) ||(Accion == MOVERIZQUIERDA ) ||(Accion == MOVERATRAS ) ||(Accion == MOVERADELANTE ) ||(Accion == FRENAR ))
	{
		G_accion = Accion;
	}

	if(Accion <= 100 || (Accion == 113  && flag!=1))
	{
		if(Accion==113 )
		{
			flag=1;
		}

		if(flag==1 && (Accion <=100))
		{
			G_motor_max = Accion;
			flag=0;
		}


	}
}
