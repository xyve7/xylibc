#include <unistd.h>
int brk(void* address) {
    return (void*)syscall(SYS_brk, address) < address ? -1 : 0;
}