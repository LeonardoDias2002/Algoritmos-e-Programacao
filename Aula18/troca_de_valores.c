/* Programa que realiza a troca entre dois valores inteiros, com passagem de parâmetros
da função troca feita por referência */

#include <stdio.h>

void troca(int *a, int *b);

int main(void)
{
    int a, b;

    printf("Entre com o valor de a: ");
    scanf("%d", &a);
    printf("Entre com o valor de b: ");
    scanf("%d", &b);

    troca(&a, &b);

    printf("a = %d\nb = %d\n", a, b);
    return 0;
}

void troca(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
