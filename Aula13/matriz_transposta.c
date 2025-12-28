/* Programa que lê  uma matriz quadrada (de inteiros)  e obtem a sua transposta. */

#include <stdio.h>
#define ORDEM_MATRIZES 3

int main(void)
{
    int matriz_original[ORDEM_MATRIZES][ORDEM_MATRIZES];
    int matriz_transposta[ORDEM_MATRIZES][ORDEM_MATRIZES];

    for (int i = 0; i < ORDEM_MATRIZES; i++)
    {
        for (int j = 0; j < ORDEM_MATRIZES; j++)
        {
            printf("Entre com o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz_original[i][j]);
        }
    }

    for (int i = 0; i < ORDEM_MATRIZES; i++)
    {
        for (int j = 0; j < ORDEM_MATRIZES; j++)
        {
            matriz_transposta[i][j] = matriz_original[j][i];
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < ORDEM_MATRIZES; i++)
    {
        for (int j = 0; j < ORDEM_MATRIZES; j++)
        {
            printf("%5d", matriz_original[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < ORDEM_MATRIZES; i++)
    {
        for (int j = 0; j < ORDEM_MATRIZES; j++)
        {
            printf("%5d", matriz_transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
