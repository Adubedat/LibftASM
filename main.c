#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, size_t n);

int     test_bzero(void) {
    char* str = (char*)malloc(6);
    strcpy(str, "Hello");
    printf("str before bzero : %s\n", str);
    ft_bzero(str, 6);
    printf("str after bzero : %s\n", str);
    return(EXIT_SUCCESS);
}

int     main(int argc, char** argv) {
    
    printf("%d", test_bzero());
    return(EXIT_SUCCESS);
}