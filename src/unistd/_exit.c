#include <unistd.h>

void _exit(int status) {
    syscall_no_ret(SYS_exit, status, 0, 0, 0, 0, 0);
}