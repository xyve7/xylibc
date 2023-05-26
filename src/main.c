#include <unistd.h>
#include <stdio.h>

int main(void) {
	// int fd = open("/run/media/xyve/Data/Programming/xylibc/src/bs.txt", O_RDONLY, 0666);
	// char buffer[13] = {0};
	// read(fd, buffer, 12);
	// puts(buffer);
	// close(fd);
	return write(1, "Hello", 5);
}

void _start(void) {
	_exit(main());	
}
