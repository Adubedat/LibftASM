#include "tester.h"
#include <ctype.h>
#include <limits.h>

static void test_isascii_a() {
    assert(isascii('a'), ft_isascii('a'));
}

static void test_isascii_z() {
    assert(isascii('z'), ft_isascii('z'));
}

static void test_isascii_A() {
    assert(isascii('A'), ft_isascii('A'));
}

static void test_isascii_Z() {
    assert(isascii('Z'), ft_isascii('Z'));
}

static void test_isascii_0() {
    assert(isascii(0), ft_isascii(0));
}

static void test_isascii_9() {
    assert(isascii(9), ft_isascii(9));
}

static void test_isascii_neg() {
    assert(isascii(-42), ft_isascii(-42));
}

static void test_isascii_slash() {
    assert(isascii('/'), ft_isascii('/'));
}

static void test_isascii_bracket() {
    assert(isascii('['), ft_isascii('['));
}

static void test_isascii_INT_MAX() {
    assert(isascii(INT_MAX), ft_isascii(INT_MAX));
}

static void test_isascii_INT_MIN() {
    assert(isascii(INT_MIN), ft_isascii(INT_MIN));
}

void test_isascii() {
    printf(CYAN"\nTEST ISASCII:\n\n"DEFAULT);
    test_isascii_a();
    test_isascii_A();
    test_isascii_z();
    test_isascii_Z();
    test_isascii_0();
    test_isascii_9();
    test_isascii_neg();
    test_isascii_slash();
    test_isascii_bracket();
    test_isascii_INT_MAX();
    test_isascii_INT_MIN();
}