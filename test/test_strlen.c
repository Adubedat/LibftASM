#include "tester.h"
#include <string.h>

static void test_strlen_simple() {
    assert(ft_strlen("test"),strlen("test"));
    assert(ft_strlen("Hello world !"), strlen("Hello world !"));
}

static void test_strlen_empty() {
    assert(ft_strlen(""), strlen(""));
}

static void test_strlen_long() {
    char test[4096] = { [ 0 ... 4094 ] = 1, [ 4095 ] = 0 };
    assert(ft_strlen(test), strlen(test));
}

void test_strlen() {
    printf(CYAN"\nTEST STRLEN:\n"DEFAULT"\n");
    test_strlen_simple();
    test_strlen_empty();
    test_strlen_long();
}