#include "DR_GPIO.h"
#include "DR_Bluetooth.h"

void	init_bluetooth(void)
{
	//UART_Init(38400);//asii para canfigurar
	UART_Init(9600);//asi para usar
/*	SetPINSEL(KEY,GPIOs);
	SetDIR(KEY,GPIO_OUTPUT);
	SetPIN(KEY,1);//activo el modo AT

	SetPINSEL(STATE,GPIOs);
	SetDIR(STATE,GPIO_OUTPUT);
	SetPIN(STATE,1);//activo el modo AT*/
}
