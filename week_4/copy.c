#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings
#include <stdlib.h> // Inclui a biblioteca para alocação de memória dinâmica
#include <ctype.h> // Inclui a biblioteca para manipulação de caracteres (ex.: toupper)
#include "cs50.h" // Inclui a biblioteca cs50.h (biblioteca externa usada em alguns cursos de programação)

// Função principal
int main(void)
{
    char s[100]; // Declara um array de caracteres s com capacidade para 100 caracteres (99 caracteres + terminador nulo)
    printf("s: "); // Imprime uma mensagem solicitando a entrada do usuário
    scanf("%99s", s); // Lê no máximo 99 caracteres da entrada padrão e armazena em s
    printf("Você digitou: %s\n", s); // Imprime a string digitada pelo usuário

    // Aloca memória dinamicamente para t, com o tamanho exato necessário para armazenar a string s
    char *t = malloc(strlen(s) + 1); // strlen(s) retorna o tamanho de s sem o terminador nulo; +1 para incluir o terminador nulo

    if (t == NULL){
        return 1;
    }

    // Copia cada caractere de s para t, incluindo o terminador nulo
    strcpy(t,s);

    // Se t não for uma string vazia, converte o primeiro caractere para maiúsculo
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Imprime as strings s e t
    printf("%s\n", s); // Imprime a string original digitada pelo usuário
    printf("%s\n", t); // Imprime a string t com o primeiro caractere em maiúsculo

    // Libera a memória alocada dinamicamente para evitar vazamentos de memória
    free(t);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
