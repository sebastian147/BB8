/*
 * Info2_CortexM3adc.h
 *
 *  Created on: 10/10/2011
 *      Author: marcelo2
 */
#ifndef _registros
	#include "registros.h"
	#define		_registros
#endif

#define		PCONP				( ( register_t  * ) 0x400FC0C4UL )
#define		PCADC				PCONP->bit12

#define		PCLKSEL0			( ( register_t  * ) 0x400FC1A8UL )
#define		PCLK_ADC				PCONP->bits24y25

#define		ADC					( ( register_t  * ) 0x40034000UL )
#define		AD0CR				ADC[0].dword
#define		AD0GDR				ADC[1].dword
#define		AD0INTEN			ADC[3].dword
#define		AD0DR0				ADC[4].dWord
#define		AD0DR1				ADC[5].dWord
#define		AD0DR2				ADC[6].dWord
#define		AD0DR3				ADC[7].dWord
#define		AD0DR4				ADC[8].dWord
#define		AD0DR5				ADC[9].dWord
#define		AD0DR6				ADC[10].dWord
#define		AD0DR7				ADC[11].dWord
#define		AD0STAT				ADC[12].dword
#define		AD0TRM				ADC[13].dword

#define		AD0CR_SEL			ADC[0].bits0a7
#define		AD0CR_CLKDIV		ADC[0].bits8a15
#define		AD0CR_BURST			ADC[0].bits16
#define		AD0CR_PDN			ADC[0].bits21
#define		AD0CR_START			ADC[0].bits24a26
#define		AD0CR_EDGE			ADC[0].bits27:1

#define		AD0GDR_RESULT		ADC[1].ADC2.bits4a15
#define		AD0GDR_CHN			ADC[1].ADC2.bits24a26
#define		AD0GDR_OVERRUN		ADC[1].ADC2.bits30
#define		AD0GDR_DONE			ADC[1].ADC2.bits31

#define		ADINTEN0			ADC[3].bit00
#define		ADINTEN1			ADC[3].bit01
#define		ADINTEN2			ADC[3].bit02
#define		ADINTEN3			ADC[3].bit03
#define		ADINTEN4			ADC[3].bit04
#define		ADINTEN5			ADC[3].bit05
#define		ADINTEN6			ADC[3].bit06
#define		ADINTEN7			ADC[3].bit07
#define		ADGINTEN			ADC[3].bit08

#define		AD0DR0_RESULT		ADC[4].ADC2.bits4a15
#define		AD0DR0_OVERRUN		ADC[4].ADC2.bits30
#define		AD0DR0_DONE			ADC[4].ADC2.bits31

#define		AD0DR1_RESULT		ADC[5].ADC2.bits4a15
#define		AD0DR1_OVERRUN		ADC[5].ADC2.bits30
#define		AD0DR1_DONE			ADC[5].ADC2.bits31

#define		AD0DR2_RESULT		ADC[6].ADC2.bits4a15
#define		AD0DR2_OVERRUN		ADC[6].ADC2.bits30
#define		AD0DR2_DONE			ADC[6].ADC2.bits31

#define		AD0DR3_RESULT		ADC[7].ADC2.bits4a15
#define		AD0DR3_OVERRUN		ADC[7].ADC2.bits30
#define		AD0DR3_DONE			ADC[7].ADC2.bits31

#define		AD0DR4_RESULT		ADC[8].ADC2.bits4a15
#define		AD0DR4_OVERRUN		ADC[8].ADC2.bits30
#define		AD0DR4_DONE			ADC[8].ADC2.bits31

#define		AD0DR5_RESULT		ADC[9].ADC2.bits4a15
#define		AD0DR5_OVERRUN		ADC[9].ADC2.bits30
#define		AD0DR5_DONE			ADC[9].ADC2.bits31


#define		AD0DR6_RESULT		ADC[10].ADC2.bits4a15
#define		AD0DR6_OVERRUN		ADC[10].ADC2.bits30
#define		AD0DR6_DONE			ADC[10].ADC2.bits31

#define		AD0DR7_RESULT		ADC[11].ADC2.bits4a15
#define		AD0DR7_OVERRUN		ADC[11].ADC2.bits30
#define		AD0DR7_DONE			ADC[11].ADC2.bits31

#define		AD0STAT_DONE0		ADC[12].bit0
#define		AD0STAT_DONE1		ADC[12].bit1
#define		AD0STAT_DONE2		ADC[12].bit2
#define		AD0STAT_DONE3		ADC[12].bit3
#define		AD0STAT_DONE4		ADC[12].bit4
#define		AD0STAT_DONE5		ADC[12].bit5
#define		AD0STAT_DONE6		ADC[12].bit6
#define		AD0STAT_DONE7		ADC[12].bit7
#define		AD0STAT_OVRRUN0		ADC[12].bit8
#define		AD0STAT_OVRRUN1		ADC[12].bit9
#define		AD0STAT_OVRRUN2		ADC[12].bit10
#define		AD0STAT_OVRRUN3		ADC[12].bit11
#define		AD0STAT_OVRRUN4		ADC[12].bit12
#define		AD0STAT_OVRRUN5		ADC[12].bit13
#define		AD0STAT_OVRRUN6		ADC[12].bit14
#define		AD0STAT_OVRRUN7		ADC[12].bit15
#define		AD0STAT_ADINT		ADC[12].bit16

#define		AD0TRM_ADCOFFS		ADC[13].ADC3.bits4a7
#define		AD0TRM_TRIM			ADC[13].ADC3.bits8a11

