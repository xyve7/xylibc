CC = clang
CFLAGS = -g -fno-stack-protector -Wall -Wextra -Werror -std=c11 -Isrc/include -nostdlib 
OUT = libctest
CFILES = $(shell find src -type f -name '*.c')
ASMFILES = $(shell find src -type f -name '*.asm')
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
