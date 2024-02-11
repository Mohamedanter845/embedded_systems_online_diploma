/*
 * main.c
 *
 *  Created on: Feb 11, 2024
 *      Author: HP
 */

// created by mohamed anter
#include"CA.h"
#include"US.h"
#include"DC.h"
void setup()
{
	//init drivers
US_init();
DC_init();
US_State=STATE(US_busy);
DC_State=STATE(DC_idle);
CA_State=STATE(CA_Waiting);
}
void main()
{
	volatile unsigned int i;
	setup();
while(1)
{
	US_State();
	CA_State();
	DC_State();
	for(i=0;i<100000;i++);
}
}
