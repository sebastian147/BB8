#include "DR_GPIO.h"
#include "PR_Bluetooth.h"
#include "PR_UART.h"

uint8_t RecibirInformacion (void)
{
	uint8_t dato;
	/*if(Serial_PopRx(&dato)==1)
	{
		return 255;
	}
	if(dato <= 500 )//todos los valores posibles de las opciones
	{
		return dato;
	}
	else
	{
		return 255;//no hacer nada
	}*/
	if(Serial_PopRx(&dato)==1)
		{
//			return 255;
		}	return dato;
}
