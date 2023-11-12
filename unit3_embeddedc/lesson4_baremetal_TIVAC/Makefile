#@copyright:MohamedAnter




CC=arm-none-eabi-
CFLAGS= -mthumb -mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
Project_name = unit3_lab4_cortex_m3

all:$(Project_name).bin
	@echo ">>>>>>Build is Done<<<<<<"

%.o: %.s
		$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
		$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@  

$(Project_name).elf: $(OBJ) $(ASOBJ)
		$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_File.map
		cp $(Project_name).elf $(Project_name).axf


$(Project_name).bin: $(Project_name).elf
		$(CC)objcopy.exe -O binary $< $@
clean:
	rm *.elf *.bin	
	
clean_all:
	rm *.o *.elf *.bin
	@echo "Everything is clean"