#include <stdio.h>

#undef stdin
#undef stdout
#undef stderr

FILE _stdin = {
    .fd = 0,
    .pos = 0
};
FILE _stdout = {
    .fd = 1,
    .pos = 0
};
FILE _stderr = {
    .fd = 2,
    .pos = 0
};
FILE* const stdin = &_stdin;
FILE* const stdout = &_stdout;
FILE* const stderr = &_stderr;
