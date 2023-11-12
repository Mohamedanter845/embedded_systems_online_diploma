/**
 ******************************************
 * @author         : MOHAMED ANTER
 * @processor      : ARM Cortex M3
 ******************************************/
MEMORY
{
	FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 512M
	SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 512M
}

SECTIONS
{
	.text :
	{
		*(.vectors*)
		*(.text)
		. = ALIGN(4) ;
		_E_text = . ;
	}> FLASH
	
	.data :
	{
		. = ALIGN(4) ;
		_S_data = . ;
		*(.data*)
		. = ALIGN(4) ;
		_E_data = . ;
	}> SRAM AT> FLASH
	
	.rodata :
	{
		. = ALIGN(4) ;
		_S_rodata = . ;
		*(.rodata*)
		. = ALIGN(4) ;
		_E_rodata = . ;
	}> FLASH
	
	.bss :
	{
		. = ALIGN(4) ;
		_S_bss = . ;
		*(.bss*)
		. = ALIGN(4) ;
		*(COMMON*)
		. = ALIGN(4) ;
		_E_bss = . ;
	}> SRAM
	
	
}
