#include <stdio.h>
#include "cs50.h"

int main(void)
{
    string s = "HI!";

    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);
    // char *s = "HI!";
    // printf("%c", *s);
}
// string é uma char *
// string é apenas o endereço do primeiro
// caracter
// char *S = "HI!";