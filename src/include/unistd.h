#ifndef UNISTD_H
#define UNISTD_H

#include <stddef.h>

extern ssize_t write(int fd, const void *buf, size_t nbyte);
extern ssize_t read(int fd, void *buf, size_t nbyte);

extern void _exit(int status);

#endif