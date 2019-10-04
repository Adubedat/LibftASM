#include "tester.h"
#include <string.h>
#include <stdlib.h>

static void test_strdup_simple() {
    char    test[BUFF_SIZE] = { [ 0 ... 62 ] = 'a', [ 63 ] = '0'};

    assert(memcmp(strdup(test), ft_strdup(test), BUFF_SIZE), 0);
}

static void test_strdup_allocation() {
    char    *ret1;
    char    *ret2;

    ret1 = strdup("Hello world !");
    ret2 = ft_strdup("Hello world !");
    assert(strcmp(ret1, ret2), 0);
    free(ret1);
    free(ret2);
}

static void test_strdup_long() {
    char    *ret1;
	char    *ret2;
	char    src[4096] = { [0 ... 4094] = 1, [4095] = 0 };

	ret1 = ft_strdup(src);
	ret2 =   	strdup(src);
	assert(strcmp(ret1, ret2), 0);
    free(ret1);
    free(ret2);
}

static void test_strdup_empty() {
    char    *ret1;
    char    *ret2;

    ret1 = strdup("");
    ret2 = ft_strdup("");
    assert(strcmp(ret1, ret2), 0);
    free(ret1);
    free(ret2);
}

void test_strdup() {
    printf(CYAN"\nTEST STRDUP:\n"DEFAULT"\n");
    test_strdup_simple();
    test_strdup_allocation();
    test_strdup_long();
    test_strdup_empty();
}