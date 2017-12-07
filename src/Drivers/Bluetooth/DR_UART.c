#include "DR_UART.h"
#include "DR_GPIO.h"
#include "PR_UART.h"

void UART_Init(uint32_t baudRate)
{
	uint32_t aux;

	//1.- Registro PCONP - bit 4 en 1 prende la UART1:
	PCONP |= 0x01<<4;
	//2.- Registro PCLKSEL0 - bits 8 y 9 en 0 seleccionan que el clk de la UART1 sea 25MHz:
	PCLKSEL0 &= ~(0x03<<8);
	//3.- Registro U0LCR - transmision de 8 bits, 1 bit de stop, sin paridad, sin break cond, DLAB = 1:
	U1LCR = 0x00000083;
	//4.- Registros U0DLL y U0DLM - calculo el divisor para el baud rate:
	aux = (100000000/4)/16;
	if(aux % baudRate >= baudRate/2)	//si el resto es mayor a la mitad del divisor
		aux = aux / baudRate + 1;		//redondeo para arriba
	else
		aux = aux / baudRate;
	U1DLM = (aux>>8)&0xFF;
	U1DLL = (aux>>0)&0xFF;
	//5.- Registros PINSEL - habilitan las funciones especiales de los pines:
	SetPINSEL(0,15,PINSEL_FUNC1);
	SetPINSEL(0,16,PINSEL_FUNC1);
	//6.- Registro U1LCR, pongo DLAB en 0:
	U1LCR = 0x03;
	//7. Habilito las interrupciones (En la UART -IER- y en el NVIC -ISER)
	U1IER = 0x03;
	ISER0 |= (1<<6);
}

uint8_t UART_ReceiveByte(void)
{
	return U1RBR;
}

void UART_SendByte(uint8_t byte)
{
	U1THR = byte;
}

void UART1_IRQHandler(void)
{
	uint8_t iir;
	do
	{
		//IIR es reset por HW, una vez que lo lei se resetea.
		iir = U1IIR;
		if ( iir & 0x02 ) //THRE
		{
			Serial_TxIntHandler();
		}
		if ( iir & 0x04 ) //Data ready
		{
			Serial_RxIntHandler();
		}
	}
	while(!(iir & 0x01)); /* me fijo si cuando entre a la ISR habia otra
						     	int. pendiente de atencion: b0=1 (ocurre unicamente si dentro del mismo
								espacio temporal lleguan dos interrupciones a la vez) */
}

