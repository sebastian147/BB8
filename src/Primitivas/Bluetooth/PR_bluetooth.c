#include "DR_GPIO.h"
#include "PR_Bluetooth.h"

uint8_t RecibirInformacion (void)
{
	uint8_t dato;
	Serial_PopRx(&dato);
	if(dato == 1)//todos los valores posibles de las opciones
	{
		return 1;
	}
	else
	{
		return 0;//no hacer nada
	}
}
