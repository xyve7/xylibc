#include <unistd.h>
#include <stdio.h>

int main(void) {
	int fd = open("src/bs.txt", O_RDWR, 0666);
	write(fd, "Hello World!", 12);
	close(fd);
}

void _start(void) {
	_exit(main());	
}
