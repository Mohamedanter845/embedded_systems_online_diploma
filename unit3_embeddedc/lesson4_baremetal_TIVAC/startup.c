//stack_top will be defined automatically
//MOHAMED ANTER

#include "Platform_Types.h"
void Reset_Handler ();
extern int main(void);
void Default_Handler (void)
{
	Reset_Handler();
}

//Vector Handler
void NMI_Handler() __attribute__((weak,alias("Default_Handler")));;
void Hard_Fault_Handler() __attribute__((weak,alias("Default_Handler")));;

//booking 1024b on bss through un intialized array(265 element*4b)
static unsigned long  stack_top[265];


  void (* const g_p_fn_vectors[])()  __attribute__((section(".vectors"))) = 
  {
    	(void(*)())  ((unsigned long)stack_top+ sizeof(stack_top)),
    	&Reset_Handler,
	    &NMI_Handler,
	    &Hard_Fault_Handler,

  };

extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;


void Reset_Handler ()
{
	//copy .data section from flash to ram
	unsigned int DATA_size = (unsigned char *)&_E_data - (unsigned char *)&_S_data ;
	unsigned char *P_src = (unsigned char *)&_E_text ;
	unsigned char *P_dst = (unsigned char *)&_S_data ;
	for(int i=0; i < DATA_size; i++)
	{
		*((unsigned char *)P_dst++) = *((unsigned char *)P_src++); 
	}
	
	//locate .bss section in ram and initalize it with zero
	unsigned int BSS_size = (unsigned char *)&_E_bss - (unsigned char *)&_S_bss ;
	P_dst = (unsigned char *)&_S_bss ;
	for(int i=0; i < BSS_size; i++)
	{
		*((unsigned char *)P_dst++) = (unsigned char)0; 
	}
	
	//jump to main()
	main();
}

