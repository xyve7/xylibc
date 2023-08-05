#include <unistd.h>

int symlink(const char *target, const char *link_path){
    return syscall(SYS_symlink, target, link_path);
}