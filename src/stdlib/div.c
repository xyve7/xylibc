#include <stdlib.h>

div_t div(int numer, int denom) {
    div_t ret = {
        .quot = numer / denom,
        .rem = numer % denom
    };
    return ret;
}