#include <string.h>

static char* last = NULL;

char* strtok(char* str, const char* delim)
{
    if(last == NULL && str != NULL) {
        last = str;
    }
    char* pbrk;
    char* save;
    if((pbrk = strpbrk(last, delim)) == NULL) {
        save = last;
        last = NULL;
        return save;
    }
    *pbrk = '\0';
    save = last;
    last = pbrk + 1;
    return save;
}