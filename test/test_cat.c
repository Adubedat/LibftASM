#include "tester.h"
#include <string.h>

static void test_cat_simple() {
    int pipe_pair1[2];
    int pipe_pair2[2];
    char buffer1[BUFF_SIZE] = { 0 };
    char buffer2[BUFF_SIZE] = { 0 };
    int ret1;
    int ret2;

    redirect_stdout(pipe_pair1);
    ret1 = ft_puts("Hello world !");
    restore_stdout();
    redirect_stdout(pipe_pair2);
    ret2 = puts("Hello world !");
    restore_stdout();
    read(pipe_pair1[0], buffer1, BUFF_SIZE);
    read(pipe_pair2[0], buffer2, BUFF_SIZE);

    assert(strcmp(buffer1, buffer2), 0);
    assert(ret1, ret2);

    close(pipe_pair1[0]);
    close(pipe_pair1[1]);
    close(pipe_pair2[0]);
    close(pipe_pair2[1]);
}

void test_cat() {
    printf(CYAN"\nTEST CAT:\n"DEFAULT"\n");
    test_cat_simple();
}