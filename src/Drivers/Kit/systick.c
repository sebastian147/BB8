#include <DR_Motores_Continua.h>
#include "aplicacion.h"


void SysTick_Handler(void)
{
	static uint32_t diesseg=1000;
	if(diesseg !=0)
	{
		diesseg--;
		if(diesseg==0)
		{
			diesseg=1000;
			Serial_Send("Estoy vivo", 10);

		}
	}


	Actualizar_Motores();
	 Girar();


}
