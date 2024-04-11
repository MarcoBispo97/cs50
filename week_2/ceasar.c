#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("can not be ciphered\n");
        return 1;
    }
    int key = atoi(argv[1]); // string para int
    if (key < 0)
    {
        printf("please enter a valid number\n");
        return 1;
    }

    string text = get_string("Usage: ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            if (isupper(text[i]))
            {
                char cipher_num_capital = ((text[i] - 65 + key) % 26) + 65;
                printf("%c", cipher_num_capital);
            }

            if (islower(text[i]))
            {
                char cipher_num_small = ((text[i] - 97 + key) % 26) + 97;
                printf("%c", cipher_num_small);
            }
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}