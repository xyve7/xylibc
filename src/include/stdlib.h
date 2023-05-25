#ifndef STDLIB_H
#define STDLIB_H

#ifdef __cplusplus
extern "C" {
#endif

/* Not sure that div_t, ldiv_t, div(int), ldiv(long), abs(int), and labs(long) even goes here. */

typedef struct {
    int quot;
    int rem;
} div_t;

typedef struct {
    long quot;
    long rem;
} ldiv_t;

div_t div(int numer, int denom);
ldiv_t ldiv(long numer, long denom);

int abs(int val);
long labs(long val);

#ifdef __cplusplus
}
#endif

#endif