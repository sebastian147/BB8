#include "RegsLPC17xx.h"
#include "KitInfo2.h"



#define		FRENAR						101
#define		MOVERADELANTE				102
#define		MOVERATRAS					103
#define		MOVERIZQUIERDA				104
#define		MOVERDERECHA				105
#define		GIRARADELANTEDERECHA		106
#define		GIRARADELANTEIZQUIERDA		107
#define		GIRARATRASDERECHA			108
#define		GIRARATRASIZQUIERDA			109
#define		CAMBIARPOTENCIA				113

#define		MOTOR1A				2,4
#define		MOTOR1B				2,5
#define		MOTOR2A				2,6
#define		MOTOR2B				2,7
#define		MOTOR3A				2,0
#define		MOTOR3B				0,11



void		ApagarMotores		( void );
void		LiberarMotores		( void );
void		Init_Motores		( void );
void		Init_MotoresAll		( void );
void		Actualizar_Motores	( void );
