#include "aplicacion.h"

void InicSysTick(void){ //si divido x 4, interrumpe cada 2,5ms
		STRELOAD  = ( STCALIB / 4 ) - 1 ;   //N=1 para 10ms
		STCURR = 0;

		ENABLE = 1;
		TICKINT = 1;
		CLKSOURCE = 1;
		return;
}

void SysTick_Handler(void)
{
	static uint32_t msTicks=100;
	static uint8_t flag=1;
	uint8_t bufferled=100;

	if(msTicks)
	{
		msTicks--;

		if(!msTicks)
		{
			if(flag)
			{
				flag=0;
				msTicks=100;
			}
			else
			{
				flag=1;
				if(bufferled)
					SetPIN(LEDR,0);
				else
					SetPIN(LEDR,1);
				msTicks=bufferled;
			}

		}
	}

}
