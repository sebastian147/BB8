#include <DR_Motores_Continua.h>
#include "aplicacion.h"

extern uint8_t g_SeedCount;

void SysTick_Handler(void)
{
	Estoy_vivo();
	Actualizar_Motores();
	Girar();
	Check_DACFlag();

}
void	Estoy_vivo	(void)
{
	static uint32_t diesseg=8000;
	if(diesseg !=0)
	{
		diesseg--;
		if(diesseg==0)
		{
			diesseg=8000;
			Serial_Send("Estoy vivo", 10);

		}
	}

}
void Check_DACFlag (void)
{

	DAC_RandSound ();
	g_SeedCount++;
}
