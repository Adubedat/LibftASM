#ifndef TESTER_H
# define TESTER_H

#include <stdio.h>
#include "libfts.h"

#define GREEN       "\033[0;32m"
#define RED         "\033[0;31m"
#define CYAN        "\x1b[36m"
#define DEFAULT     "\033[0m"

#define assert(x, y)                                                \
    do {                                                            \
        if ((x) == (y))                                             \
            printf(GREEN"%s : ✔\n"DEFAULT,                          \
            __func__);                                              \
        else                                                        \
            printf(RED"%s:%d Failed for %s\n"DEFAULT,               \
            __FILE__,                                               \
            __LINE__,                                               \
            __func__);                                              \
    } while(0)

void                test_bzero();

#endif