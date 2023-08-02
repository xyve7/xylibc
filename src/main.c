#include <unistd.h>
#include <stdio.h>

int main(void) {
    fprintf("%d\n", 125);
}

void _start(void) {
	_exit(main());	
}
