#ifndef STDIO_H
#define STDIO_H

#include <fcntl.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NULL ((void*)0)

#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

#define EOF (-1)

typedef unsigned long size_t;
typedef long ssize_t;
typedef long off_t;
typedef off_t fpos_t;

typedef struct {
  int fd;
  fpos_t pos;
} FILE;

extern FILE *const stdin;
extern FILE *const stdout;
extern FILE *const stderr;

#define stdin stdin
#define stdout stdout
#define stderr stderr

FILE *fopen(const char *restrict path, const char *restrict flags);

size_t fread(void *restrict ptr, size_t size, size_t nmemb, FILE *restrict stream);
size_t fwrite(const void *restrict ptr, size_t size, size_t nmemb, FILE *restrict stream);

int fprintf(FILE* restrict stream, const char* restrict format, ...);

int fputc(int ch, FILE *stream);
int fputs(const char *restrict str, FILE *restrict stream);

int putc(int ch, FILE *stream);
int puts(const char *str);
int putchar(int ch);

int printf(const char *restrict format, ...);
int vprintf(const char *restrict format, va_list args);
int vfprintf(FILE* restrict stream, const char *restrict format, va_list args);

#ifdef __cplusplus
}
#endif

#endif
