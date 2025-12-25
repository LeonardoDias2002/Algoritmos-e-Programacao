/* Programa para somar 2 valores */

#include <stdio.h>

int main(void)
{

    int valor1, valor2;
    int soma;

    printf("Insira o valor 1 para a soma: ");
    scanf("%d", &valor1);
    printf("Insira o valor 2 para a soma: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;

    printf("O valor da soma eh: %d\n", soma);

    return 0;
}
