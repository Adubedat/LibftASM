#include "tester.h"
#include <string.h>

static void test_memcpy_simple() {
    char dst1[BUFF_SIZE] = { [ 0 ... 63 ] = 0 };
    char src1[BUFF_SIZE] = { [ 0 ... 63 ] = 1 };
    char dst2[BUFF_SIZE] = { [ 0 ... 63 ] = 0 };
    char src2[BUFF_SIZE] = { [ 0 ... 63 ] = 1 };
    void *ret1;
    void *ret2;

    ret1 = ft_memcpy(dst1, src1, 10);
    ret2 = memcpy(dst2, src2, 10);
    assert(memcmp(dst1, dst2, BUFF_SIZE), 0);
    assert(memcmp(ret1, ret2, BUFF_SIZE), 0);
}

static void test_memcpy_zero() {
    char dst1[BUFF_SIZE] = { [ 0 ... 63 ] = 0 };
    char src1[BUFF_SIZE] = { [ 0 ... 63 ] = 1 };
    char dst2[BUFF_SIZE] = { [ 0 ... 63 ] = 0 };
    char src2[BUFF_SIZE] = { [ 0 ... 63 ] = 1 };
    void *ret1;
    void *ret2;

    ret1 = ft_memcpy(dst1, src1, 0);
    ret2 = memcpy(dst2, src2, 0);
    assert(memcmp(dst1, dst2, BUFF_SIZE), 0);
    assert(memcmp(ret1, ret2, BUFF_SIZE), 0);
}

static void test_memcpy_middle() {
    char dst1[BUFF_SIZE] = { [ 0 ... 63 ] = 0 };
    char src1[BUFF_SIZE] = { [ 0 ... 63 ] = 1 };
    char dst2[BUFF_SIZE] = { [ 0 ... 63 ] = 0 };
    char src2[BUFF_SIZE] = { [ 0 ... 63 ] = 1 };
    void *ret1;
    void *ret2;

    ret1 = ft_memcpy(dst1 + 15, src1, 10);
    ret2 = memcpy(dst2 + 15, src2, 10);
    assert(memcmp(dst1, dst2, BUFF_SIZE), 0);
    assert(memcmp(ret1, ret2, BUFF_SIZE - 15), 0);
}

static void test_memcpy_long() {
    char dst1[4096] = { [ 0 ... 4095 ] = 0 };
    char src1[4096] = { [ 0 ... 4095 ] = 1 };
    char dst2[4096] = { [ 0 ... 4095 ] = 0 };
    char src2[4096] = { [ 0 ... 4095 ] = 1 };
    void *ret1;
    void *ret2;

    ret1 = ft_memcpy(dst1, src1, 4094);
    ret2 = memcpy(dst2, src2, 4094);
    assert(memcmp(dst1, dst2, 4096), 0);
    assert(memcmp(ret1, ret2, 4096), 0);
}

void test_memcpy() {
    printf(CYAN"\nTEST MEMCPY:\n"DEFAULT"\n");
    test_memcpy_simple();
    test_memcpy_zero();
    test_memcpy_middle();
    test_memcpy_long();
}