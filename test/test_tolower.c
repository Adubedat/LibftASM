#include "tester.h"
#include <ctype.h>

static void test_tolower_A() {
    assert(tolower('A'), ft_tolower('A'));
}

static void test_tolower_Z() {
    assert(tolower('Z'), ft_tolower('Z'));
}

static void test_tolower_a() {
    assert(tolower('a'), ft_tolower('a'));
}

static void test_tolower_z() {
    assert(tolower('z'), ft_tolower('z'));
}

static void test_tolower_neg() {
    assert(tolower(-42), ft_tolower(-42));
}

static void test_tolower_0() {
    assert(tolower(0), ft_tolower(0));
}

static void test_tolower_bracket() {
    assert(tolower('['), ft_tolower('['));
}

void test_tolower() {
    printf(CYAN"\nTEST TOLOWER:\n"DEFAULT"\n");
    test_tolower_A();
    test_tolower_Z();
    test_tolower_a();
    test_tolower_z();
    test_tolower_neg();
    test_tolower_0();
    test_tolower_bracket();
}