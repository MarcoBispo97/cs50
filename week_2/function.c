#include <stdio.h>

float mult_two_reals(float x, float y)
{
    float product = x * y;
    return product;
}

int main(void)
{
    float num1, num2;

    // Solicitar entrada de números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Chamar a função e exibir o resultado
    float resultado = mult_two_reals(num1, num2);
    printf("O produto de %.2f e %.2f é %.2f\n", num1, num2, resultado);

    return 0;
}
