#include <unistd.h>
void *sbrk(intptr_t increment) {
  void *current_brk = (void *)syscall(SYS_brk, 0);
  if (increment == 0) {
    return current_brk;
  }
  return brk(current_brk + increment) == 0 ? current_brk : (void *)-1;
}
