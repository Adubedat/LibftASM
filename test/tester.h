#ifndef TESTER_H
# define TESTER_H

#include <stdio.h>
#include "../include/libfts.h"

#define GREEN       "\033[0;32m"
#define RED         "\033[0;31m"
#define CYAN        "\x1b[36m"
#define DEFAULT     "\033[0m"

#define BUFF_SIZE   64

#define assert(x, y)                                                \
    do {                                                            \
        if ((x) == (y))                                             \
            printf(GREEN"%s : ✔"DEFAULT"\n",                        \
            __func__);                                              \
        else                                                        \
            printf(RED"%s:%d Failed for %s"DEFAULT"\n",             \
            __FILE__,                                               \
            __LINE__,                                               \
            __func__);                                              \
    } while(0)

void                redirect_stdout();
void                restore_stdout();
void                test_bzero();
void                test_isalnum();
void                test_isalpha();
void                test_isdigit();
void                test_isascii();
void                test_isprint();
void                test_tolower();
void                test_toupper();
void                test_strcat();
void                test_puts();
void                test_strlen();
void                test_memset();
void                test_memcpy();
void                test_strdup();

#endif