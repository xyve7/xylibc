#ifndef STDDEF_H
#define STDDEF_H

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned long size_t;
typedef long ssize_t;
typedef long ptrdiff_t;
typedef int wchar_t;

#define NULL ((void*)0)
#define offsetof(type, member) ((size_t)&((type *)0)->member)

#ifdef __cplusplus
}
#endif

#endif