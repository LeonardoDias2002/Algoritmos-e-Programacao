/* Lê um valor inteiro no intervalo [20, 39], então imprime a soma dos algarismos do valor e imprime o valor por extenso */

#include <stdio.h>

int main(void)
{
    int valor, dezena, unidade, somaAlgarismos;

    printf("Entre com o valor de N: ");
    scanf("%d", &valor);

    if (valor < 20 || valor > 39)
    {
        printf("Valor fora do intervalo!\n");
        return 0;
    }

    dezena = valor / 10;
    unidade = valor % 10;

    switch (dezena)
    {
    case 2:
        printf("Vinte");
        break;
    case 3:
        printf("Trinta");
        break;
    }

    switch (unidade)
    {
    case 0:
        break;

    case 1:
        printf(" e um");
        break;

    case 2:
        printf(" e dois");
        break;

    case 3:
        printf(" e tres");
        break;

    case 4:
        printf(" e quatro");
        break;

    case 5:
        printf(" e cinco");
        break;

    case 6:
        printf(" e seis");
        break;

    case 7:
        printf(" e sete");
        break;

    case 8:
        printf(" e oito");
        break;

    case 9:
        printf(" e nove");
        break;
    }

    somaAlgarismos = dezena + unidade;

    printf("\nSoma dos algarismos: %d\n", somaAlgarismos);

    return 0;
}
