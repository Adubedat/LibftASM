#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "tester.h"

int saved_stdout;

void redirect_stdout(int pipe_pair[2]) {
    saved_stdout = dup(STDOUT_FILENO);
    if(pipe(pipe_pair) != 0) {
        fprintf(stderr,"Could not create pipe. Skipping command\n");
        exit(1);
    }
    if (dup2(pipe_pair[1], STDOUT_FILENO) == -1) {
        fprintf(stderr, "Error\n");
        exit(1);
    }
}

void restore_stdout() {
    if (dup2(saved_stdout, STDOUT_FILENO) == -1) {
        fprintf(stderr, "Error\n");
        exit(1);
    }
}

int     main(int argc, char** argv) {
    
    test_bzero();
    test_isalnum();
    test_isalpha();
    test_isdigit();
    test_isascii();
    test_isprint();
    test_tolower();
    test_toupper();
    test_strcat();
    test_puts();
    test_strlen();
    test_memset();
    test_memcpy();
    test_strdup();
    return (0);
}