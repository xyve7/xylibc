#include <stdio.h>

int fputs(const char* restrict str, FILE* restrict stream) {
    size_t len = strlen(str);
    size_t written_bytes = fwrite(str, 1, len, stream);
    return (written_bytes == len) ? 0 : EOF;
}