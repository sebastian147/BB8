/*
 * UART.h
 *
 *  Created on: 17 de set. de 2017
 *      Author: seba-pc
 */
#ifndef DR_UART_H_
#define DR_UART_H_



#include "RegsLPC17xx.h"



void UART_Init(uint32_t baudRate);
uint8_t UART_ReceiveByte(void);
void UART_SendByte(uint8_t byte);



#endif /* DR_UART_H_ */
