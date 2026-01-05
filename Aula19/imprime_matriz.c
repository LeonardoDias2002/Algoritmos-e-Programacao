/* FUnção que recebe uma matriz e imprime os elementos da matriz na tela */

#include <stdio.h>
#define NCOL 10
#define NLIN 5

void imprime_matriz(int mat[][NCOL]);

int main(void)
{
    int matriz[NLIN][NCOL];
    int i, j;

    for (i = 0; i < NLIN; i++)
    {
        for (j = 0; j < NCOL; j++)
        {
            matriz[i][j] = i + j - (2 * i) + (j % 7);
        }
    }

    imprime_matriz(matriz);

    return 0;
}

void imprime_matriz(int mat[][NCOL])
{
    int i, j;

    for (i = 0; i < NLIN; i++)
    {
        for (j = 0; j < NCOL; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
}
