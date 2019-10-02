#include "tester.h"
#include <ctype.h>

static void test_isalnum_a() {
    assert(isalnum('a'), ft_isalnum('a'));
}

static void test_isalnum_z() {
    assert(isalnum('z'), ft_isalnum('z'));
}

static void test_isalnum_A() {
    assert(isalnum('A'), ft_isalnum('A'));
}

static void test_isalnum_Z() {
    assert(isalnum('Z'), ft_isalnum('Z'));
}

static void test_isalnum_0() {
    assert(isalnum(0), ft_isalnum(0));
}

static void test_isalnum_9() {
    assert(isalnum(9), ft_isalnum(9));
}

static void test_isalnum_neg() {
    assert(isalnum(-42), ft_isalnum(-42));
}

static void test_isalnum_slash() {
    assert(isalnum('/'), ft_isalnum('/'));
}

static void test_isalnum_bracket() {
    assert(isalnum('['), ft_isalnum('['));
}

void test_isalnum() {
    printf(CYAN"\nTEST ISALNUM:\n\n"DEFAULT);
    test_isalnum_a();
    test_isalnum_A();
    test_isalnum_z();
    test_isalnum_Z();
    test_isalnum_0();
    test_isalnum_9();
    test_isalnum_neg();
    test_isalnum_slash();
    test_isalnum_bracket();
}