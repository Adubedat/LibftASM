#include "tester.h"
#include <string.h>

static void test_memset_simple() {
    char    test1[BUFF_SIZE] = { [ 0 ... 62 ] = 'a', [ 63 ] = 0 };
    char    test2[BUFF_SIZE] = { [ 0 ... 62 ] = 'a', [ 63 ] = 0 };

    memset(test1, 'b', 36);
    ft_memset(test2, 'b', 36);

    assert(memcmp(test1, test2, BUFF_SIZE), 0);
}

static void test_memset_len0() {
    char    test1[BUFF_SIZE] = { [ 0 ... 62 ] = 'a', [ 63 ] = 0 };
    char    test2[BUFF_SIZE] = { [ 0 ... 62 ] = 'a', [ 63 ] = 0 };

    memset(test1, 'b', (0));
    ft_memset(test2, 'b', 0);

    assert(memcmp(test1, test2, BUFF_SIZE), 0);
}

static void test_memset_middle() {
    char    test1[BUFF_SIZE] = { [ 0 ... 62 ] = 'a', [ 63 ] = 0 };
    char    test2[BUFF_SIZE] = { [ 0 ... 62 ] = 'a', [ 63 ] = 0 };

    memset(test1 + 12, 'b', 10);
    ft_memset(test2 + 12, 'b', 10);

    assert(memcmp(test1, test2, BUFF_SIZE), 0);
}

static void test_memset_long(){
    char    test1[4096] = { [ 0 ... 4094 ] = 'a', [ 4095 ] = 0 };
    char    test2[4096] = { [ 0 ... 4094 ] = 'a', [ 4095 ] = 0 };

    memset(test1, 'b', 4092);
    ft_memset(test2, 'b', 4092);

    assert(memcmp(test1, test2, 4096), 0);
}

static void test_memset_overflow(){
    char    test1[BUFF_SIZE] = { [ 0 ... 62 ] = 'a', [ 63 ] = 0 };
    char    test2[BUFF_SIZE] = { [ 0 ... 62 ] = 'a', [ 63 ] = 0 };

    memset(test1, 0xdeadbeef, 10);
    ft_memset(test2, 0xdeadbeef, 10);

    assert(memcmp(test1, test2, BUFF_SIZE), 0);
}

void test_memset() {
    printf(CYAN"\nTEST MEMSET:\n"DEFAULT"\n");
    test_memset_simple();
    test_memset_len0();
    test_memset_middle();
    test_memset_long();
    test_memset_overflow();
}