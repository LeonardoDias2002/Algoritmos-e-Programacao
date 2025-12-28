/* Programa que lê 10 valores de um arranjo, imprime esses valores em uma linha, então
lê outro valor v, informa quantas vezes esse valor aparece no arranjo, imprime os valores
maiores que v, ordena o arranjo, e o imprime ordenado */

#include <stdio.h>
#define TAMANHO 10

int main(void)
{
    int arranjo[TAMANHO];
    int valor;
    int contadorValor = 0;
    int menor;

    // Lê arranjo
    printf("Entre os 10 valores inteiros do arranjo: ");

    for (int i = 0; i < TAMANHO; i++)
    {
        scanf("%d", &arranjo[i]);
    }

    // Escreve arranjo

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d  ", arranjo[i]);
    }

    // Lê valor v
    printf("\nEntre um valor inteiro: ");
    scanf("%d", &valor);

    for (int i = 0; i < TAMANHO; i++)
    {
        if (valor == arranjo[i])
        {
            contadorValor++;
        }
    }

    printf("O valor %d aparece %d vez(es) no arranjo\n", valor, contadorValor);

    printf("Os seguintes valores do arranjo sao maiores do que %d:\n", valor);

    for (int i = 0; i < TAMANHO; i++)
    {
        if (arranjo[i] > valor)
        {
            printf("%d ", arranjo[i]);
        }
    }

    int temp;

    for (int i = 0; i < TAMANHO - 1; i++)
    {
        menor = i;
        for (int j = i + 1; j < TAMANHO; j++)
        {
            if (arranjo[j] < arranjo[menor])
            {
                menor = j;
            }
        }

        temp = arranjo[i];
        arranjo[i] = arranjo[menor];
        arranjo[menor] = temp;
    }

    printf("\n\nEscrita do arranjo ordenado: \n");

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", arranjo[i]);
    }

    printf("\n");

    return 0;
}
