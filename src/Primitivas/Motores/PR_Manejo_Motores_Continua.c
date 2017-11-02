#include <PR_Manejo_Motores_Continua.h>

extern uint8_t G_accion;

void		ActualizarMotores	( uint8_t Accion )
{
	G_accion = Accion;
}
