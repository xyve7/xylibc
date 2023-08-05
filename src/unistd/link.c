#include <unistd.h>
int link(const char *old_path, const char *new_path) {
    return syscall(SYS_link, old_path, new_path);
}