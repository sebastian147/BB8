#include "RegsLPC17xx.h"
#include "KitInfo2.h"



#define		FRENAR						0
#define		MOVERADELANTE				1
#define		MOVERATRAS					2
#define		MOVERIZQUIERDA				3
#define		MOVERDERECHA				4
#define		GIRARADELANTEDERECHA		5
#define		GIRARADELANTEIZQUIERDA		6
#define		GIRARATRASDERECHA			7
#define		GIRARATRASIZQUIERDA			8

//#define 	MOTOR1				1,1//revisar si estos pines estan bien
//#define		MOTOR2				1,2//revisar si estos pines estan bien

#define		MOTOR1A				2,4
#define		MOTOR1B				2,5
#define		MOTOR2A				2,6
#define		MOTOR2B				2,7



void		ApagarMotores		( void );
void		LiberarMotores		( void );
void		Init_Motores		( void );
void		Init_MotoresAll		( void );
void		Actualizar_Motores	( void );