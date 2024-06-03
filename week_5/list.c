#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Aloca memória para uma lista de 3 inteiros
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1; // Verifica se a alocação foi bem-sucedida
    }

    // Inicializa os valores da lista
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Aloca memória para uma nova lista de 4 inteiros
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list); // Libera a memória anteriormente alocada se a nova alocação falhar
        return 1;   // Verifica se a alocação foi bem-sucedida
    }

    // Copia os valores da lista original para a nova lista
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    // Adiciona o novo valor
    tmp[3] = 4;

    // Libera a memória da lista original
    free(list);

    // Atualiza o ponteiro para apontar para a nova lista
    list = tmp;

    // Imprime os valores da nova lista
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Libera a memória da nova lista
    free(list);
    return 0;
}
