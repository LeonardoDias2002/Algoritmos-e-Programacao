/* Programa que lê 200 posições de um arranjo e então procura e informa o maior valor desse
arranjo, bem como a sua posição dentro do arranjo */

#include <stdio.h>
#define TAMANHO 200

int main(void)
{
    float valores[TAMANHO];
    float maior = 0;
    int indiceMaior = 0;

    printf("Digite %d valores: ", TAMANHO);

    for (int i = 0; i < TAMANHO; i++)
    {
        scanf("%f", &valores[i]);
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        if (valores[i] > maior)
        {
            maior = valores[i];
            indiceMaior = i;
        }
    }

    printf("Maior valor: %.2f\n", maior);
    printf("Posicao do maior valor: %d\n", indiceMaior);

    return 0;
}
