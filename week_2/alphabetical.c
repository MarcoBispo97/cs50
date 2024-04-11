#include "cs50.h"
#include <stdio.h>
#include <string.h>

// Write a program to check if an 
// array of characters is in alphabetical order
// Assume the characters are all uppercase

int main(void)
{
    string phrase = get_string("Enter a phrase: ");
    int length = strlen(phrase);
    for (int i = 0; i < length -1; i++)
    {
        printf("%c\n", phrase[i]);
        printf("%i\n", phrase[i]);

        // Check the caracters ar NOT alphanetical
        if (phrase[i] > phrase[i + 1])
        {
            printf("Not in alphabetical order: \n");
            return 0;
        }
    }
    printf("Alphabetical order !\n");
    return 0;
}