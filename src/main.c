#include <unistd.h>
#include <stdio.h>

int main(void) {
	FILE fp;
	fp.fd = 1;
	fp.pos = 0;
	fwrite("TESTING", 7, 1, &fp);

}

void _start(void){
	
	_exit(main());	
}
