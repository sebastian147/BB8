/*
 * Info2_CortexM3pwm.h
 *
 *  Created on: 27/02/2012
 *      Author: Pablo
 */

#ifndef INFO2_CORTEXM3PWM_H_
#define INFO2_CORTEXM3PWM_H_

#ifndef _registros
	#include "registros.h"
	#define		_registros
#endif

#define		PWM1 		( ( register_t  * ) 0x40018000UL )
#define		PWM1IR		PWM1[0].dword
#define		PWM1TCR		PWM1[1].dword
#define		PWM1TC		PWM1[2].dword
#define		PWM1PR		PWM1[3].dword
#define		PWM1PC		PWM1[4].dword
#define		PWM1MCR		PWM1[5].dword
#define		PWM1MR0		PWM1[6].dword
#define		PWM1MR1		PWM1[7].dword
#define		PWM1MR2		PWM1[8].dword
#define		PWM1MR3		PWM1[9].dword
#define		PWM1CCR		PWM1[10].dword
#define		PWM1CR0		PWM1[11].dWord
#define		PWM1CR1		PWM1[12].dWord
#define		PWM1CR2		PWM1[13].dWord
#define		PWM1CR3		PWM1[14].dWord
#define		PWM1MR4		PWM1[16].dword
#define		PWM1MR5		PWM1[17].dword
#define		PWM1MR6		PWM1[18].dword
#define		PWM1PCR		PWM1[19].dword
#define		PWM1LER		PWM1[20].dword
#define		PWM1CTCR	PWM1[21].dword

#endif /* INFO2_CORTEXM3PWM_H_ */