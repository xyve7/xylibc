#include <ctype.h>
int islower(int c)
{
    return (c > 96 && c < 127) ? 0 : 1;
}