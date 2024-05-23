#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include "cs50.h"

int main(void)
{
    // string s = "HI!";
    char *s = "HI!";
    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);

    char *f = "HI!";
    printf("%s\n", f);
    printf("%c\n", f[0]);
    printf("%c\n", f[1]);
    printf("%c\n", f[2]);

    char *g = "HI!";
    printf("%s\n", g);
    printf("%s\n", *g);
    printf("%c", *(g + 1));
    printf("%c", *(g + 2));
    // printf("%c\n", *(g + 3));
}
