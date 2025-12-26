/* Programa que lê do usuário dois arranjos, um somente com números pares e um somente com números ímpares e então
monta um terceiro arranjo alternando os elementos dos dois primeiros (começando por um valor ímpar) e o imprime */

#include <stdio.h>
#define MAX 10

int main(void)
{
    int pares[MAX], impares[MAX], misturado[2 * MAX];

    printf("Entre com 10 valores pares: ");

    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &pares[i]);
    }

    printf("Entre com 10 valores impares: ");

    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &impares[i]);
    }

    for (int i = 0; i < 2 * MAX; i += 2)
    {
        misturado[i] = impares[i / 2];
        misturado[i + 1] = pares[i / 2];
    }

    for (int i = 0; i < MAX * 2; i++)
    {
        printf("misturado[%d]: %d\n", i, misturado[i]);
    }

    return 0;
}
