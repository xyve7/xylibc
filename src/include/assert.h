#ifndef ASSERT_H
#define ASSERT_H

#ifdef NDEBUG

#define assert(expr) ((void)0)

#endif

#define static_assert _Static_assert

#endif