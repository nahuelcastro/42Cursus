#include "libft.h"
#include <stdio.h>

void test_ft_isalpha() {
    if (ft_isalpha('a') == 1 && ft_isalpha('A') && ft_isalpha('z') && ft_isalpha('Z') &&
        !ft_isalpha('1') && ft_isalpha(' ') == 0 && !ft_isalpha('\n') && !ft_isalpha('\0')) {
        printf("ft_isalpha: OK\n");
    } else {
        printf("ft_isalpha: FAILED ============\n");
    }
}

void test_ft_isdigit() {
    if (ft_isdigit('1') == 1 && ft_isdigit('2') && ft_isdigit('4') &&
        !ft_isdigit('a') && ft_isdigit(' ') == 0 && !ft_isdigit('\n') && !ft_isdigit('\0')) {
        printf("ft_isdigit: OK\n");
    } else {
        printf("ft_isdigit: FAILED ============\n");
    }
}

void test_ft_isalnum() {
    if (ft_isalnum('1') == 1 && ft_isalnum('2') && ft_isalnum('4') &&
        ft_isalnum('a') && ft_isalnum(' ') == 0 && !ft_isalnum('\n') && !ft_isalnum('\0')) {
        printf("ft_isalnum: OK\n");
    } else {
        printf("ft_isalnum: FAILED ============\n");
    }
}

void test_ft_isascii() {
    if (ft_isascii('\0') == 1 && ft_isascii(' ') && ft_isascii('a') && ft_isascii('A') &&
        ft_isascii('z') && ft_isascii('Z') && ft_isascii('1') && ft_isascii('2') &&
        ft_isascii(127) && !ft_isascii(128) && !ft_isascii(-1)) {
        printf("ft_isascii: OK\n");
    } else {
        printf("ft_isascii: FAILED ============\n");
    }
}

void test_ft_isprint() {
    if (ft_isprint(' ') == 1 && ft_isprint('a') && ft_isprint('Z') &&
        ft_isprint(31) == 0 && !ft_isprint(30) && !ft_isprint(300) &&
        ft_isprint(127) == 0 && !ft_isprint(128) && !ft_isprint(-1)) {
        printf("ft_isprint: OK\n");
    } else {
        printf("ft_isprint: FAILED ============\n");
    }
}

void test_ft_strlen() {
    if (ft_strlen("Hello") == 5 && ft_strlen("") == 0) {
        printf("ft_strlen: OK\n");
    } else {
        printf("ft_strlen: FAILED ============\n");
    }
}

void test_ft_toupper()
{
    if (ft_toupper('a') == 'A' && ft_toupper('A') == 'A' && ft_toupper('z') == 'Z' &&
        ft_toupper('Z') == 'Z' && ft_toupper('1') == '1' && ft_toupper(' ') == ' ' &&
        ft_toupper('\n') == '\n' && ft_toupper('\0') == '\0') {
        printf("ft_toupper: OK\n");
    } else {
        printf("ft_toupper: FAILED ============\n");
    }
}

void test_ft_tolower() {
    if (ft_tolower('a') == 'a' && ft_tolower('A') == 'a' && ft_tolower('z') == 'z' &&
        ft_tolower('Z') == 'z' && ft_tolower('1') == '1' && ft_tolower(' ') == ' ' &&
        ft_tolower('\n') == '\n' && ft_tolower('\0') == '\0') {
        printf("ft_tolower: OK\n");
    } else {
        printf("ft_tolower: FAILED ============\n");
    }
}

void test_ft_memset() {
    char str[10];
    ft_memset(str, 'a', 10);
    if (str[0] == 'a' && str[1] == 'a' && str[2] == 'a' && str[3] == 'a' &&
        str[4] == 'a' && str[5] == 'a' && str[6] == 'a' && str[7] == 'a' &&
        str[8] == 'a' && str[9] == 'a') {
        printf("ft_memset: OK\n");
    } else {
        printf("ft_memset: FAILED ============\n");
    }
}

void test_ft_bzero() {
    char str[10];
    ft_memset(str, 'a', 10);
    ft_bzero(str, 10);
    if (str[0] == '\0' && str[1] == '\0' && str[2] == '\0' && str[3] == '\0' &&
        str[4] == '\0' && str[5] == '\0' && str[6] == '\0' && str[7] == '\0' &&
        str[8] == '\0' && str[9] == '\0') {
        printf("ft_bzero: OK\n");
    } else {
        printf("ft_bzero: FAILED ============\n");
    }
}

void test_ft_memcpy(){
    char src[10] = "123456789";
    char dest[10];
    ft_memcpy(dest, src, 10);
    if (dest[0] == '1' && dest[1] == '2' && dest[2] == '3' && dest[3] == '4' &&
        dest[4] == '5' && dest[5] == '6' && dest[6] == '7' && dest[7] == '8' &&
        dest[8] == '9' && dest[9] == '\0') {
        printf("ft_memcpy: OK\n");
    } else {
        printf("ft_memcpy: FAILED ============\n");
    }
}



int main(void)
{
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_strlen();
    test_ft_toupper();
    test_ft_tolower();
    test_ft_memset();
    test_ft_bzero();
    test_ft_memcpy();
    return (0);
}

