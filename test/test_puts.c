#include "tester.h"
#include <stdio.h>
#include <unistd.h>

static void test() {
    int pipe_pair1[2];
    int pipe_pair2[2];
    char buffer1[BUFF_SIZE] = { 0 };
    char buffer2[BUFF_SIZE] = { 0 };

    redirect_stdout(pipe_pair1);
    ft_puts("Hello world !");
    restore_stdout();
    redirect_stdout(pipe_pair2);
    puts("Hello world !");
    restore_stdout();
    read(pipe_pair1[0], buffer1, BUFF_SIZE);
    read(pipe_pair2[0], buffer2, BUFF_SIZE);

    printf("%s\n", buffer1);
    printf("%s\n", buffer2);

    close(pipe_pair1[0]);
    close(pipe_pair1[1]);
    close(pipe_pair2[0]);
    close(pipe_pair2[1]);
}

void test_puts() {
    printf(CYAN"\nTEST PUTS:\n\n"DEFAULT);
    test();
}