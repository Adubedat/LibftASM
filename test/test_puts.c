#include "tester.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

static void test_puts_hello_world() {
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

static void test_puts_empty_string() {
    int pipe_pair1[2];
    int pipe_pair2[2];
    char buffer1[BUFF_SIZE] = { 0 };
    char buffer2[BUFF_SIZE] = { 0 };
    int ret1;
    int ret2;

    redirect_stdout(pipe_pair1);
    ret1 = ft_puts("");
    restore_stdout();
    redirect_stdout(pipe_pair2);
    ret2 = puts("");
    restore_stdout();
    read(pipe_pair1[0], buffer1, BUFF_SIZE);
    read(pipe_pair2[0], buffer2, BUFF_SIZE);

    assert(memcmp(buffer1, buffer2, BUFF_SIZE), 0);
    assert(ret1, ret2);
    
    close(pipe_pair1[0]);
    close(pipe_pair1[1]);
    close(pipe_pair2[0]);
    close(pipe_pair2[1]);
}

static void test_puts_null() {
    int pipe_pair1[2];
    int pipe_pair2[2];
    char buffer1[BUFF_SIZE] = { 0 };
    char buffer2[BUFF_SIZE] = { 0 };
    int ret1;
    int ret2;

    redirect_stdout(pipe_pair1);
    ret1 = ft_puts(NULL);
    restore_stdout();
    redirect_stdout(pipe_pair2);
    ret2 = puts(NULL);
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

static void	test_puts_error(void)
{
	int pipe_pair1[2];
	int pipe_pair2[2];
	int ret1;
	int ret2;

	redirect_stdout(pipe_pair1);
	close(fileno(stdout));
	ret1 = ft_puts("Hello World!");
	restore_stdout();

	redirect_stdout(pipe_pair2);
	close(fileno(stdout));
	ret2 =    puts("Hello World!");
	restore_stdout();

	assert(ret1, ret2);

	close(pipe_pair1[0]);
	close(pipe_pair1[1]);
	close(pipe_pair2[0]);
	close(pipe_pair2[1]);
}

void test_puts() {
    printf(CYAN"\nTEST PUTS:\n"DEFAULT"\n");
    test_puts_hello_world();
    test_puts_empty_string();
    test_puts_null();
    test_puts_error();
}