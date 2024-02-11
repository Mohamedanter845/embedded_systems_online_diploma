/*
 * CA.h
 *
 *  Created on: Feb 10, 2024
 *      Author: HP
 */
//created by: mohamed anter



#ifndef CA_H_
#define CA_H_
#include"state.h"
STATE_DEFINE(CA_Waiting);
STATE_DEFINE(CA_Driving);
int us_getdistance(int s,int b,int count);
 enum
{
	CA_WAITING,
	CA_DRIVING
}CA_STATE_ID;

#endif /* CA_H_ */
