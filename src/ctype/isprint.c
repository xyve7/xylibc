#include <ctype.h>
int isprint(int c) {
    return (c > 31 && c != 127) ? 0 : 1;
}