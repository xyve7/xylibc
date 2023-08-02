#include <stdio.h>

int main(void) {
    int written;
    printf("%d%n\n", 125, &written);
    printf("%d\n", written);
}