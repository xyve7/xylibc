#include <stdlib.h>

long labs(long val) {
    return (val < 0 ? -val : val);
}