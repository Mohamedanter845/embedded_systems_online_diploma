#include<uart.h>
#include<stdio.h>
char str_buffer[100]="learn-in-depth<mohamed_anter>";
void main()
{
	uart_send_string(str_buffer);
}