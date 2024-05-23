#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <string.h>
#include "cs50.h"

int main(void)
{
    int i = 4;
    int j = 4;

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("Endereço para o qual o ponteiro aponta \nchar *s \n");
    char *s = "HI!";
    char *t = "HI!";

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("strcmp(s, t): \n");
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("%p\n", s);
    printf("%p\n", t);
}