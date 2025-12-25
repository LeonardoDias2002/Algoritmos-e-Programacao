/* Programa que calcula o peso ideal de uma pessoa, baseado em seu gênero e altura */

#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char genero;
    float altura, pesoIdeal;

    printf("Entre com seu genero (M/F): ");
    scanf("%c", &genero);

    printf("Entre com sua altura (em metros): ");
    scanf("%f", &altura);

    genero = toupper(genero);

    if (genero == 'F')
    {
        pesoIdeal = (altura * 62.1) - 44.7;
    }

    if (genero == 'M')
    {
        pesoIdeal = (altura * 72.7) - 58;
    }

    if (genero != 'M' && genero != 'F')
    {
        printf("Genero invalido!");
        return 0;
    }

    printf("Seu peso ideal é %.2fkg\n", pesoIdeal);

    return 0;
}
