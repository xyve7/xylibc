#include <unistd.h>

void _start(void) {
  write(1, "Hello World!\n", 13);
  _exit(0);
}
