#include <string.h>

char* strpbrk(const char* str1, const char* str2)
{
    const char * s1 = str1;
    const char * s2 = str2;
    for (; *s2; s1++) {
        if(*s1 == '\0') {
            s1 = str1;
            s2++;
        }
        if(*s1 == *s2) {
			return (char*)s1;
		}
    }
    return NULL;
}