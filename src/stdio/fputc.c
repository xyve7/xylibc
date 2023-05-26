#include <stdio.h>

int fputc(int ch, FILE* stream) {
    unsigned char to_write = (unsigned char)ch;
    return fwrite(&to_write, 1, 1, stream) == 1 ? (int)to_write : EOF;
}