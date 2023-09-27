CC = clang
CFLAGS = -fno-stack-protector -Wall -Wextra -Werror -std=c11 -Isrc/include -nostdlib
OUT = libctest
CFILES = $(shell find src -type f -name '*.c')
ASMFILES = $(shell find src -type f -name '*.asm')
COBJS = $(CFILES:.c=.o)
ASMOBJS = $(ASMFILES:.asm=.o)

.PHONY: all release debug clean

all: debug

release: CFLAGS += -O2
release: $(OUT)

debug: CFLAGS += -g 
debug: $(OUT)

$(OUT): $(COBJS) $(ASMOBJS)
	$(CC) $(CFLAGS) $(COBJS) $(ASMOBJS) -o $(OUT) 
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.asm
	nasm -f elf64 $< -o $@

clean:
	rm -f $(COBJS) $(ASMOBJS) $(OUT)
