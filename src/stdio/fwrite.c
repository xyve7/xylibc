#include <stdio.h>

size_t fwrite(const void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream) {
    int written_bytes = write(stream->fd, ptr, size * nmemb);
    stream->pos += written_bytes;
    return written_bytes;
}