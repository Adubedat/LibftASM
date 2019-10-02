#include "tester.h"

static void test_strcat_hello_world() {
    char s1[32] = { 0 };
    char s2[32] = { 0 };

    strcpy(s1, "Hello");
    strcpy(s2, "Hello");
    strcat(s1, " world !");
    ft_strcat(s2, " world !");
    assert(memcmp(s1, s2, 32), 0);
}

static void test_strcat_empty_s1() {
    char s1[32] = { 0 };
    char s2[32] = { 0 };

    strcat(s1, "Hello !");
    ft_strcat(s2, "Hello !");
    assert(memcmp(s1, s2, 32), 0);
}

static void test_strcat_empty_s2() {
    char s1[32] = { 0 };
    char s2[32] = { 0 };

    strcpy(s1, "Hello");
    strcpy(s2, "Hello");
    strcat(s1, "");
    ft_strcat(s2, "");
    assert(memcmp(s1, s2, 32), 0);
}

static void test_strcat_empty_both() {
    char s1[32] = { 0 };
    char s2[32] = { 0 };

    strcat(s1, "");
    ft_strcat(s2, "");
    assert(memcmp(s1, s2, 32), 0);
}

static void test_strcat_return() {
    char s1[32] = { 0 };
    char s2[32] = { 0 };
    char *ret1;
    char *ret2;

    ret1 = strcat(s1, "");
    ret2 = ft_strcat(s2, "");
    assert(strcmp(ret1, ret2), 0);
    ret1 = strcat(s1, "Hello");
    ret2 = strcat(s2, "Hello");
    assert(strcmp(ret1, ret2), 0);
    ret1 = strcat(s1, " world !");
    ret2 = strcat(s2, " world !");
    assert(strcmp(ret1, ret2), 0);
}

void test_strcat() {
    printf(CYAN"\nTEST STRCAT:\n\n"DEFAULT);
    test_strcat_hello_world();
    test_strcat_empty_s1();
    test_strcat_empty_s2();
    test_strcat_empty_both();
    test_strcat_return();
}