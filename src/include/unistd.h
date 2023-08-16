#ifndef UNISTD_H
#define UNISTD_H

#include <stddef.h>
#include <syscall.h>

ssize_t read(int fd, void *buf, size_t nbyte);
ssize_t write(int fd, const void *buf, size_t nbyte);

int close(int fd);

void _exit(int status);

int chdir(const char *path);
int rmdir(const char *path);

int link(const char *old_path, const char *new_path);
int unlink(const char *path);
int symlink(const char *target, const char *link_path);
ssize_t readlink(const char *restrict path, char *restrict buf, size_t bufsize);

#endif