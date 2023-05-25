#include "../include/ctype.h"

int isalnum(int c)
{
    return (c > 32 && c < 127) ? 0 : 1;
}