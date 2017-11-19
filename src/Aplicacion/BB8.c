/*
===============================================================================
 Name        : BB8.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#include <cr_section_macros.h>


#include "aplicacion.h"

int		main		( void )
{
	uint8_t salida = 1, accion = 0;

	Kit_Init();


	while( salida )
	{
		accion = RecibirInformacion();
		if(accion==57)
		{
			accion=57;
		}
		ActualizarMotores(accion);
		Mover_Servo(accion);
		//sonido(); //creo que estaria mejor en el systick

	}
    return 0 ;
}
