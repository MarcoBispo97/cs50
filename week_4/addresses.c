

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", n);
    printf("%p\n", &n); // Pointer é o endereço de uma nova variável
    printf("%p\n", p);
    // *p significa vá para esse endereço e mostre oq está
    // dentro da memória do computador
    // Pointers tendem a ter 8 bits
}