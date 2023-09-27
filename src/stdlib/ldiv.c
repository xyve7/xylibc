#include <stdlib.h>

ldiv_t ldiv(long numer, long denom) {
    ldiv_t ret = {
        .quot = numer / denom,
        .rem = numer % denom
    };
    return ret;
}