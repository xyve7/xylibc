#include <ctype.h>
int isspace(int c) {
    return (c == 32 || (c > 8 && c < 14));
}