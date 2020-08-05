/*
 * Starting with IOs.c
 *
 * Created: 7/9/2020 11:10:45 PM
 * Author : Mostafa
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include "DIO_operations.h"
#include <util/delay.h>
int main(void)
{ 
	DIO_setPinMode(C,0,1);
	
   while (1)
   {
		DIO_setPinVal(C,0,H);
		_delay_ms(1000);
		
		DIO_setPinVal(C,0,L);
		_delay_ms(1000);
		
   }
}

