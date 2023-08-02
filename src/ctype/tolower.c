#include <ctype.h>
int tolower(int c) {
    return (c > 64 && c < 91) ? (c + 32) : c;
}