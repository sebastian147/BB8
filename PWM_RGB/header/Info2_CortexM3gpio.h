#ifndef _registros
	#include "registros.h"
	#define		_registros
#endif
/*------------- General Purpose Input/Output (GPIO) --------------------------*/
typedef struct
{
	__RW register_t		FIODIR;
		 uint32_t 		RESERVED[3];
	__RW register_t 	FIOMASK;
	__RW register_t 	FIOPIN;
	__RW register_t 	FIOSET;
	__RW register_t 	FIOCLR;

} gpio_t;

//__IO uint32_t	 __attribute__ ((at(0x2009C000UL))) pepe;

#define		gpio0		( ( gpio_t  * ) 0x2009C000UL )
#define		gpio1		( ( gpio_t  * ) 0x2009C020UL )
#define		gpio2		( ( gpio_t  * ) 0x2009C040UL )
#define		gpio3		( ( gpio_t  * ) 0x2009C060UL )
#define		gpio4		( ( gpio_t  * ) 0x2009C080UL )

/** PORT 0 - P0[12:14] P0[31] Reservados--------------------------------------------- */
/** FAST GPIO PORT DIRECTION CONTROL REGISTER PORT 0 */
#define		FIO0DIR			gpio0->FIODIR.dword

#define		FIO0DIR0		gpio0->FIODIR.bit00
#define		FIO0DIR1		gpio0->FIODIR.bit01
#define		FIO0DIR2		gpio0->FIODIR.bit02
#define		FIO0DIR3		gpio0->FIODIR.bit03
#define		FIO0DIR4		gpio0->FIODIR.bit04
#define		FIO0DIR5		gpio0->FIODIR.bit05
#define		FIO0DIR6		gpio0->FIODIR.bit06
#define		FIO0DIR7		gpio0->FIODIR.bit07
#define		FIO0DIR8		gpio0->FIODIR.bit08
#define		FIO0DIR9		gpio0->FIODIR.bit09
#define		FIO0DIR10		gpio0->FIODIR.bit10
#define		FIO0DIR11		gpio0->FIODIR.bit11
#define		FIO0DIR15		gpio0->FIODIR.bit15
#define		FIO0DIR16		gpio0->FIODIR.bit16
#define		FIO0DIR17		gpio0->FIODIR.bit17
#define		FIO0DIR18		gpio0->FIODIR.bit18
#define		FIO0DIR19		gpio0->FIODIR.bit19
#define		FIO0DIR20		gpio0->FIODIR.bit20
#define		FIO0DIR21		gpio0->FIODIR.bit21
#define		FIO0DIR22		gpio0->FIODIR.bit22
#define		FIO0DIR23		gpio0->FIODIR.bit23
#define		FIO0DIR24		gpio0->FIODIR.bit24
#define		FIO0DIR25		gpio0->FIODIR.bit25
#define		FIO0DIR26		gpio0->FIODIR.bit26
#define		FIO0DIR27		gpio0->FIODIR.bit27
#define		FIO0DIR28		gpio0->FIODIR.bit28
#define		FIO0DIR29		gpio0->FIODIR.bit29
#define		FIO0DIR30		gpio0->FIODIR.bit30

/** FAST MASK REGISTER FOR PORT PORT 0*/
#define		FIO0MASK    	gpio0->FIOMASK.dword

#define		FIO0MASK0		gpio0->FIOMASK.bit00
#define		FIO0MASK1		gpio0->FIOMASK.bit01
#define		FIO0MASK2		gpio0->FIOMASK.bit02
#define		FIO0MASK3		gpio0->FIOMASK.bit03
#define		FIO0MASK4		gpio0->FIOMASK.bit04
#define		FIO0MASK5		gpio0->FIOMASK.bit05
#define		FIO0MASK6		gpio0->FIOMASK.bit06
#define		FIO0MASK7		gpio0->FIOMASK.bit07
#define		FIO0MASK8		gpio0->FIOMASK.bit08
#define		FIO0MASK9		gpio0->FIOMASK.bit09
#define		FIO0MASK10		gpio0->FIOMASK.bit10
#define		FIO0MASK11		gpio0->FIOMASK.bit11
#define		FIO0MASK15		gpio0->FIOMASK.bit15
#define		FIO0MASK16		gpio0->FIOMASK.bit16
#define		FIO0MASK17		gpio0->FIOMASK.bit17
#define		FIO0MASK18		gpio0->FIOMASK.bit18
#define		FIO0MASK19		gpio0->FIOMASK.bit19
#define		FIO0MASK20		gpio0->FIOMASK.bit20
#define		FIO0MASK21		gpio0->FIOMASK.bit21
#define		FIO0MASK22		gpio0->FIOMASK.bit22
#define		FIO0MASK23		gpio0->FIOMASK.bit23
#define		FIO0MASK24		gpio0->FIOMASK.bit24
#define		FIO0MASK25		gpio0->FIOMASK.bit25
#define		FIO0MASK26		gpio0->FIOMASK.bit26
#define		FIO0MASK27		gpio0->FIOMASK.bit27
#define		FIO0MASK28		gpio0->FIOMASK.bit28
#define		FIO0MASK29		gpio0->FIOMASK.bit29
#define		FIO0MASK30		gpio0->FIOMASK.bit30

/** FAST PORT PIN VALUE REGISTER USING FIOMASK PORT 0 */
#define		FIO0PIN     	gpio0->FIOPIN.dword

#define		FIO0PINL		gpio0->FIOPIN.wordL
#define		FIO0PINH		gpio0->FIOPIN.wordL

#define		FIO0PINLL		gpio0->FIOPIN.byte0
#define		FIO0PINLH		gpio0->FIOPIN.byte1
#define		FIO0PINHL		gpio0->FIOPIN.byte2
#define		FIO0PINHH		gpio0->FIOPIN.byte3

#define		FIO0PIN0		gpio0->FIOPIN.bit00
#define		FIO0PIN1		gpio0->FIOPIN.bit01
#define		FIO0PIN2		gpio0->FIOPIN.bit02
#define		FIO0PIN3		gpio0->FIOPIN.bit03
#define		FIO0PIN4		gpio0->FIOPIN.bit04
#define		FIO0PIN5		gpio0->FIOPIN.bit05
#define		FIO0PIN6		gpio0->FIOPIN.bit06
#define		FIO0PIN7		gpio0->FIOPIN.bit07
#define		FIO0PIN8		gpio0->FIOPIN.bit08
#define		FIO0PIN9		gpio0->FIOPIN.bit09
#define		FIO0PIN10		gpio0->FIOPIN.bit10
#define		FIO0PIN11		gpio0->FIOPIN.bit11
#define		FIO0PIN15		gpio0->FIOPIN.bit15
#define		FIO0PIN16		gpio0->FIOPIN.bit16
#define		FIO0PIN17		gpio0->FIOPIN.bit17
#define		FIO0PIN18		gpio0->FIOPIN.bit18
#define		FIO0PIN19		gpio0->FIOPIN.bit19
#define		FIO0PIN20		gpio0->FIOPIN.bit20
#define		FIO0PIN21		gpio0->FIOPIN.bit21
#define		FIO0PIN22		gpio0->FIOPIN.bit22
#define		FIO0PIN23		gpio0->FIOPIN.bit23
#define		FIO0PIN24		gpio0->FIOPIN.bit24
#define		FIO0PIN25		gpio0->FIOPIN.bit25
#define		FIO0PIN26		gpio0->FIOPIN.bit26
#define		FIO0PIN27		gpio0->FIOPIN.bit27
#define		FIO0PIN28		gpio0->FIOPIN.bit28
#define		FIO0PIN29		gpio0->FIOPIN.bit29
#define		FIO0PIN30		gpio0->FIOPIN.bit30

/** FAST PORT OUTPUT SET REGISTER USING FIOMASK PORT 0*/
#define		FIO0SET			gpio0->FIOSET.dword

#define		FIO0SET0		gpio0->FIOSET.bit00
#define		FIO0SET1		gpio0->FIOSET.bit01
#define		FIO0SET2		gpio0->FIOSET.bit02
#define		FIO0SET3		gpio0->FIOSET.bit03
#define		FIO0SET4		gpio0->FIOSET.bit04
#define		FIO0SET5		gpio0->FIOSET.bit05
#define		FIO0SET6		gpio0->FIOSET.bit06
#define		FIO0SET7		gpio0->FIOSET.bit07
#define		FIO0SET8		gpio0->FIOSET.bit08
#define		FIO0SET9		gpio0->FIOSET.bit09
#define		FIO0SET10		gpio0->FIOSET.bit10
#define		FIO0SET11		gpio0->FIOSET.bit11
#define		FIO0SET15		gpio0->FIOSET.bit15
#define		FIO0SET16		gpio0->FIOSET.bit16
#define		FIO0SET17		gpio0->FIOSET.bit17
#define		FIO0SET18		gpio0->FIOSET.bit18
#define		FIO0SET19		gpio0->FIOSET.bit19
#define		FIO0SET20		gpio0->FIOSET.bit20
#define		FIO0SET21		gpio0->FIOSET.bit21
#define		FIO0SET22		gpio0->FIOSET.bit22
#define		FIO0SET23		gpio0->FIOSET.bit23
#define		FIO0SET24		gpio0->FIOSET.bit24
#define		FIO0SET25		gpio0->FIOSET.bit25
#define		FIO0SET26		gpio0->FIOSET.bit26
#define		FIO0SET27		gpio0->FIOSET.bit27
#define		FIO0SET28		gpio0->FIOSET.bit28
#define		FIO0SET29		gpio0->FIOSET.bit29
#define		FIO0SET30		gpio0->FIOSET.bit30

/** FAST PORT OUTPUT CLEAR REGISTER USING FIOMASK PORT 0*/
#define		FIO0CLR 		gpio0->FIOCLR.dword

#define		FIO0CLR0		gpio0->FIO0CLR.bit00
#define		FIO0CLR1		gpio0->FIO0CLR.bit01
#define		FIO0CLR2		gpio0->FIO0CLR.bit02
#define		FIO0CLR3		gpio0->FIO0CLR.bit03
#define		FIO0CLR4		gpio0->FIO0CLR.bit04
#define		FIO0CLR5		gpio0->FIO0CLR.bit05
#define		FIO0CLR6		gpio0->FIO0CLR.bit06
#define		FIO0CLR7		gpio0->FIO0CLR.bit07
#define		FIO0CLR8		gpio0->FIO0CLR.bit08
#define		FIO0CLR9		gpio0->FIO0CLR.bit09
#define		FIO0CLR10		gpio0->FIO0CLR.bit10
#define		FIO0CLR11		gpio0->FIO0CLR.bit11
#define		FIO0CLR15		gpio0->FIO0CLR.bit15
#define		FIO0CLR16		gpio0->FIO0CLR.bit16
#define		FIO0CLR17		gpio0->FIO0CLR.bit17
#define		FIO0CLR18		gpio0->FIO0CLR.bit18
#define		FIO0CLR19		gpio0->FIO0CLR.bit19
#define		FIO0CLR20		gpio0->FIO0CLR.bit20
#define		FIO0CLR21		gpio0->FIO0CLR.bit21
#define		FIO0CLR22		gpio0->FIO0CLR.bit22
#define		FIO0CLR23		gpio0->FIO0CLR.bit23
#define		FIO0CLR24		gpio0->FIO0CLR.bit24
#define		FIO0CLR25		gpio0->FIO0CLR.bit25
#define		FIO0CLR26		gpio0->FIO0CLR.bit26
#define		FIO0CLR27		gpio0->FIO0CLR.bit27
#define		FIO0CLR28		gpio0->FIO0CLR.bit28
#define		FIO0CLR29		gpio0->FIO0CLR.bit29
#define		FIO0CLR30		gpio0->FIO0CLR.bit30

/** PORT 1 - P1[2], P1[3], P1[7:5], P1[13:11] -------------------------------------- */
/** FAST GPIO PORT DIRECTION CONTROL REGISTER PORT 1 */
#define		FIO1DIR			gpio1->FIODIR.dword

#define		FIO1DIR0		gpio1->FIODIR.bit00
#define		FIO1DIR1		gpio1->FIODIR.bit01
#define		FIO1DIR4		gpio1->FIODIR.bit04
#define		FIO1DIR8		gpio1->FIODIR.bit08
#define		FIO1DIR9		gpio1->FIODIR.bit09
#define		FIO1DIR10		gpio1->FIODIR.bit10
#define		FIO1DIR11		gpio1->FIODIR.bit11
#define		FIO1DIR12		gpio1->FIOPIN.bit12
#define		FIO1DIR13		gpio1->FIODIR.bit13
#define		FIO1DIR14		gpio1->FIODIR.bit14
#define		FIO1DIR15		gpio1->FIODIR.bit15
#define		FIO1DIR16		gpio1->FIODIR.bit16
#define		FIO1DIR17		gpio1->FIODIR.bit17
#define		FIO1DIR18		gpio1->FIODIR.bit18
#define		FIO1DIR19		gpio1->FIODIR.bit19
#define		FIO1DIR20		gpio1->FIODIR.bit20
#define		FIO1DIR21		gpio1->FIODIR.bit21
#define		FIO1DIR22		gpio1->FIODIR.bit22
#define		FIO1DIR23		gpio1->FIODIR.bit23
#define		FIO1DIR24		gpio1->FIODIR.bit24
#define		FIO1DIR25		gpio1->FIODIR.bit25
#define		FIO1DIR26		gpio1->FIODIR.bit26
#define		FIO1DIR27		gpio1->FIODIR.bit27
#define		FIO1DIR28		gpio1->FIODIR.bit28
#define		FIO1DIR29		gpio1->FIODIR.bit29
#define		FIO1DIR30		gpio1->FIODIR.bit30
#define		FIO1DIR31		gpio1->FIODIR.bit31

/** FAST MASK REGISTER FOR PORT PORT 1*/
#define		FIO1MASK    	gpio1->FIOMASK.dword

#define		FIO1MASK0		gpio1->FIOMASK.bit00
#define		FIO1MASK3		gpio1->FIOMASK.bit03
#define		FIO1MASK4		gpio1->FIOMASK.bit04
#define		FIO1MASK8		gpio1->FIOMASK.bit08
#define		FIO1MASK9		gpio1->FIOMASK.bit09
#define		FIO1MASK10		gpio1->FIOMASK.bit10
#define		FIO1MASK11		gpio1->FIOMASK.bit11
#define		FIO1MASK12		gpio1->FIOMASK.bit12
#define		FIO1MASK13		gpio1->FIOMASK.bit13
#define		FIO1MASK14		gpio1->FIOMASK.bit14
#define		FIO1MASK15		gpio1->FIOMASK.bit15
#define		FIO1MASK16		gpio1->FIOMASK.bit16
#define		FIO1MASK17		gpio1->FIOMASK.bit17
#define		FIO1MASK18		gpio1->FIOMASK.bit18
#define		FIO1MASK19		gpio1->FIOMASK.bit19
#define		FIO1MASK20		gpio1->FIOMASK.bit20
#define		FIO1MASK21		gpio1->FIOMASK.bit21
#define		FIO1MASK22		gpio1->FIOMASK.bit22
#define		FIO1MASK23		gpio1->FIOMASK.bit23
#define		FIO1MASK24		gpio1->FIOMASK.bit24
#define		FIO1MASK25		gpio1->FIOMASK.bit25
#define		FIO1MASK26		gpio1->FIOMASK.bit26
#define		FIO1MASK27		gpio1->FIOMASK.bit27
#define		FIO1MASK28		gpio1->FIOMASK.bit28
#define		FIO1MASK29		gpio1->FIOMASK.bit29
#define		FIO1MASK30		gpio1->FIOMASK.bit30
#define		FIO1MASK31		gpio1->FIOMASK.bit31

/** FAST PORT PIN VALUE REGISTER USING FIOMASK PORT 1 */
#define		FIO1PIN     	gpio1->FIOPIN.dword

#define		FIO1PINL		gpio1->FIOPIN.wordL
#define		FIO1PINH		gpio1->FIOPIN.wordL

#define		FIO1PINLL		gpio1->FIOPIN.byte0
#define		FIO1PINLH		gpio1->FIOPIN.byte1
#define		FIO1PINHL		gpio1->FIOPIN.byte2
#define		FIO1PINHH		gpio1->FIOPIN.byte3

#define		FIO1PIN0		gpio1->FIOPIN.bit00
#define		FIO1PIN3		gpio1->FIOPIN.bit03
#define		FIO1PIN4		gpio1->FIOPIN.bit04
#define		FIO1PIN8		gpio1->FIOPIN.bit08
#define		FIO1PIN9		gpio1->FIOPIN.bit09
#define		FIO1PIN10		gpio1->FIOPIN.bit10
#define		FIO1PIN11		gpio1->FIOPIN.bit11
#define		FIO1PIN12		gpio1->FIOPIN.bit12
#define		FIO1PIN13		gpio1->FIOPIN.bit13
#define		FIO1PIN14		gpio1->FIOPIN.bit14
#define		FIO1PIN15		gpio1->FIOPIN.bit15
#define		FIO1PIN16		gpio1->FIOPIN.bit16
#define		FIO1PIN17		gpio1->FIOPIN.bit17
#define		FIO1PIN18		gpio1->FIOPIN.bit18
#define		FIO1PIN19		gpio1->FIOPIN.bit19
#define		FIO1PIN20		gpio1->FIOPIN.bit20
#define		FIO1PIN21		gpio1->FIOPIN.bit21
#define		FIO1PIN22		gpio1->FIOPIN.bit22
#define		FIO1PIN23		gpio1->FIOPIN.bit23
#define		FIO1PIN24		gpio1->FIOPIN.bit24
#define		FIO1PIN25		gpio1->FIOPIN.bit25
#define		FIO1PIN26		gpio1->FIOPIN.bit26
#define		FIO1PIN27		gpio1->FIOPIN.bit27
#define		FIO1PIN28		gpio1->FIOPIN.bit28
#define		FIO1PIN29		gpio1->FIOPIN.bit29
#define		FIO1PIN30		gpio1->FIOPIN.bit30
#define		FIO1PIN31		gpio1->FIOPIN.bit31

/** FAST PORT OUTPUT SET REGISTER USING FIOMASK PORT 1*/
#define		FIO1SET			gpio1->FIOSET.dword

#define		FIO1SET0		gpio1->FIOSET.bit00
#define		FIO1SET3		gpio1->FIOSET.bit03
#define		FIO1SET4		gpio1->FIOSET.bit04
#define		FIO1SET8		gpio1->FIOSET.bit08
#define		FIO1SET9		gpio1->FIOSET.bit09
#define		FIO1SET10		gpio1->FIOSET.bit10
#define		FIO1SET11		gpio1->FIOSET.bit11
#define		FIO1SET12		gpio1->FIOSET.bit12
#define		FIO1SET13		gpio1->FIOSET.bit13
#define		FIO1SET14		gpio1->FIOSET.bit14
#define		FIO1SET15		gpio1->FIOSET.bit15
#define		FIO1SET16		gpio1->FIOSET.bit16
#define		FIO1SET17		gpio1->FIOSET.bit17
#define		FIO1SET18		gpio1->FIOSET.bit18
#define		FIO1SET19		gpio1->FIOSET.bit19
#define		FIO1SET20		gpio1->FIOSET.bit20
#define		FIO1SET21		gpio1->FIOSET.bit21
#define		FIO1SET22		gpio1->FIOSET.bit22
#define		FIO1SET23		gpio1->FIOSET.bit23
#define		FIO1SET24		gpio1->FIOSET.bit24
#define		FIO1SET25		gpio1->FIOSET.bit25
#define		FIO1SET26		gpio1->FIOSET.bit26
#define		FIO1SET27		gpio1->FIOSET.bit27
#define		FIO1SET28		gpio1->FIOSET.bit28
#define		FIO1SET29		gpio1->FIOSET.bit29
#define		FIO1SET30		gpio1->FIOSET.bit30
#define		FIO1SET31		gpio1->FIOSET.bit31

/** FAST PORT OUTPUT CLEAR REGISTER USING FIOMASK PORT 1	*/
#define		FIO1CLR 		gpio1->FIOCLR.dword

#define		FIO1CLR0		gpio1->FIOCLR.bit00
#define		FIO1CLR3		gpio1->FIOCLR.bit03
#define		FIO1CLR4		gpio1->FIOCLR.bit04
#define		FIO1CLR8		gpio1->FIOCLR.bit08
#define		FIO1CLR9		gpio1->FIOCLR.bit09
#define		FIO1CLR10		gpio1->FIOCLR.bit10
#define		FIO1CLR11		gpio1->FIOCLR.bit11
#define		FIO1CLR12		gpio1->FIOCLR.bit12
#define		FIO1CLR13		gpio1->FIOCLR.bit13
#define		FIO1CLR14		gpio1->FIOCLR.bit14
#define		FIO1CLR15		gpio1->FIOCLR.bit15
#define		FIO1CLR16		gpio1->FIOCLR.bit16
#define		FIO1CLR17		gpio1->FIOCLR.bit17
#define		FIO1CLR18		gpio1->FIOCLR.bit18
#define		FIO1CLR19		gpio1->FIOCLR.bit19
#define		FIO1CLR20		gpio1->FIOCLR.bit20
#define		FIO1CLR21		gpio1->FIOCLR.bit21
#define		FIO1CLR22		gpio1->FIOCLR.bit22
#define		FIO1CLR23		gpio1->FIOCLR.bit23
#define		FIO1CLR24		gpio1->FIOCLR.bit24
#define		FIO1CLR25		gpio1->FIOCLR.bit25
#define		FIO1CLR26		gpio1->FIOCLR.bit26
#define		FIO1CLR27		gpio1->FIOCLR.bit27
#define		FIO1CLR28		gpio1->FIOCLR.bit28
#define		FIO1CLR29		gpio1->FIOCLR.bit29
#define		FIO1CLR30		gpio1->FIOCLR.bit30
#define		FIO1CLR31		gpio1->FIOCLR.bit31

/** PORT 2 - P2[14:31] Reservados--------------------------------------------- */
/** FAST GPIO PORT DIRECTION CONTROL REGISTER PORT 2 */
#define		FIO2DIR			gpio2->FIODIR.dword

#define		FIO2DIR0		gpio2->FIODIR.bit00
#define		FIO2DIR1		gpio2->FIODIR.bit01
#define		FIO2DIR2		gpio2->FIODIR.bit02
#define		FIO2DIR3		gpio2->FIODIR.bit03
#define		FIO2DIR4		gpio2->FIODIR.bit04
#define		FIO2DIR5		gpio2->FIODIR.bit05
#define		FIO2DIR6		gpio2->FIODIR.bit06
#define		FIO2DIR7		gpio2->FIODIR.bit07
#define		FIO2DIR8		gpio2->FIODIR.bit08
#define		FIO2DIR9		gpio2->FIODIR.bit09
#define		FIO2DIR10		gpio2->FIODIR.bit10
#define		FIO2DIR11		gpio2->FIODIR.bit11
#define		FIO2DIR12		gpio2->FIOPIN.bit12
#define		FIO2DIR13		gpio2->FIODIR.bit13

/** FAST MASK REGISTER FOR PORT PORT 2 */
#define		FIO2MASK    	gpio2->FIOMASK.dword

#define		FIO2MASK0		gpio2->FIOMASK.bit00
#define		FIO2MASK1		gpio2->FIOMASK.bit01
#define		FIO2MASK2		gpio2->FIOMASK.bit02
#define		FIO2MASK3		gpio2->FIOMASK.bit03
#define		FIO2MASK4		gpio2->FIOMASK.bit04
#define		FIO2MASK5		gpio2->FIOMASK.bit05
#define		FIO2MASK6		gpio2->FIOMASK.bit06
#define		FIO2MASK7		gpio2->FIOMASK.bit07
#define		FIO2MASK8		gpio2->FIOMASK.bit08
#define		FIO2MASK9		gpio2->FIOMASK.bit09
#define		FIO2MASK10		gpio2->FIOMASK.bit10
#define		FIO2MASK11		gpio2->FIOMASK.bit11
#define		FIO2MASK12		gpio2->FIOMASK.bit12
#define		FIO2MASK13		gpio2->FIOMASK.bit13

/** FAST PORT PIN VALUE REGISTER USING FIOMASK PORT 2 */
#define		FIO2PIN     	gpio2->FIOPIN.dword

#define		FIO2PINL		gpio2->FIOPIN.wordL
#define		FIO2PINH		gpio2->FIOPIN.wordL

#define		FIO2PINLL		gpio2->FIOPIN.byte0
#define		FIO2PINLH		gpio2->FIOPIN.byte1
#define		FIO2PINHL		gpio2->FIOPIN.byte2
#define		FIO2PINHH		gpio2->FIOPIN.byte3

#define		FIO2PIN0		gpio2->FIOPIN.bit00
#define		FIO2PIN1		gpio2->FIOPIN.bit01
#define		FIO2PIN2		gpio2->FIOPIN.bit02
#define		FIO2PIN3		gpio2->FIOPIN.bit03
#define		FIO2PIN4		gpio2->FIOPIN.bit04
#define		FIO2PIN5		gpio2->FIOPIN.bit05
#define		FIO2PIN6		gpio2->FIOPIN.bit06
#define		FIO2PIN7		gpio2->FIOPIN.bit07
#define		FIO2PIN8		gpio2->FIOPIN.bit08
#define		FIO2PIN9		gpio2->FIOPIN.bit09
#define		FIO2PIN10		gpio2->FIOPIN.bit10
#define		FIO2PIN11		gpio2->FIOPIN.bit11
#define		FIO2PIN12		gpio2->FIOPIN.bit12
#define		FIO2PIN13		gpio2->FIOPIN.bit13

/** FAST PORT OUTPUT SET REGISTER USING FIOMASK PORT 2 */
#define		FIO2SET			gpio2->FIOSET.dword

#define		FIO2SET0		gpio2->FIOSET.bit00
#define		FIO2SET1		gpio2->FIOSET.bit01
#define		FIO2SET2		gpio2->FIOSET.bit02
#define		FIO2SET3		gpio2->FIOSET.bit03
#define		FIO2SET4		gpio2->FIOSET.bit04
#define		FIO2SET5		gpio2->FIOSET.bit05
#define		FIO2SET6		gpio2->FIOSET.bit06
#define		FIO2SET7		gpio2->FIOSET.bit07
#define		FIO2SET8		gpio2->FIOSET.bit08
#define		FIO2SET9		gpio2->FIOSET.bit09
#define		FIO2SET10		gpio2->FIOSET.bit10
#define		FIO2SET11		gpio2->FIOSET.bit11
#define		FIO2SET12		gpio2->FIOSET.bit12
#define		FIO2SET13		gpio2->FIOSET.bit13

/** FAST PORT OUTPUT CLEAR REGISTER USING FIOMASK PORT 2 */
#define		FIO2CLR 		gpio2->FIOCLR.dword

#define		FIO2CLR0		gpio2->FIOCLR.bit00
#define		FIO2CLR1		gpio2->FIOCLR.bit01
#define		FIO2CLR2		gpio2->FIOCLR.bit02
#define		FIO2CLR3		gpio2->FIOCLR.bit03
#define		FIO2CLR4		gpio2->FIOCLR.bit04
#define		FIO2CLR5		gpio2->FIOCLR.bit05
#define		FIO2CLR6		gpio2->FIOCLR.bit06
#define		FIO2CLR7		gpio2->FIOCLR.bit07
#define		FIO2CLR8		gpio2->FIOCLR.bit08
#define		FIO2CLR9		gpio2->FIOCLR.bit09
#define		FIO2CLR10		gpio2->FIOCLR.bit10
#define		FIO2CLR11		gpio2->FIOCLR.bit11
#define		FIO2CLR12		gpio2->FIOCLR.bit12
#define		FIO2CLR13		gpio2->FIOCLR.bit13

/** PORT 3 - P3[0:24] P3[27:31] Reservados----------------------------------------- */
/** FAST GPIO PORT DIRECTION CONTROL REGISTER PORT 3 */
#define		FIO3DIR			gpio3->FIODIR.dword

#define		FIO3DIR25		gpio3->FIODIR.bit25
#define		FIO3DIR26		gpio3->FIODIR.bit26

/** FAST MASK REGISTER FOR PORT PORT 3 */
#define		FIO3MASK    	gpio3->FIOMASK.dword

#define		FIO3MASK25		gpio3->FIOMASK.bit25
#define		FIO3MASK26		gpio3->FIOMASK.bit26

/** FAST PORT PIN VALUE REGISTER USING FIOMASK PORT 3 */
#define		FIO3PIN     	gpio3->FIOPIN.dword

#define		FIO3PINH		gpio3->FIOPIN.wordL
#define		FIO3PINHH		gpio3->FIOPIN.byte3

#define		FIO3PIN25		gpio3->FIOPIN.bit25
#define		FIO3PIN26		gpio3->FIOPIN.bit26

/** FAST PORT OUTPUT SET REGISTER USING FIOMASK PORT 3 */
#define		FIO3SET			gpio3->FIOSET.dword

#define		FIO3SET25		gpio3->FIOSET.bit25
#define		FIO3SET26		gpio3->FIOSET.bit26

/** FAST PORT OUTPUT CLEAR REGISTER USING FIOMASK PORT 3 */
#define		FIO3CLR 		gpio3->FIOCLR.dword

#define		FIO3CLR25		gpio3->FIOCLR.bit25
#define		FIO3CLR26		gpio3->FIOCLR.bit26

/** PORT 4 - P4[0:27] P4[30:31] Reservados----------------------------------------- */
/** FAST GPIO PORT DIRECTION CONTROL REGISTER PORT 4 */
#define		FIO4DIR			gpio4->FIODIR.dword

#define		FIO4DIR28		gpio4->FIODIR.bit28
#define		FIO4DIR29		gpio4->FIODIR.bit29

/** FAST MASK REGISTER FOR PORT PORT 4 */
#define		FIO4MASK    	gpio4->FIOMASK.dword

#define		FIO4MASK28		gpio4->FIOMASK.bit28
#define		FIO4MASK29		gpio4->FIOMASK.bit29

/** FAST PORT PIN VALUE REGISTER USING FIOMASK PORT 4 */
#define		FIO4PIN     	gpio4->FIOPIN.dword

#define		FIO4PINH		gpio4->FIOPIN.wordL
#define		FIO4PINHH		gpio4->FIOPIN.byte3

#define		FIO4PIN28		gpio4->FIOPIN.bit28
#define		FIO4PIN29		gpio4->FIOPIN.bit29

/** FAST PORT OUTPUT SET REGISTER USING FIOMASK PORT 4 */
#define		FIO4SET			gpio4->FIOSET.dword

#define		FIO4SET28		gpio4->FIOSET.bit28
#define		FIO4SET29		gpio4->FIOSET.bit29

/** FAST PORT CLEAR SET REGISTER USING FIOMASK PORT 4 */
#define		FIO4CLR 		gpio4->FIOCLR.dword

#define		FIO4CLR28		gpio4->FIOCLR.bit28
#define		FIO4CLR29		gpio4->FIOCLR.bit29

/* PIN MODE REGISTER */
#define		PINMODE			( ( register_t  * ) 0x4002C040UL )
#define		PINMODE0		PINMODE[0].dword
#define		PINMODE1		PINMODE[1].dword
#define		PINMODE2		PINMODE[2].dword
#define		PINMODE3		PINMODE[3].dword
#define		PINMODE4		PINMODE[4].dword
#define		PINMODE5		PINMODE[5].dword
#define		PINMODE6		PINMODE[6].dword
#define		PINMODE7		PINMODE[7].dword
#define		PINMODE8		PINMODE[8].dword	// Reservado
#define		PINMODE9		PINMODE[9].dword

/** FUNCION PIN CONNECT BLOCK PINMODE0
 * 29:24 - Reserved
 */
#define		P00_PINMODE		PINMODE[0].bits0y1
#define		P01_PINMODE		PINMODE[0].bits2y3
#define		P02_PINMODE		PINMODE[0].bits4y5
#define		P03_PINMODE		PINMODE[0].bits6y7
#define		P04_PINMODE		PINMODE[0].bits8y9
#define		P05_PINMODE		PINMODE[0].bits10y11
#define		P06_PINMODE		PINMODE[0].bits12y13
#define		P07_PINMODE		PINMODE[0].bits14y15
#define		P08_PINMODE		PINMODE[0].bits16y17
#define		P09_PINMODE		PINMODE[0].bits18y19
#define		P010_PINMODE	PINMODE[0].bits20y21
#define		P011_PINMODE	PINMODE[0].bits22y23
#define		P015_PINMODE	PINMODE[0].bits30y31

/** FUNCION PIN CONNECT BLOCK PINMODE1
 * 31:30 - Reserved
*/
#define		P016_PINMODE	PINMODE[1].bits0y1
#define		P017_PINMODE	PINMODE[1].bits2y3
#define		P018_PINMODE	PINMODE[1].bits4y5
#define		P019_PINMODE	PINMODE[1].bits6y7
#define		P020_PINMODE	PINMODE[1].bits8y9
#define		P021_PINMODE	PINMODE[1].bits10y11
#define		P022_PINMODE	PINMODE[1].bits12y13
#define		P023_PINMODE	PINMODE[1].bits14y15
#define		P024_PINMODE	PINMODE[1].bits16y17
#define		P025_PINMODE	PINMODE[1].bits18y19
#define		P026_PINMODE	PINMODE[1].bits20y21
#define		P027_PINMODE	PINMODE[1].bits22y23
#define		P028_PINMODE	PINMODE[1].bits24y25
#define		P029_PINMODE	PINMODE[1].bits26y27
#define		P030_PINMODE	PINMODE[1].bits28y29

/** FUNCION PIN CONNECT BLOCK PINMODE2
 * 7:4 - Reserved
 * 15:10 - Reserved
 * 27:22 - Reserved
*/
#define		P10_PINMODE		PINMODE[2].bits0y1
#define		P11_PINMODE		PINMODE[2].bits2y3
#define		P14_PINMODE		PINMODE[2].bits8y9
#define		P18_PINMODE		PINMODE[2].bits16y17
#define		P19_PINMODE		PINMODE[2].bits18y19
#define		P110_PINMODE	PINMODE[2].bits20y21
#define		P114_PINMODE	PINMODE[2].bits28y29
#define		P115_PINMODE	PINMODE[2].bits30y31

/** FUNCION PIN CONNECT BLOCK PINMODE3 */
#define		P116_PINMODE	PINMODE[3].bits0y1
#define		P117_PINMODE	PINMODE[3].bits2y3
#define		P118_PINMODE	PINMODE[3].bits4y5
#define		P119_PINMODE	PINMODE[3].bits6y7
#define		P120_PINMODE	PINMODE[3].bits8y9
#define		P121_PINMODE	PINMODE[3].bits10y11
#define		P122_PINMODE	PINMODE[3].bits12y13
#define		P123_PINMODE	PINMODE[3].bits14y15
#define		P124_PINMODE	PINMODE[3].bits16y17
#define		P125_PINMODE	PINMODE[3].bits18y19
#define		P126_PINMODE	PINMODE[3].bits20y21
#define		P127_PINMODE	PINMODE[3].bits22y23
#define		P128_PINMODE	PINMODE[3].bits24y25
#define		P129_PINMODE	PINMODE[3].bits26y27
#define		P130_PINMODE	PINMODE[3].bits28y29
#define		P131_PINMODE	PINMODE[3].bits30y31

/** FUNCION PIN CONNECT BLOCK PINMODE4
 * 31:28 - Reserved
*/
#define		P20_PINMODE		PINMODE[4].bits0y1
#define		P21_PINMODE		PINMODE[4].bits2y3
#define		P22_PINMODE		PINMODE[4].bits4y5
#define		P23_PINMODE		PINMODE[4].bits6y7
#define		P24_PINMODE		PINMODE[4].bits8y9
#define		P25_PINMODE		PINMODE[4].bits10y11
#define		P26_PINMODE		PINMODE[4].bits12y13
#define		P27_PINMODE		PINMODE[4].bits14y15
#define		P28_PINMODE		PINMODE[4].bits16y17
#define		P29_PINMODE		PINMODE[4].bits18y19
#define		P210_PINMODE	PINMODE[4].bits20y21
#define		P211_PINMODE	PINMODE[4].bits22y23
#define		P212_PINMODE	PINMODE[4].bits24y25
#define		P213_PINMODE	PINMODE[4].bits26y27

/** FUNCION PIN CONNECT BLOCK PINMODE7
 * 17:0 - Reserved
 * 31:22 - Reserved
*/
#define		P325_PINMODE	PINMODE[7].bits18y19
#define		P326_PINMODE	PINMODE[7].bits20y21

/** FUNCION PIN CONNECT BLOCK PINMODE3
 * 23:0 - Reserved
 * 31:28 - Reserved
 */
#define		P428_PINMODE	PINMODE[9].bits24y25
#define		P429_PINMODE	PINMODE[9].bits26y27

/* PIN MODE OPEN DRAIN REGISTER */
#define		PINMODE_OD		( ( register_t  * ) 0x4002C068UL )
#define		PINMODE_OD0		PINMODE_OD[0].dword
#define		PINMODE_OD1		PINMODE_OD[1].dword
#define		PINMODE_OD2		PINMODE_OD[2].dword
#define		PINMODE_OD3		PINMODE_OD[3].dword
#define		PINMODE_OD4		PINMODE_OD[4].dword

/* PIN MODE PORTS P0 OPEN DRAIN
 * 14:12 - Reserved.
 * 28:27 - Reserved.
 * 31 - Reserved.
 */
#define		P00_OD			PINMODE_OD[0].bit00
#define		P01_OD			PINMODE_OD[0].bit01
#define		P02_OD			PINMODE_OD[0].bit02
#define		P03_OD			PINMODE_OD[0].bit03
#define		P04_OD			PINMODE_OD[0].bit04
#define		P05_OD			PINMODE_OD[0].bit05
#define		P06_OD			PINMODE_OD[0].bit06
#define		P07_OD			PINMODE_OD[0].bit07
#define		P08_OD			PINMODE_OD[0].bit08
#define		P09_OD			PINMODE_OD[0].bit09
#define		P010_OD			PINMODE_OD[0].bit10
#define		P011_OD			PINMODE_OD[0].bit11
#define		P015_OD			PINMODE_OD[0].bit15
#define		P016_OD			PINMODE_OD[0].bit16
#define		P017_OD			PINMODE_OD[0].bit17
#define		P018_OD			PINMODE_OD[0].bit18
#define		P019_OD			PINMODE_OD[0].bit19
#define		P020_OD			PINMODE_OD[0].bit20
#define		P021_OD			PINMODE_OD[0].bit21
#define		P022_OD			PINMODE_OD[0].bit22
#define		P023_OD			PINMODE_OD[0].bit23
#define		P024_OD			PINMODE_OD[0].bit24
#define		P025_OD			PINMODE_OD[0].bit25
#define		P026_OD			PINMODE_OD[0].bit26
#define		P029_OD			PINMODE_OD[0].bit29
#define		P030_OD			PINMODE_OD[0].bit30

/* PIN MODE PORTS P1 OPEN DRAIN
 * 3:2 - Reserved.
 * 7:5 - Reserved.
 * 13:11 - Reserved.
 */
#define		P10_OD			PINMODE_OD[1].bit00
#define		P11_OD			PINMODE_OD[1].bit01
#define		P14_OD			PINMODE_OD[1].bit04
#define		P18_OD			PINMODE_OD[1].bit08
#define		P19_OD			PINMODE_OD[1].bit09
#define		P110_OD			PINMODE_OD[1].bit10
#define		P114_OD			PINMODE_OD[1].bit14
#define		P115_OD			PINMODE_OD[1].bit15
#define		P116_OD			PINMODE_OD[1].bit16
#define		P117_OD			PINMODE_OD[1].bit17
#define		P118_OD			PINMODE_OD[1].bit18
#define		P119_OD			PINMODE_OD[1].bit19
#define		P120_OD			PINMODE_OD[1].bit20
#define		P121_OD			PINMODE_OD[1].bit21
#define		P122_OD			PINMODE_OD[1].bit22
#define		P123_OD			PINMODE_OD[1].bit23
#define		P124_OD			PINMODE_OD[1].bit24
#define		P125_OD			PINMODE_OD[1].bit25
#define		P126_OD			PINMODE_OD[1].bit26
#define		P127_OD			PINMODE_OD[1].bit27
#define		P128_OD			PINMODE_OD[1].bit28
#define		P129_OD			PINMODE_OD[1].bit29
#define		P130_OD			PINMODE_OD[1].bit30
#define		P131_OD			PINMODE_OD[1].bit31

/* PIN MODE PORTS P2 OPEN DRAIN
 * 31:14 - Reserved.
 */
#define		P20_OD			PINMODE_OD[2].bit00
#define		P21_OD			PINMODE_OD[2].bit01
#define		P22_OD			PINMODE_OD[2].bit02
#define		P23_OD			PINMODE_OD[2].bit03
#define		P24_OD			PINMODE_OD[2].bit04
#define		P25_OD			PINMODE_OD[2].bit05
#define		P26_OD			PINMODE_OD[2].bit06
#define		P27_OD			PINMODE_OD[2].bit07
#define		P28_OD			PINMODE_OD[2].bit08
#define		P29_OD			PINMODE_OD[2].bit09
#define		P210_OD			PINMODE_OD[2].bit10
#define		P211_OD			PINMODE_OD[2].bit11
#define		P212_OD			PINMODE_OD[2].bit12
#define		P213_OD			PINMODE_OD[2].bit13

/* PIN MODE PORTS P3 OPEN DRAIN
 * 24:0 - Reserved.
 * 31:27 - Reserved.
 */
#define		P325_OD			PINMODE_OD[3].bit25
#define		P326_OD			PINMODE_OD[3].bit26

/* PIN MODE PORTS P4 OPEN DRAIN
 * 27:0 - Reserved.
 * 31:30 - Reserved.
 */
#define		P428_OD			PINMODE_OD[4].bit28
#define		P429_OD			PINMODE_OD[4].bit29

/** GPIO interrupt registers
 * The following registers configure the pins of Port 0 and Port 2 to generate interrupts.
 * ID: 21 EXEPTION: 37 OFFSET: 0x94 External Interrupt External Interrupt 3 (EINT3).
 * EINT3 channel is shared with GPIO INTERRUPTS
 */
typedef struct
{
	__RW register_t		IOINTSTATR;
	__RW register_t 	IOINTSTATF;
	__RW register_t 	IOINTCLR;
	__RW register_t 	IOINTENR;
	__RW register_t 	IOINTENF;

} IOInt_t;
#define		IOStatus		( ( register_t  * ) 0x40028080UL )
#define		P0IOINT			( ( IOInt_t  * ) 0x40028084UL )
#define		P2IOINT			( ( IOInt_t  * ) 0x400280A4UL )

#define		IOINTSTATUS 	IOStatus->dword				//!< overall Interrupt Status register

#define		IO0INTSTATR 	P0IOINT->IOINTSTATR.dword	//!< GPIO Interrupt Status for port 0 Rising Edge Interrupt
#define		IO0INTSTATF 	P0IOINT->IOINTSTATF.dword  	//!< GPIO Interrupt Status for port 0 Falling Edge Interrupt
#define		IO0INTCLR	 	P0IOINT->IOINTCLR.dword  	//!< GPIO Interrupt Clear register for port 0
#define		IO0INTENR 		P0IOINT->IOINTENR.dword  	//!< GPIO Interrupt Enable for port 0 Rising Edge
#define		IO0INTENF	 	P0IOINT->IOINTENF.dword  	//!< GPIO Interrupt Enable for port 0 Falling Edge

#define		IO2INTSTATR 	P2IOINT->IOINTSTATR.dword	//!< GPIO Interrupt Status for port 2 Rising Edge Interrupt
#define		IO2INTSTATF 	P2IOINT->IOINTSTATF.dword  	//!< GPIO Interrupt Status for port 2 Falling Edge Interrupt
#define		IO2INTCLR	 	P2IOINT->IOINTCLR.dword  	//!< GPIO Interrupt Clear register for port 2
#define		IO2INTENR 		P2IOINT->IOINTENR.dword  	//!< GPIO Interrupt Enable for port 2 Rising Edge
#define		IO2INTENF	 	P2IOINT->IOINTENF.dword  	//!< GPIO Interrupt Enable for port 2 Falling Edge


/** Overall Interrupt Status register bits
 *		0 There are no pending interrupts on Port 0 - Port 2.
 *		1 There is at least one pending interrupt on Port 0 - Port 2.
 * 31:2 Reserved.
 */
#define		P0INT			IOStatus->bit00
#define		P2INT			IOStatus->bit02

/* GPIO Interrupt Status for port 0 Rising Edge Interrupt bits
 * 		0 A rising edge has not been detected on P0.xx
 * 		1 Interrupt has been generated due to a rising edge on P0.xx
 * 14:12 - Reserved.
 * 31 - Reserved.
 */
#define		P00_REI			P0IOINT->IOINTSTATR.bit00
#define		P01_REI			P0IOINT->IOINTSTATR.bit01
#define		P02_REI			P0IOINT->IOINTSTATR.bit02
#define		P03_REI			P0IOINT->IOINTSTATR.bit03
#define		P04_REI			P0IOINT->IOINTSTATR.bit04
#define		P05_REI			P0IOINT->IOINTSTATR.bit05
#define		P06_REI			P0IOINT->IOINTSTATR.bit06
#define		P07_REI			P0IOINT->IOINTSTATR.bit07
#define		P08_REI			P0IOINT->IOINTSTATR.bit08
#define		P09_REI			P0IOINT->IOINTSTATR.bit09
#define		P010_REI		P0IOINT->IOINTSTATR.bit10
#define		P011_REI		P0IOINT->IOINTSTATR.bit11
#define		P015_REI		P0IOINT->IOINTSTATR.bit15
#define		P016_REI		P0IOINT->IOINTSTATR.bit16
#define		P017_REI		P0IOINT->IOINTSTATR.bit17
#define		P018_REI		P0IOINT->IOINTSTATR.bit18
#define		P019_REI		P0IOINT->IOINTSTATR.bit19
#define		P020_REI		P0IOINT->IOINTSTATR.bit20
#define		P021_REI		P0IOINT->IOINTSTATR.bit21
#define		P022_REI		P0IOINT->IOINTSTATR.bit22
#define		P023_REI		P0IOINT->IOINTSTATR.bit23
#define		P024_REI		P0IOINT->IOINTSTATR.bit24
#define		P025_REI		P0IOINT->IOINTSTATR.bit25
#define		P026_REI		P0IOINT->IOINTSTATR.bit26
#define		P027_REI		P0IOINT->IOINTSTATR.bit27
#define		P028_REI		P0IOINT->IOINTSTATR.bit28
#define		P029_REI		P0IOINT->IOINTSTATR.bit29
#define		P030_REI		P0IOINT->IOINTSTATR.bit30

/* GPIO Interrupt Status for port 0 Falling Edge Interrupt bits
 * 		0 A falling edge has not been detected on P0.xx
 * 		1 Interrupt has been generated due to a falling edge on P0.xx
 * 14:12 - Reserved.
 * 31 - Reserved.
 */
#define		P00_FEI			P0IOINT->IOINTSTATF.bit00
#define		P01_FEI			P0IOINT->IOINTSTATF.bit01
#define		P02_FEI			P0IOINT->IOINTSTATF.bit02
#define		P03_FEI			P0IOINT->IOINTSTATF.bit03
#define		P04_FEI			P0IOINT->IOINTSTATF.bit04
#define		P05_FEI			P0IOINT->IOINTSTATF.bit05
#define		P06_FEI			P0IOINT->IOINTSTATF.bit06
#define		P07_FEI			P0IOINT->IOINTSTATF.bit07
#define		P08_FEI			P0IOINT->IOINTSTATF.bit08
#define		P09_FEI			P0IOINT->IOINTSTATF.bit09
#define		P010_FEI		P0IOINT->IOINTSTATF.bit10
#define		P011_FEI		P0IOINT->IOINTSTATF.bit11
#define		P015_FEI		P0IOINT->IOINTSTATF.bit15
#define		P016_FEI		P0IOINT->IOINTSTATF.bit16
#define		P017_FEI		P0IOINT->IOINTSTATF.bit17
#define		P018_FEI		P0IOINT->IOINTSTATF.bit18
#define		P019_FEI		P0IOINT->IOINTSTATF.bit19
#define		P020_FEI		P0IOINT->IOINTSTATF.bit20
#define		P021_FEI		P0IOINT->IOINTSTATF.bit21
#define		P022_FEI		P0IOINT->IOINTSTATF.bit22
#define		P023_FEI		P0IOINT->IOINTSTATF.bit23
#define		P024_FEI		P0IOINT->IOINTSTATF.bit24
#define		P025_FEI		P0IOINT->IOINTSTATF.bit25
#define		P026_FEI		P0IOINT->IOINTSTATF.bit26
#define		P027_FEI		P0IOINT->IOINTSTATF.bit27
#define		P028_FEI		P0IOINT->IOINTSTATF.bit28
#define		P029_FEI		P0IOINT->IOINTSTATF.bit29
#define		P030_FEI		P0IOINT->IOINTSTATF.bit30

/* GPIO Interrupt Clear register for port 0 bits
 * 		0 Corresponding bits in IOxIntStatR and IOxIntStatF are unchanged.
 * 		1 Corresponding bits in IOxIntStatR and IOxStatF are cleared.
 * 14:12 - Reserved.
 * 31 - Reserved.
 */
#define		P00_CI			P0IOINT->IOINTCLR.bit00
#define		P01_CI			P0IOINT->IOINTCLR.bit01
#define		P02_CI			P0IOINT->IOINTCLR.bit02
#define		P03_CI			P0IOINT->IOINTCLR.bit03
#define		P04_CI			P0IOINT->IOINTCLR.bit04
#define		P05_CI			P0IOINT->IOINTCLR.bit05
#define		P06_CI			P0IOINT->IOINTCLR.bit06
#define		P07_CI			P0IOINT->IOINTCLR.bit07
#define		P08_CI			P0IOINT->IOINTCLR.bit08
#define		P09_CI			P0IOINT->IOINTCLR.bit09
#define		P010_CI			P0IOINT->IOINTCLR.bit10
#define		P011_CI			P0IOINT->IOINTCLR.bit11
#define		P015_CI			P0IOINT->IOINTCLR.bit15
#define		P016_CI			P0IOINT->IOINTCLR.bit16
#define		P017_CI			P0IOINT->IOINTCLR.bit17
#define		P018_CI			P0IOINT->IOINTCLR.bit18
#define		P019_CI			P0IOINT->IOINTCLR.bit19
#define		P020_CI			P0IOINT->IOINTCLR.bit20
#define		P021_CI			P0IOINT->IOINTCLR.bit21
#define		P022_CI			P0IOINT->IOINTCLR.bit22
#define		P023_CI			P0IOINT->IOINTCLR.bit23
#define		P024_CI			P0IOINT->IOINTCLR.bit24
#define		P025_CI			P0IOINT->IOINTCLR.bit25
#define		P026_CI			P0IOINT->IOINTCLR.bit26
#define		P027_CI			P0IOINT->IOINTCLR.bit27
#define		P028_CI			P0IOINT->IOINTCLR.bit28
#define		P029_CI			P0IOINT->IOINTCLR.bit29
#define		P030_CI			P0IOINT->IOINTCLR.bit30

/* GPIO Interrupt Enable for port 0 Rising Edge bits
 *		0 Rising edge interrupt is disabled on P0
 * 		1 Rising edge interrupt is enabled on P0
 * 14:12 - Reserved.
 * 31 - Reserved.
 */
#define		P00_ER			P0IOINT->IOINTENR.bit00
#define		P01_ER			P0IOINT->IOINTENR.bit01
#define		P02_ER			P0IOINT->IOINTENR.bit02
#define		P03_ER			P0IOINT->IOINTENR.bit03
#define		P04_ER			P0IOINT->IOINTENR.bit04
#define		P05_ER			P0IOINT->IOINTENR.bit05
#define		P06_ER			P0IOINT->IOINTENR.bit06
#define		P07_ER			P0IOINT->IOINTENR.bit07
#define		P08_ER			P0IOINT->IOINTENR.bit08
#define		P09_ER			P0IOINT->IOINTENR.bit09
#define		P010_ER			P0IOINT->IOINTENR.bit10
#define		P011_ER			P0IOINT->IOINTENR.bit11
#define		P015_ER			P0IOINT->IOINTENR.bit15
#define		P016_ER			P0IOINT->IOINTENR.bit16
#define		P017_ER			P0IOINT->IOINTENR.bit17
#define		P018_ER			P0IOINT->IOINTENR.bit18
#define		P019_ER			P0IOINT->IOINTENR.bit19
#define		P020_ER			P0IOINT->IOINTENR.bit20
#define		P021_ER			P0IOINT->IOINTENR.bit21
#define		P022_ER			P0IOINT->IOINTENR.bit22
#define		P023_ER			P0IOINT->IOINTENR.bit23
#define		P024_ER			P0IOINT->IOINTENR.bit24
#define		P025_ER			P0IOINT->IOINTENR.bit25
#define		P026_ER			P0IOINT->IOINTENR.bit26
#define		P027_ER			P0IOINT->IOINTENR.bit27
#define		P028_ER			P0IOINT->IOINTENR.bit28
#define		P029_ER			P0IOINT->IOINTENR.bit29
#define		P030_ER			P0IOINT->IOINTENR.bit30

/* GPIO Interrupt Enable for port 0 Falling Edge bits
 * 		0 Falling edge interrupt is disabled on P0
 *		1 Falling edge interrupt is enabled on P0
 * 14:12 - Reserved.
 * 31 - Reserved.
 */
#define		P00_EF			P0IOINT->IOINTENF.bit00
#define		P01_EF			P0IOINT->IOINTENF.bit01
#define		P02_EF			P0IOINT->IOINTENF.bit02
#define		P03_EF			P0IOINT->IOINTENF.bit03
#define		P04_EF			P0IOINT->IOINTENF.bit04
#define		P05_EF			P0IOINT->IOINTENF.bit05
#define		P06_EF			P0IOINT->IOINTENF.bit06
#define		P07_EF			P0IOINT->IOINTENF.bit07
#define		P08_EF			P0IOINT->IOINTENF.bit08
#define		P09_EF			P0IOINT->IOINTENF.bit09
#define		P010_EF			P0IOINT->IOINTENF.bit10
#define		P011_EF			P0IOINT->IOINTENF.bit11
#define		P015_EF			P0IOINT->IOINTENF.bit15
#define		P016_EF			P0IOINT->IOINTENF.bit16
#define		P017_EF			P0IOINT->IOINTENF.bit17
#define		P018_EF			P0IOINT->IOINTENF.bit18
#define		P019_EF			P0IOINT->IOINTENF.bit19
#define		P020_EF			P0IOINT->IOINTENF.bit20
#define		P021_EF			P0IOINT->IOINTENF.bit21
#define		P022_EF			P0IOINT->IOINTENF.bit22
#define		P023_EF			P0IOINT->IOINTENF.bit23
#define		P024_EF			P0IOINT->IOINTENF.bit24
#define		P025_EF			P0IOINT->IOINTENF.bit25
#define		P026_EF			P0IOINT->IOINTENF.bit26
#define		P027_EF			P0IOINT->IOINTENF.bit27
#define		P028_EF			P0IOINT->IOINTENF.bit28
#define		P029_EF			P0IOINT->IOINTENF.bit29
#define		P030_EF			P0IOINT->IOINTENF.bit30

/* GPIO Interrupt Status for port 0 Rising Edge Interrupt bits
 * 		0 A rising edge has not been detected on P2.xx
 * 		1 Interrupt has been generated due to a rising edge on P2.xx
 * 31:14 - Reserved.
 */
#define		P20_REI			P2IOINT->IOINTSTATR.bit00
#define		P21_REI			P2IOINT->IOINTSTATR.bit01
#define		P22_REI			P2IOINT->IOINTSTATR.bit02
#define		P23_REI			P2IOINT->IOINTSTATR.bit03
#define		P24_REI			P2IOINT->IOINTSTATR.bit04
#define		P25_REI			P2IOINT->IOINTSTATR.bit05
#define		P26_REI			P2IOINT->IOINTSTATR.bit06
#define		P27_REI			P2IOINT->IOINTSTATR.bit07
#define		P28_REI			P2IOINT->IOINTSTATR.bit08
#define		P29_REI			P2IOINT->IOINTSTATR.bit09
#define		P210_REI		P2IOINT->IOINTSTATR.bit10
#define		P211_REI		P2IOINT->IOINTSTATR.bit11
#define		P212_REI		P2IOINT->IOINTSTATR.bit12
#define		P213_REI		P2IOINT->IOINTSTATR.bit13

/* GPIO Interrupt Status for port 0 Falling Edge Interrupt bits
 * 		0 A falling edge has not been detected on P2.xx
 * 		1 Interrupt has been generated due to a falling edge on P2.xx
 * 31:14 - Reserved.
 */
#define		P20_FEI			P2IOINT->IOINTSTATF.bit00
#define		P21_FEI			P2IOINT->IOINTSTATF.bit01
#define		P22_FEI			P2IOINT->IOINTSTATF.bit02
#define		P23_FEI			P2IOINT->IOINTSTATF.bit03
#define		P24_FEI			P2IOINT->IOINTSTATF.bit04
#define		P25_FEI			P2IOINT->IOINTSTATF.bit05
#define		P26_FEI			P2IOINT->IOINTSTATF.bit06
#define		P27_FEI			P2IOINT->IOINTSTATF.bit07
#define		P28_FEI			P2IOINT->IOINTSTATF.bit08
#define		P29_FEI			P2IOINT->IOINTSTATF.bit09
#define		P210_FEI		P2IOINT->IOINTSTATF.bit10
#define		P211_FEI		P2IOINT->IOINTSTATF.bit11
#define		P212_FEI		P2IOINT->IOINTSTATF.bit12
#define		P213_FEI		P2IOINT->IOINTSTATF.bit13

/* GPIO Interrupt Clear register for port 0 bits
 * 0 Corresponding bits in IOxIntStatR and IOxIntStatF are unchanged.
 * 1 Corresponding bits in IOxIntStatR and IOxStatF are cleared.
  * 31:14 - Reserved.
 */
#define		P20_CI			P2IOINT->IOINTCLR.bit00
#define		P21_CI			P2IOINT->IOINTCLR.bit01
#define		P22_CI			P2IOINT->IOINTCLR.bit02
#define		P23_CI			P2IOINT->IOINTCLR.bit03
#define		P24_CI			P2IOINT->IOINTCLR.bit04
#define		P25_CI			P2IOINT->IOINTCLR.bit05
#define		P26_CI			P2IOINT->IOINTCLR.bit06
#define		P27_CI			P2IOINT->IOINTCLR.bit07
#define		P28_CI			P2IOINT->IOINTCLR.bit08
#define		P29_CI			P2IOINT->IOINTCLR.bit09
#define		P210_CI			P2IOINT->IOINTCLR.bit10
#define		P211_CI			P2IOINT->IOINTCLR.bit11
#define		P212_CI			P2IOINT->IOINTCLR.bit12
#define		P213_CI			P2IOINT->IOINTCLR.bit13

/* GPIO Interrupt Enable for port 0 Rising Edge bits
 *		0 Rising edge interrupt is disabled on P2
 * 		1 Rising edge interrupt is enabled on P2
 * 31:14 - Reserved.
 */
#define		P20_ER			P2IOINT->IOINTENR.bit00
#define		P21_ER			P2IOINT->IOINTENR.bit01
#define		P22_ER			P2IOINT->IOINTENR.bit02
#define		P23_ER			P2IOINT->IOINTENR.bit03
#define		P24_ER			P2IOINT->IOINTENR.bit04
#define		P25_ER			P2IOINT->IOINTENR.bit05
#define		P26_ER			P2IOINT->IOINTENR.bit06
#define		P27_ER			P2IOINT->IOINTENR.bit07
#define		P28_ER			P2IOINT->IOINTENR.bit08
#define		P29_ER			P2IOINT->IOINTENR.bit09
#define		P210_ER			P2IOINT->IOINTENR.bit10
#define		P211_ER			P2IOINT->IOINTENR.bit11
#define		P212_ER			P2IOINT->IOINTENR.bit12
#define		P213_ER			P2IOINT->IOINTENR.bit13

/* GPIO Interrupt Enable for port 0 Falling Edge bits
 * 		0 Falling edge interrupt is disabled on P2
 *		1 Falling edge interrupt is enabled on P2
 * 31:14 - Reserved.
 */
#define		P20_EF			P2IOINT->IOINTENF.bit00
#define		P21_EF			P2IOINT->IOINTENF.bit01
#define		P22_EF			P2IOINT->IOINTENF.bit02
#define		P23_EF			P2IOINT->IOINTENF.bit03
#define		P24_EF			P2IOINT->IOINTENF.bit04
#define		P25_EF			P2IOINT->IOINTENF.bit05
#define		P26_EF			P2IOINT->IOINTENF.bit06
#define		P27_EF			P2IOINT->IOINTENF.bit07
#define		P28_EF			P2IOINT->IOINTENF.bit08
#define		P29_EF			P2IOINT->IOINTENF.bit09
#define		P210_EF			P2IOINT->IOINTENF.bit10
#define		P211_EF			P2IOINT->IOINTENF.bit11
#define		P212_EF			P2IOINT->IOINTENF.bit12
#define		P213_EF			P2IOINT->IOINTENF.bit13
