#include "tester.h"
#include <ctype.h>
#include <limits.h>

static void test_isprint_a() {
    assert(isprint('a'), ft_isprint('a'));
}

static void test_isprint_z() {
    assert(isprint('z'), ft_isprint('z'));
}

static void test_isprint_A() {
    assert(isprint('A'), ft_isprint('A'));
}

static void test_isprint_Z() {
    assert(isprint('Z'), ft_isprint('Z'));
}

static void test_isprint_0() {
    assert(isprint(0), ft_isprint(0));
}

static void test_isprint_9() {
    assert(isprint(9), ft_isprint(9));
}

static void test_isprint_neg() {
    assert(isprint(-42), ft_isprint(-42));
}

static void test_isprint_slash() {
    assert(isprint('/'), ft_isprint('/'));
}

static void test_isprint_bracket() {
    assert(isprint('['), ft_isprint('['));
}

static void test_isprint_INT_MAX() {
    assert(isprint(INT_MAX), ft_isprint(INT_MAX));
}

static void test_isprint_INT_MIN() {
    assert(isprint(INT_MIN), ft_isprint(INT_MIN));
}

void test_isprint() {
    printf(CYAN"\nTEST ISPRINT:\n\n"DEFAULT);
    test_isprint_a();
    test_isprint_A();
    test_isprint_z();
    test_isprint_Z();
    test_isprint_0();
    test_isprint_9();
    test_isprint_neg();
    test_isprint_slash();
    test_isprint_bracket();
    test_isprint_INT_MAX();
    test_isprint_INT_MIN();
}