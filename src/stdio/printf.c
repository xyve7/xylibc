#include <stdio.h>

int printf(const char *restrict format, ...) {
    int bytes_written;
    va_list args;

    va_start(args, format);
    bytes_written = vprintf(format, args);
    va_end(args);

    return bytes_written;
}