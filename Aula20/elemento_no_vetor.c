/* Programa que lê um vetor de inteiros, ordena-o e então lê um inteiro e verifica se está no vetor */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAXIMO 20

void bubble_sort(int *, int);
void le_vetor(int *, int);
void imprime_vetor(int *, int);
int busca_elemento(int *, int, int);

int main(void)
{
    int vetor[TAMANHO_MAXIMO];
    int tamanho, elementoProcurado, posicao;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tamanho);
    le_vetor(vetor, tamanho);

    bubble_sort(vetor, tamanho);
    imprime_vetor(vetor, tamanho);

    printf("\nEntre com o numero que quer procurar: ");
    scanf("%d", &elementoProcurado);

    posicao = busca_elemento(vetor, tamanho, elementoProcurado);

    if (posicao == -1)
    {
        printf("Elemento nao esta no vetor!\n");
    }
    else
        printf("Elemento na posicao %d (no vetor ordenado)!\n", posicao);

    return 0;
}

void bubble_sort(int *vetor, int tamanho)
{
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - i - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void le_vetor(int *vetor, int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("Entre com o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void imprime_vetor(int *vetor, int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int busca_elemento(int *vetor, int tamanho, int elemento)
{
    int limiteInf, limiteSup, meio;
    limiteInf = 0;
    limiteSup = tamanho - 1;

    while (limiteInf <= limiteSup)
    {
        meio = (limiteInf + limiteSup) / 2;

        if (vetor[meio] == elemento)
        {
            return meio;
        }

        if (vetor[meio] < elemento)
        {
            limiteInf = meio + 1;
        }
        else
            limiteSup = meio - 1;
    }

    return -1;
}
