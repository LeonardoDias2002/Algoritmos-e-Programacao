/* Lê uma quantidade arbitrária de valores reais menor que o limite máximo definido, até ler um número negativo,
então cálcula a média dos quadrados e das raízes quadradas dos números lidos (exluindo o negativo) e informa
quantos valores se encontram entre essas duas médias */

#include <stdio.h>
#include <math.h>
#define MAX_VALORES 10

int main(void)
{
    float valores[MAX_VALORES] = {0};
    int contadorEntreMedias = 0;
    int i = 0;
    int qtdValores;
    float somaQuadrados = 0, somaRaizesQuadradas = 0;
    float mediaQuadrados, mediaRaizesQuadradas;

    printf("Entre os valores: ");

    scanf("%f", &valores[i]);

    while (valores[i] >= 0 && i < MAX_VALORES - 1)
    {
        i++;
        scanf("%f", &valores[i]);
    }

    if (valores[i] >= 0)
    {
        qtdValores = i + 1;
    }
    else
        qtdValores = i;

    for (i = 0; i < qtdValores; i++)
    {
        somaQuadrados += pow(valores[i], 2);
        somaRaizesQuadradas += sqrt(valores[i]);
    }

    mediaQuadrados = somaQuadrados / qtdValores;
    mediaRaizesQuadradas = somaRaizesQuadradas / qtdValores;

    printf("Media dos quadrados: %.6f\n", mediaQuadrados);
    printf("Media das raizes quadradas: %.6f\n", mediaRaizesQuadradas);

    for (i = 0; i < qtdValores; i++)
    {
        if (valores[i] >= mediaRaizesQuadradas && valores[i] <= mediaQuadrados)
        {
            contadorEntreMedias++;
        }
    }

    printf("Quantidade de valores entre as duas medias: %d\n", contadorEntreMedias);

    return 0;
}
