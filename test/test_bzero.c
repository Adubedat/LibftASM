#include <strings.h>
#include "tester.h"

// void    ft_bzero(void *s, size_t n);

static void test_bzero_simple() {
    char s1[16] = { [0 ... 15] = 1};
    char s2[16] = { [0 ... 15] = 1};

    bzero(s1, 5);
    ft_bzero(s2, 5);
    assert(memcmp(s1, s2, 16), 0);
}

static void test_bzero_zero() {
    char s1[16] = { [0 ... 15] = 1};
    char s2[16] = { [0 ... 15] = 1};

    bzero(s1, (0));
    ft_bzero(s2, 0);
    assert(memcmp(s1, s2, 16), 0);    
}

static void test_bzero_full() {
    char s1[16] = { [0 ... 15] = 1};
    char s2[16] = { [0 ... 15] = 1};

    bzero(s1, 16);
    ft_bzero(s2, 16);
    assert(memcmp(s1, s2, 16), 0);
}

static void test_bzero_middle() {
    char s1[16] = { [0 ... 15] = 1};
    char s2[16] = { [0 ... 15] = 1};

    bzero(s1+3, 5);
    ft_bzero(s2+3, 5);
    assert(memcmp(s1, s2, 16), 0);
}

void test_bzero() {
    printf(CYAN"\nTEST BZERO:\n\n"DEFAULT);
    test_bzero_simple();
    test_bzero_zero();
    test_bzero_full();
    test_bzero_middle();
}