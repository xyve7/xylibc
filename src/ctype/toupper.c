#include "../include/ctype.h"

int toupper(int c)
{
    return (c > 96 && c < 127) ? (c - 32) : c;
}