#include <string.h>

size_t strspn(const char* str1, const char* str2)
{
    const char * s1 = str1;
    const char * s2 = str2;
    for (;*s1 ; s2++) {
        if(*s2 == '\0') {
            s2 = str2;
            s1++;
        } else if(*s1 != *s2) {
			return (s1 - str1);
		}
    }
	return (s1 - str1);
}