/* Função que devolve o maior elemento de um vetor de inteiros e sua posição */

#include <stdio.h>

int omaior(int vetor[], int num_elementos, int *posicao);

int main(void)
{
    int num_elementos;
    int posicao;
    int maior;

    printf("Insira o número de elementos do vetor: ");
    scanf("%d", &num_elementos);

    int vetor[num_elementos];

    for (int i = 0; i < num_elementos; i++)
    {
        printf("Insira elemento %d: ", i);
        scanf("%d", vetor + i);
    }

    maior = omaior(vetor, num_elementos, &posicao);

    printf("O maior elemento é %d e esta na posição %d.\n", maior, posicao);

    return 0;
}

int omaior(int vetor[], int num_elementos, int *posicao)
{
    int maior;

    maior = *vetor;

    for (int i = 1; i < num_elementos; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            *posicao = i;
        }
    }

    return maior;
}
