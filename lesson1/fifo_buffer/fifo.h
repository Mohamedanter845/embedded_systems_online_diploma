/*
 * fifo.h
 *
 *  Created on: Jan 4, 2024
 *      Author: HP
 */

#ifndef FIFO_H_
#define FIFO_H_
#include"stdint.h"
#include"stdio.h"

#define element_type uint8_t
#define width1 5
element_type buff[width1];
//FIFO data types
typedef struct
{
	element_type* FIFO_base;
	element_type* FIFO_head;
	element_type* FIFO_tail;
	unsigned int FIFO_count;
	unsigned int FIFO_length;
}FIFO_buf_t;
typedef enum
{
	FIFO_null,
	FIFO_empty,
	FIFO_full,
	FIFO_no_error
}FIFO_status;
//APIS
FIFO_status FIFO_init(FIFO_buf_t*FIFO_P,element_type *P_buf,unsigned int length);
FIFO_status FIFO_enqueue(FIFO_buf_t*FIFO_P,element_type item);
FIFO_status FIFO_dequeue(FIFO_buf_t*FIFO_P,element_type *item);
FIFO_status FIFO_is_full(FIFO_buf_t*FIFO_P);
void FIFO_print(FIFO_buf_t*FIFO_P);



#endif /* FIFO_H_ */
