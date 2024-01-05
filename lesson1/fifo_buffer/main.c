/*
 * main.c
 *
 *  Created on: Jan 4, 2024
 *      Author: HP
 */


#include"fifo.h"
void main()
{
	element_type i, temp;
	FIFO_buf_t Fifo_uart;

	if(FIFO_init(&Fifo_uart,buff,5)==FIFO_no_error)
		printf("fifo init------done\n");
	for(i=0;i<7;i++)
	{
		printf("fifo enqueue (%x)\n",i);
		if(FIFO_enqueue(&Fifo_uart,i)==FIFO_no_error)
			printf("\t fifo enqueue------- done\n");
		else
			printf("\t fifo enqueue------ failed\n");

	}
	FIFO_print(&Fifo_uart);
	if (FIFO_dequeue (&Fifo_uart,&temp)==FIFO_no_error)
	    printf("\t fifo dequeue %X ----- done\n",temp);
	if (FIFO_dequeue (&Fifo_uart,&temp)==FIFO_no_error)
		    printf("\t fifo dequeue %X ----- done\n",temp);
	FIFO_print(&Fifo_uart);
}
