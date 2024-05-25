#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    int temp = 3;

    printf("a: %i \n", a);
    printf("b: %i \n", b);

    temp = a;
    a = b;
    b = temp;

    printf("a %i \n", a);
    printf("b %i \n", b);
}