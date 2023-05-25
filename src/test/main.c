#include <unistd.h>

void _start(void){
	char buf[12] = {0};
	read(0, buf, 12);
	write(1, buf, 12);
	_exit(0); 
}
