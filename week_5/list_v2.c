#include <stdio.h>  // Biblioteca padrão de entrada e saída
#include <stdlib.h> // Biblioteca padrão para alocação de memória, conversões e outras utilidades

// Define uma estrutura chamada 'node' que representa um nó em uma lista encadeada
typedef struct node
{
    int number;        // Campo que armazena um número inteiro
    struct node *next; // Ponteiro para o próximo nó na lista
} node;

int main(int argc, char *argv[]) // Função principal que recebe a contagem de argumentos e os próprios argumentos
{
    node *list = NULL; // Inicializa um ponteiro para o início da lista como NULL, indicando uma lista vazia

    // Loop para iterar sobre os argumentos passados na linha de comando, começando do índice 1
    // (índice 0 é o nome do programa)
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]); // Converte o argumento atual de string para inteiro

        // Aloca memória para um novo nó
        node *n = malloc(sizeof(node));
        if (n == NULL) // Verifica se a alocação de memória falhou
        {
            // Se a alocação falhou, libera a memória alocada até o momento (não implementado aqui)
            // e retorna 1 para indicar erro
            return 1;
        }

        n->number = number; // Define o campo 'number' do novo nó com o valor convertido
        n->next = NULL;     // Inicializa o campo 'next' do novo nó como NULL

        // Insere o novo nó no início da lista
        n->next = list; // O campo 'next' do novo nó aponta para o início atual da lista
        list = n;       // Atualiza o ponteiro 'list' para apontar para o novo nó
    }

    // Opcional: Libera a memória alocada para evitar vazamento de memória
    // Este código iteraria sobre a lista e liberaria cada nó
    node *current = list;
    while (current != NULL)
    {
        node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
