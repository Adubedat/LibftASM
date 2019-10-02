#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "test/tester.h"

void    ft_bzero(void *s, size_t n);
// char*   ft_strcat(char* restrict s1, const char* restrict s2);
// int     ft_puts(const char* str);

// int     test_bzero(void) {
//     char* str = (char*)malloc(6);
//     strcpy(str, "Hello");
//     printf("str before bzero : %s\n", str);
//     ft_bzero(str, 6);
//     printf("str after bzero : %s\n", str);
//     free(str);
//     return(EXIT_SUCCESS);
// }

// int     test_strcat(void) {
//     char* str1 = (char*)malloc(6);
//     char* str2 = (char*)malloc(9);
//     char *str3;
//     strcpy(str1, "Hello");
//     strcpy(str2, " world !");
//     printf("str1 before strcat: %s\n", str1);
//     printf("str2 before strcat: %s\n", str2);
//     str3 = ft_strcat(str1, str2);
//     printf("str1 after strcat: %s\n", str1);
//     printf("str2 after strcat: %s\n", str2);
//     printf("str3 after strcat: %s\n", str3);
//     free(str1);
//     free(str2);
//     return(EXIT_SUCCESS);
// }

// int     test_puts(void) {
//     char* str1 = (char*)malloc(14);
//     strcpy(str1, "Hello world !");
//     ft_puts("X");
//     return (EXIT_SUCCESS);
// }

int     main(int argc, char** argv) {
    
    test_bzero();
    return (0);
}