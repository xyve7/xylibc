#include <fcntl.h>
int open(const char* path, int flags, mode_t mode) {
    return syscall(SYS_open, path, flags, mode);
}