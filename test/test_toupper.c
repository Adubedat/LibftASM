#include "tester.h"
#include <ctype.h>

static void test_toupper_A() {
    assert(toupper('A'), ft_toupper('A'));
}

static void test_toupper_Z() {
    assert(toupper('Z'), ft_toupper('Z'));
}

static void test_toupper_a() {
    assert(toupper('a'), ft_toupper('a'));
}

static void test_toupper_z() {
    assert(toupper('z'), ft_toupper('z'));
}

static void test_toupper_neg() {
    assert(toupper(-42), ft_toupper(-42));
}

static void test_toupper_0() {
    assert(toupper(0), ft_toupper(0));
}

static void test_toupper_bracket() {
    assert(toupper('['), ft_toupper('['));
}

void test_toupper() {
    printf(CYAN"\nTEST TOUPPER:\n\n"DEFAULT);
    test_toupper_A();
    test_toupper_Z();
    test_toupper_a();
    test_toupper_z();
    test_toupper_neg();
    test_toupper_0();
    test_toupper_bracket();
}