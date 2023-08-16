#include <ctype.h>
int isupper(int c) {
    return (c > 64 && c < 91) ? 0 : 1;
}