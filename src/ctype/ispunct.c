#include <ctype.h>
int ispunct(int c) {
    return ((c > 32 && c < 47) || (c > 57 && c < 65) || (c > 90 && c < 97) || (c > 122 && c < 127));
}