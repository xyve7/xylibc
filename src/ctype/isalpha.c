#include <ctype.h>
int isalpha(int c) {
    return ((c > 64 && c < 91) || (c > 96 && c < 127));
}