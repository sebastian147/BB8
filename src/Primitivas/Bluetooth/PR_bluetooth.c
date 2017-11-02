#include "DR_GPIO.h"
#include "PR_Bluetooth.h"

uint8_t RecibirInformacion (void)
{
	uint8_t dato;
	if(Serial_PopRx(&dato)==1)
	{
		return 255;
	}
	if(dato <= 11 )//todos los valores posibles de las opciones
	{
		return dato;
	}
	else
	{
		return 255;//no hacer nada
	}
}
