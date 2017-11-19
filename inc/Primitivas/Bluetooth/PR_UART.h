/*
 * PR_UART.h

 *
 *  Created on: 27 de set. de 2017
 *      Author: seba-pc
 */
#ifndef PR_UART_H_
#define PR_UART_H_

#include "DR_UART.h"

#define TXBUFFER_SIZE	128
#define RXBUFFER_SIZE	128

#define TXPIN 0,15
#define RXPIN 0,16



uint8_t Serial_PushTx(uint8_t dato);
uint8_t Serial_PopRx(uint8_t *dato);
uint8_t Serial_Send(const uint8_t *buffer, uint8_t count);
void Serial_RxIntHandler(void);
void Serial_TxIntHandler(void);

#endif /* PR_UART_H_ */

