#include <stdio.h>

int fputc(int ch, FILE* stream) {
    return fwrite(&ch, 1, 1, stream) == 1 ? ch : EOF;
}