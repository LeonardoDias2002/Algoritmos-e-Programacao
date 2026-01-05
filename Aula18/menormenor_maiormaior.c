/* Programa que recebe três inteiros e faça um ajuste tal que, após a execução o menor valor esteja no primeiro
parâmetro e o maior no terceiro */

#include <stdio.h>

void troca(int *a, int *b);
void maiorMaiormenorMenor(int *a, int *b, int *c);

int main(void)
{
    int valor1, valor2, valor3;

    printf("Entre com 3 valores inteiros: ");
    scanf("%d%d%d", &valor1, &valor2, &valor3);

    maiorMaiormenorMenor(&valor1, &valor2, &valor3);

    printf("valor1 = %d\nvalor2 = %d\nvalor3 = %d\n", valor1, valor2, valor3);

    return 0;
}

void troca(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void maiorMaiormenorMenor(int *a, int *b, int *c)
{
    if (*a > *b)
    {
        troca(a, b);
    }

    if (*a > *c)
    {
        troca(a, c);
    }

    if (*b > *c)
    {
        troca(b, c);
    }
}
