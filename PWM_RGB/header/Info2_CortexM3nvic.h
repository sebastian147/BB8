#ifndef _registros
	#include "registros.h"
	#define		_registros
#endif

#define		ISER 		( ( register_t  * ) 0xE000E100UL )
#define		ISER0		ISER->dword
#define		ISER1		( ISER + 1 )->dword
#define		ISE_EINT3	ISER->bit21
#define		ISE_ADC		ISER->bit22

#define		ICER 		( ( register_t  * ) 0xE000E180UL )
#define		ICER0		ICER->dword
#define		ICER1		( ICER + 1 )->dword
#define		ICE_EINT3	ICER->bit21
#define		ICE_ADC		ICER->bit22

#define		ISPR 		( ( register_t  * ) 0xE000E200UL )
#define		ISPR0		ISPR->dword
#define		ISPR1		( ISPR + 1 )->dword

#define		ISP_EINT3	ISPR->bit21
#define		ISP_ADC		ISPR->bit22

#define		ICPR 		( ( register_t  * ) 0xE000E280UL )
#define		ICPR0		ICPR->dword
#define		ICPR1		( ICPR + 1 )->dword

#define		ICP_EINT3	ICPR->bit21
#define		ICP_ADC		ICPR->bit22

#define		IABR 		( ( register_t  * ) 0xE000E300UL )
#define		IABR0		IABR->dWord
#define		IABR1		( IABR + 1 )->dWord
#define		IAB_EINT3	IABR->bit21
#define		IAB_ADC		IABR->bit22

#define		IPR 		( ( register_t  * ) 0xE000E400UL )
#define		IPR0		IPR->dword
#define		IPR1		( IPR + 1 )->dword
#define		IPR2		( IPR + 2 )->dword
#define		IPR3		( IPR + 3 )->dword
#define		IPR4		( IPR + 4 )->dword
#define		IPR5		( IPR + 5 )->dword
#define		IPR6		( IPR + 6 )->dword
#define		IPR7		( IPR + 7 )->dword
#define		IPR8		( IPR + 8 )->dword

#define		STIR_ 		( ( register_t  * ) 0xE000EF00UL )
#define		STIR		STIR_->dword
#define		INTID		STIR_->byte0

#define		EXTINT 		( ( register_t  * ) 0x400FC140UL )

#define		EINT3		EXTINT->bit03

#define		EXTMODE 	( ( register_t  * ) 0x400FC148 )

#define		EXTMODE3	EXTMODE->bit03
