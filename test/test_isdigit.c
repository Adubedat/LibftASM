#include "tester.h"
#include <ctype.h>
#include <limits.h>

static void test_isdigit_a() {
    assert(isdigit('a'), ft_isdigit('a'));
}

static void test_isdigit_z() {
    assert(isdigit('z'), ft_isdigit('z'));
}

static void test_isdigit_A() {
    assert(isdigit('A'), ft_isdigit('A'));
}

static void test_isdigit_Z() {
    assert(isdigit('Z'), ft_isdigit('Z'));
}

static void test_isdigit_0() {
    assert(isdigit(0), ft_isdigit(0));
}

static void test_isdigit_9() {
    assert(isdigit(9), ft_isdigit(9));
}

static void test_isdigit_neg() {
    assert(isdigit(-42), ft_isdigit(-42));
}

static void test_isdigit_slash() {
    assert(isdigit('/'), ft_isdigit('/'));
}

static void test_isdigit_bracket() {
    assert(isdigit('['), ft_isdigit('['));
}

static void test_isdigit_INT_MAX() {
    assert(isdigit(INT_MAX), ft_isdigit(INT_MAX));
}

static void test_isdigit_INT_MIN() {
    assert(isdigit(INT_MIN), ft_isdigit(INT_MIN));
}

void test_isdigit() {
    printf(CYAN"\nTEST ISDIGIT:\n\n"DEFAULT);
    test_isdigit_a();
    test_isdigit_A();
    test_isdigit_z();
    test_isdigit_Z();
    test_isdigit_0();
    test_isdigit_9();
    test_isdigit_neg();
    test_isdigit_slash();
    test_isdigit_bracket();
    test_isdigit_INT_MAX();
    test_isdigit_INT_MIN();
}