#include <stdio.h>

int fprintf(FILE* restrict stream, const char* restrict format, ...) {
    int bytes_written;
    va_list args;

    va_start(args, format);
    bytes_written = vfprintf(stream, format, args);
    va_end(args);

    return bytes_written;
}