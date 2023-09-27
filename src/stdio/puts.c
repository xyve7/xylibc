#include <stdio.h>

int puts(const char *str) {
    int ret = fputs(str, stdout);
    ret += fputc('\n', stdout);
    return ret;
}