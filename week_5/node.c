#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura node
typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    // Alocando memória para um novo node
    node *n = (node *)malloc(sizeof(node));

    // Verificando se a alocação foi bem-sucedida
    if (n == NULL)
    {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Inicializando os campos do node
    n->data = 10;
    n->next = NULL;

    // Exibindo os valores
    printf("Dados no node: %d\n", n->data);

    // Liberando a memória alocada
    free(n);

    return 0;
}
