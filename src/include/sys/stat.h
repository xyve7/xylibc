#ifndef SYS_STAT_H
#define SYS_STAT_H

#include <sys/types.h>

extern int mkdir(const char *path, mode_t mode);
extern int chmod(const char *path, mode_t mode);

#endif