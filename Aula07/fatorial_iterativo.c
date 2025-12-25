/* Programa que calcula o fatorial de um número de entrada */

#include <stdio.h>

int main(void)
{
    int numero, resultado;
    int i;

    resultado = 1;

    printf("Entre um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Numero informado eh negativo: fatorial nao definido\n");
        return 0;
    }

    for (i = numero; i > 1; i--)
    {
        resultado *= i;
    }

    printf("Fatorial de %d eh %d\n", numero, resultado);

    return 0;
}
