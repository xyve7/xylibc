#include <ctype.h>
int iscntrl(int c)
{
    return (c < 33 || c == 128) ? 0 : 1;
}