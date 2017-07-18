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

int main(void) {

	uint8_t salida=1;

	Kit_Init();
	rgb_init();


	while(salida) {

	}
    return 0 ;
}
