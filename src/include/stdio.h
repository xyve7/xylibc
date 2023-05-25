#ifndef STDIO_H
#define STDIO_H


#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

typedef off_t fpos_t;

typedef struct {
    int fd;
    fpos_t pos;
} FILE;

size_t fread(void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream);
size_t fwrite(const void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream);

int fputs(const char* restrict str, FILE* restrict stream);

int puts(const char* str);

#ifdef __cplusplus
}
#endif

#endif