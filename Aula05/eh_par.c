/* Programa que lê um número inteiro e informa se ele é par ou ímpar */

#include <stdio.h>

int main(void)
{

    int numero;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &numero);

    if ((numero % 2) == 0)
    {
        printf("O numero inserido eh par.\n");
    }
    else
    {
        printf("O numero inserido eh impar.\n");
    }

    return 0;
}
