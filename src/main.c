#include <unistd.h>
#include <stdio.h>

int main(void) {
	write(1, "HI", 2);
}
void _start(void) {
	_exit(main());	
}
