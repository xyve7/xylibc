#include <ctype.h>
int isxdigit(int c) {
    return ((c > 47 && c < 58) || (c > 64 && c < 71));
}