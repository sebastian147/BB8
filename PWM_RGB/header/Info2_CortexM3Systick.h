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

typedef struct
{
	union
	{
		__RW uint32_t  _STCTRL ;                         /*!< Offset: 0x00  SysTick Control and Status Register */
		struct
		{
			__RW uint32_t	_ENABLE:1;
			__RW uint32_t	_TICKINT:1;
			__RW uint32_t	_CLKSOURCE:1;
			__RW uint32_t	_RESERVED0:14;
			__RW uint32_t	_COUNTFLAG:1;
			__RW uint32_t	_RESERVED1:14;
		};
	};
	__RW uint32_t _STRELOAD;                   /*!< Offset: 0x04  SysTick Reload Value Register       */
	__RW uint32_t _STCURR ;                    /*!< Offset: 0x08  SysTick Current Value Register      */
	__R  uint32_t _STCALIB ;                   /*!< Offset: 0x0C  SysTick Calibration Register        */
} systick_t;

#define systick             ((systick_t *)       (0xE000E010))

#define	MAX_TICKS	0x00fffffful
#define STCTRL		systick->_STCTRL
	#define ENABLE		systick->_ENABLE
	#define TICKINT		systick->_TICKINT
	#define CLKSOURCE	systick->_CLKSOURCE
	#define COUNTFLAG	systick->_COUNTFLAG
#define STRELOAD	systick->_STRELOAD
#define STCURR 	    systick->_STCURR
#define STCALIB 	systick->_STCALIB
