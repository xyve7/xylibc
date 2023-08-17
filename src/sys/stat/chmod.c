#include <sys/stat.h>

int chmod(const char *path, mode_t mode) {
  return syscall(SYS_chmod, path, mode);
}
