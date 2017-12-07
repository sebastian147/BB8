
#include "DR_DAC.h"
#include "DR_DAC.h"
#include <stdlib.h>
uint8_t g_SeedCount=0;
extern uint8_t g_DACFlag;

void Play_Sound ( uint8_t Accion)
{
	if( Accion == SOUND )
	{
		srand(g_SeedCount);
		g_DACFlag = ((rand () % 10) + 1);
	}
}
