/* Programa que verifica quantas interseções existem em um conjunto de retângulos */

#include <stdio.h>
#define FALSE 0
#define TRUE 1
#define MIN_RETANGULOS 2
#define MAX_RETANGULOS 10

int le_nro_ret(void);
int intersect(float a[4], float b[4]);

int main(void)
{
    int nro_ret;
    int somatorioIntersecoes = 0;

    nro_ret = le_nro_ret();

    float matriz_coordenadas[nro_ret][4];

    for (int i = 0; i < nro_ret; i++)
    {
        printf("Retangulo %d: \n", i + 1);
        printf("Digite a coordenada esquerda (x, y): ");
        scanf("%f%f", &matriz_coordenadas[i][0], &matriz_coordenadas[i][1]);
        printf("Digite a coordenada da direita: (x, y): ");
        scanf("%f%f", &matriz_coordenadas[i][2], &matriz_coordenadas[i][3]);
    }

    // Impressao da matriz para teste
    /*
    for (int i = 0; i < nro_ret; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3.2f ", matriz_coordenadas[i][j]);
        }
        printf("\n");
    }

    */

    for (int i = 0; i < nro_ret; i++)
    {
        for (int j = i + 1; j < nro_ret; j++)
        {
            somatorioIntersecoes += intersect(matriz_coordenadas[i], matriz_coordenadas[j]);
        }
    }

    printf("O nro de ocorrencias de interseccao eh %d\n", somatorioIntersecoes);

    return 0;
}

int le_nro_ret(void)
{
    int nro_ret;

    do
    {
        printf("Digite o nro de retangulos: ");
        scanf("%d", &nro_ret);

    } while (nro_ret < 2 || nro_ret > 10);

    return nro_ret;
}

int intersect(float a[4], float b[4])
{
    if (a[0] > b[2] || a[3] < b[1] || a[1] > b[3] || a[2] < b[0])
    {
        return FALSE;
    }
    else
        return TRUE;
}
