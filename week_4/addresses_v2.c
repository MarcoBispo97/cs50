#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main(void)
{
    int n = 50;  // Declara a variável inteira 'n' e inicializa com 50
    int *p = &n; // Declara um ponteiro 'p' e o inicializa com o endereço de 'n'
    // Ponteiros geralmente ocupam mais espaço

    // Imprime o valor de 'n'
    printf("%i\n", n);

    // Imprime o endereço de 'n'
    printf("%p\n", &n);

    // Imprime o endereço do ponteiro 'p'
    printf("%p\n", &p);

    // Imprime o valor apontado por 'p' (que é o valor de 'n')
    printf("%i\n", *p);

    // Imprime o endereço para o qual 'p' aponta (endereço de 'n')
    printf("%p\n", p);

    return 0;
}
