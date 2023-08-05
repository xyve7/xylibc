#include <unistd.h>

ssize_t write(int fd, const void *buf, size_t nbyte) {
    return syscall(SYS_write, fd, buf, nbyte);
}