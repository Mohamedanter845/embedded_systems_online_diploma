/*
 * main.c
 *
 *  Created on: Feb 10, 2024
 *      Author: HP
 */


#include"CA.h"
extern void (*P_State)();

void setup()
{
	//init drivers
	P_State=STATE(CA_Waiting);
}
void main()
{
	volatile unsigned int i;
	setup();
while(1)
{
	P_State();
	for(i=0;i<100000;i++);
}
}
