#include "../include/ctype.h"

int isdigit(int c)
{
    return (c > 47 && c < 58) ? 0 : 1;
}