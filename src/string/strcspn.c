#include <string.h>

size_t strcspn(const char* str1, const char* str2)
{
    const char * s1 = str1;
    const char * s2 = str2;
    for (;*s2 ; s1++) {
        if(*s1 == '\0') {
            s1 = str1;
            s2++;
        } else if(*s1 == *s2) {
			return (s1 - str1);
		}
    }
	return (s1 - str1);
}