#include <stdio.h>
#include <unistd.h>

int main(void) { printf("Hello World!\n"); }
void _start(void) { _exit(main()); }
