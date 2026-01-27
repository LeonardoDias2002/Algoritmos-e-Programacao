/* Gera uma matriz com números inteiros aleatórios no intervalo [2, 40] e a imprime. Depois
monta dois arranjos, um com os maiores elementos de cada coluna e um com os maiores elementos
de cada linha */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO_MATRIZ 4
#define MIN 2
#define MAX 40

int main(void)
{
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    int menorElementoLinha, maiorElementoColuna;
    int arrayMenoresLinha[TAMANHO_MATRIZ], arrayMaioresColuna[TAMANHO_MATRIZ];

    srand(time(NULL));

    for (int i = 0; i < TAMANHO_MATRIZ; i++)
    {
        for (int j = 0; j < TAMANHO_MATRIZ; j++)
        {
            matriz[i][j] = MIN + (rand() % (MAX - MIN + 1));
        }
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++)
    {
        for (int j = 0; j < TAMANHO_MATRIZ; j++)
        {
            printf("%5d ", matriz[i][j]);
        }

        printf("\n");
    }

    maiorElementoColuna = matriz[0][0];
    menorElementoLinha = matriz[0][0];

    for (int j = 0; j < TAMANHO_MATRIZ; j++)
    {
        for (int i = 0; i < TAMANHO_MATRIZ; i++)
        {
            if (matriz[i][j] >= maiorElementoColuna)
            {
                maiorElementoColuna = matriz[i][j];
            }
        }

        arrayMaioresColuna[j] = maiorElementoColuna;
        maiorElementoColuna = MIN;
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++)
    {
        for (int j = 0; j < TAMANHO_MATRIZ; j++)
        {
            if (matriz[i][j] <= menorElementoLinha)
            {
                menorElementoLinha = matriz[i][j];
            }
        }

        arrayMenoresLinha[i] = menorElementoLinha;
        menorElementoLinha = MAX;
    }

    printf("Arranjo de maiores elementos das colunas: \n");
    for (int j = 0; j < TAMANHO_MATRIZ; j++)
    {
        printf("%d ", arrayMaioresColuna[j]);
    }

    printf("\nArranjo menores elementos linhas: \n");
    for (int i = 0; i < TAMANHO_MATRIZ; i++)
    {
        printf("%d ", arrayMenoresLinha[i]);
    }

    printf("\n");

    return 0;
}
