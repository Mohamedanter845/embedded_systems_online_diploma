#@copyright :mohamed anter
CC=arm-none-eabi-
CFLAGS=-g  -mcpu=arm926ej-s
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
project name=learn-in-depth

all: $(project name).bin
	@echo"----------build is done--------""

	


startup.o: startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@


%.o: %.c
	$(CC)gcc.exe -c  $(CFLAGS) $(INCS) $< -o $@


$(project name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@


$(project name).bin: $(project name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin




