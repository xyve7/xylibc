#ifndef SYS_STAT_H
#define SYS_STAT_H

#include <sys/types.h>
#include <syscall.h>

int mkdir(const char *path, mode_t mode);
int chmod(const char *path, mode_t mode);

#endif
