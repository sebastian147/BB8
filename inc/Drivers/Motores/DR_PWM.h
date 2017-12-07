#include "RegsLPC17xx.h"
#include "KitInfo2.h"




#define 	MOTOR_MAX			100		//maximo valor que puede tomar un color
#define	 	PWM_FREC			1000
#define 	PWM_PRESCALE_NS		(1000000000/(PWM_FREC*MOTOR_MAX))



void		Actualizar_Pwm		( uint8_t porcentaje1, uint8_t porcentaje2, uint8_t porcentaje3 );
void		Init_Pwm			( void );
