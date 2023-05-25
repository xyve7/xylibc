#include <stdio.h>

size_t fread(void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream) {
    int read_bytes = read(stream->fd, ptr, size * nmemb);
    stream->pos += read_bytes;
    return read_bytes;
}