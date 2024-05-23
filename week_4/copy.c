#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "cs50.h"

int main(void)
{
    char s[100]; // Aqui, assumimos que a string terá no máximo 99 caracteres
    printf("s: ");
    scanf("%99s", s); // %99s lê no máximo 99 caracteres, deixando espaço para o terminador nulo
    printf("Você digitou: %s\n", s);
    char *t = malloc(strlen(s) + 1);

    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);
}