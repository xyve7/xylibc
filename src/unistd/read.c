#include <unistd.h>

ssize_t read(int fd, void *buf, size_t nbyte) {
    return syscall(SYS_read, fd, buf, nbyte);
}