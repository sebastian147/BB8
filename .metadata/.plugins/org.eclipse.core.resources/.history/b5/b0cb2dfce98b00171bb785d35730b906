/*
 * KitInfo2PR_RGB.h
 *
 *  Created on: 27/02/2012
 *      Author: Pablo
 */

#ifndef KITINFO2_RGB_H_
#define KITINFO2_RGB_H_

#include "lpc_types.h"

typedef enum {
	ROJO,VERDE,AZUL
} ColorRGB;

#define RGB_MAX				255		//maximo valor que puede tomar un color
#define PWM_FREC			1000
#define PWM_PRESCALE_NS		(1000000000/(PWM_FREC*RGB_MAX))	//en ns

// KitInfo2PR_RGB.c
void LedRGB_Color(ColorRGB, uint8_t);

// KitInfo2FW_RGB.c
void Inic_LedRGB(void);
void Actualizar(void);

#endif /* KITINFO2_RGB_H_ */
