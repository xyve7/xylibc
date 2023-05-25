CC = clang
CFLAGS = -g -fno-stack-protector -O2 -Wall -Wextra -Werror -std=c11 -Isrc/include -nostdlib 
OUT = libctest
CFILES = $(shell find . -type f -name '*.c')
ASMFILES = $(shell find . -type f -name '*.asm')
COBJECTS = $(CFILES:.c=.o)
ASMOBJECTS = $(ASMFILES:.asm=.o)

.PHONY all: $(OUT)

$(OUT): $(COBJECTS) $(ASMOBJECTS)
	$(CC) $(CFLAGS) $(COBJECTS) $(ASMOBJECTS) -o $(OUT) 
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.asm
	nasm -f elf64 $< -o $@

clean:
	rm -f $(COBJECTS) $(ASMOBJECTS) $(OUT)
