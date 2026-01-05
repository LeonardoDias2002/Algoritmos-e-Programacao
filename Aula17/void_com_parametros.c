/* Programa para testar uma função que imprime na tela n vezes um caractere c qualquer, digitado pelo usuário */

#include <stdio.h>

void escreve_caractere(int n, char c);

int main(void)
{
    int numeroDeVezes;
    char caractere;

    printf("Insira o caractere que deseja imprimir: ");
    scanf(" %c", &caractere);

    printf("Insira o nro de vezes que deseja imprimir %c: ", caractere);
    scanf("%d", &numeroDeVezes);

    escreve_caractere(numeroDeVezes, caractere);

    return 0;
}

void escreve_caractere(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", c);
    }
    printf("\n");
}
