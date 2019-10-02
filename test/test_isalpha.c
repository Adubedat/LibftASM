#include "tester.h"
#include <ctype.h>
#include <limits.h>

static void test_isalpha_a() {
    assert(isalpha('a'), ft_isalpha('a'));
}

static void test_isalpha_z() {
    assert(isalpha('z'), ft_isalpha('z'));
}

static void test_isalpha_A() {
    assert(isalpha('A'), ft_isalpha('A'));
}

static void test_isalpha_Z() {
    assert(isalpha('Z'), ft_isalpha('Z'));
}

static void test_isalpha_0() {
    assert(isalpha(0), ft_isalpha(0));
}

static void test_isalpha_9() {
    assert(isalpha(9), ft_isalpha(9));
}

static void test_isalpha_neg() {
    assert(isalpha(-42), ft_isalpha(-42));
}

static void test_isalpha_slash() {
    assert(isalpha('/'), ft_isalpha('/'));
}

static void test_isalpha_bracket() {
    assert(isalpha('['), ft_isalpha('['));
}

static void test_isalpha_INT_MAX() {
    assert(isalpha(INT_MAX), ft_isalpha(INT_MAX));
}

static void test_isalpha_INT_MIN() {
    assert(isalpha(INT_MIN), ft_isalpha(INT_MIN));
}

void test_isalpha() {
    printf(CYAN"\nTEST ISALPHA:\n\n"DEFAULT);
    test_isalpha_a();
    test_isalpha_A();
    test_isalpha_z();
    test_isalpha_Z();
    test_isalpha_0();
    test_isalpha_9();
    test_isalpha_neg();
    test_isalpha_slash();
    test_isalpha_bracket();
    test_isalpha_INT_MAX();
    test_isalpha_INT_MIN();
}