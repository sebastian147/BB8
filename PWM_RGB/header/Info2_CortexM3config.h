#ifndef _registros
	#include "registros.h"
	#define		_registros
#endif

/** PIN CONNECT BLOCK */
#define		PINSEL			( ( register_t  * ) 0x4002C000UL )
#define		PINSEL0			PINSEL[0].dword
#define		PINSEL1			PINSEL[1].dword
#define		PINSEL2			PINSEL[2].dword
#define		PINSEL3			PINSEL[3].dword
#define		PINSEL4			PINSEL[4].dword
#define		PINSEL5			PINSEL[5].dword		// Reservado
#define		PINSEL6			PINSEL[6].dword		// Reservado
#define		PINSEL7			PINSEL[7].dword
#define		PINSEL8			PINSEL[8].dword		// Reservado
#define		PINSEL9			PINSEL[9].dword
#define		PINSEL10		PINSEL[10].dword

/** FUNCION PIN CONNECT BLOCK PINSEL0
 * 29:24 - Reserved
 */
#define		P00_PINSEL		PINSEL[0].bits0y1
#define		P01_PINSEL		PINSEL[0].bits2y3
#define		P02_PINSEL		PINSEL[0].bits4y5
#define		P03_PINSEL		PINSEL[0].bits6y7
#define		P04_PINSEL		PINSEL[0].bits8y9
#define		P05_PINSEL		PINSEL[0].bits10y11
#define		P06_PINSEL		PINSEL[0].bits12y13
#define		P07_PINSEL		PINSEL[0].bits14y15
#define		P08_PINSEL		PINSEL[0].bits16y17
#define		P09_PINSEL		PINSEL[0].bits18y19
#define		P010_PINSEL		PINSEL[0].bits20y21
#define		P011_PINSEL		PINSEL[0].bits22y23
#define		P015_PINSEL		PINSEL[0].bits30y31

/** FUNCION PIN CONNECT BLOCK PINSEL1
 * 31:30 - Reserved
*/
#define		P016_PINSEL		PINSEL[1].bits0y1
#define		P017_PINSEL		PINSEL[1].bits2y3
#define		P018_PINSEL		PINSEL[1].bits4y5
#define		P019_PINSEL		PINSEL[1].bits6y7
#define		P020_PINSEL		PINSEL[1].bits8y9
#define		P021_PINSEL		PINSEL[1].bits10y11
#define		P022_PINSEL		PINSEL[1].bits12y13
#define		P023_PINSEL		PINSEL[1].bits14y15
#define		P024_PINSEL		PINSEL[1].bits16y17
#define		P025_PINSEL		PINSEL[1].bits18y19
#define		P026_PINSEL		PINSEL[1].bits20y21
#define		P027_PINSEL		PINSEL[1].bits22y23
#define		P028_PINSEL		PINSEL[1].bits24y25
#define		P029_PINSEL		PINSEL[1].bits26y27
#define		P030_PINSEL		PINSEL[1].bits28y29

/** FUNCION PIN CONNECT BLOCK PINSEL2
 * 7:4 - Reserved
 * 15:10 - Reserved
 * 27:22 - Reserved
*/
#define		P10_PINSEL		PINSEL[2].bits0y1
#define		P11_PINSEL		PINSEL[2].bits2y3
#define		P14_PINSEL		PINSEL[2].bits8y9
#define		P18_PINSEL		PINSEL[2].bits16y17
#define		P19_PINSEL		PINSEL[2].bits18y19
#define		P110_PINSEL		PINSEL[2].bits20y21
#define		P114_PINSEL		PINSEL[2].bits28y29
#define		P115_PINSEL		PINSEL[2].bits30y31

/** FUNCION PIN CONNECT BLOCK PINSEL3 */
#define		P116_PINSEL		PINSEL[3].bits0y1
#define		P117_PINSEL		PINSEL[3].bits2y3
#define		P118_PINSEL		PINSEL[3].bits4y5
#define		P119_PINSEL		PINSEL[3].bits6y7
#define		P120_PINSEL		PINSEL[3].bits8y9
#define		P121_PINSEL		PINSEL[3].bits10y11
#define		P122_PINSEL		PINSEL[3].bits12y13
#define		P123_PINSEL		PINSEL[3].bits14y15
#define		P124_PINSEL		PINSEL[3].bits16y17
#define		P125_PINSEL		PINSEL[3].bits18y19
#define		P126_PINSEL		PINSEL[3].bits20y21
#define		P127_PINSEL		PINSEL[3].bits22y23
#define		P128_PINSEL		PINSEL[3].bits24y25
#define		P129_PINSEL		PINSEL[3].bits26y27
#define		P130_PINSEL		PINSEL[3].bits28y29
#define		P131_PINSEL		PINSEL[3].bits30y31



/** FUNCION PIN CONNECT BLOCK PINSEL4
 * 31:28 - Reserved
*/
#define		P20_PINSEL		PINSEL[4].bits0y1
#define		P21_PINSEL		PINSEL[4].bits2y3
#define		P22_PINSEL		PINSEL[4].bits4y5
#define		P23_PINSEL		PINSEL[4].bits6y7
#define		P24_PINSEL		PINSEL[4].bits8y9
#define		P25_PINSEL		PINSEL[4].bits10y11
#define		P26_PINSEL		PINSEL[4].bits12y13
#define		P27_PINSEL		PINSEL[4].bits14y15
#define		P28_PINSEL		PINSEL[4].bits16y17
#define		P29_PINSEL		PINSEL[4].bits18y19
#define		P210_PINSEL		PINSEL[4].bits20y21
#define		P211_PINSEL		PINSEL[4].bits22y23
#define		P212_PINSEL		PINSEL[4].bits24y25
#define		P213_PINSEL		PINSEL[4].bits26y27

/** FUNCION PIN CONNECT BLOCK PINSEL7
 * 17:0 - Reserved
 * 31:22 - Reserved
*/
#define		P325_PINSEL		PINSEL[7].bits18y19
#define		P326_PINSEL		PINSEL[7].bits20y21

/** FUNCION PIN CONNECT BLOCK PINSEL3
 * 23:0 - Reserved
 * 31:28 - Reserved
 */
#define		P428_PINSEL		PINSEL[9].bits24y25
#define		P429_PINSEL		PINSEL[9].bits26y27

/** FUNCION PIN CONNECT BLOCK PINSEL3
 * bits 2:0 Reserved. Software should not write 1 to these bits.
 * bits 31:4 Reserved. Software should not write 1 to these bits.
*/
#define		PINSEL103		PINSEL[10].bit3

