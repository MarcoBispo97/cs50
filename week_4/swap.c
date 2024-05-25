#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar funções como printf

// Declaração da função swap que recebe dois ponteiros para inteiros
void swap(int *a, int *b);

int main(void)
{
    int x = 1; // Inicializa a variável x com o valor 1
    int y = 2; // Inicializa a variável y com o valor 2

    // Imprime os valores de x e y antes da troca
    printf("x is %i, y is %i\n", x, y);

    // Chama a função swap passando os endereços de x e y
    swap(&x, &y);

    // Imprime os valores de x e y após a troca
    printf("x is %i, y is %i\n", x, y);
}

// Definição da função swap que troca os valores de dois inteiros usando ponteiros
void swap(int *a, int *b)
{
    int tmp = *a; // Armazena o valor apontado por a em tmp
    *a = *b;      // Atribui o valor apontado por b ao local apontado por a
    *b = tmp;     // Atribui o valor armazenado em tmp ao local apontado por b
}
