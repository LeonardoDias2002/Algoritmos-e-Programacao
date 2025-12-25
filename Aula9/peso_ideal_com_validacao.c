/* Calcula o peso ideal de uma pessoa de acordo com sua altura e gênero, fazendo consistência da entrada */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char genero;
    float altura;
    float pesoIdeal;

    printf("Insira sua altura (em metros): ");
    scanf("%f", &altura);

    do
    {
        printf("Insira seu genero (M/F): ");
        scanf(" %c", &genero);
        genero = toupper(genero);
    } while (genero != 'M' && genero != 'F');

    if (genero == 'M')
    {
        pesoIdeal = (altura * 72.7) - 58;
    }
    else
    {
        pesoIdeal = (altura * 62.1) - 44.7;
    }

    printf("Seu peso ideal eh %.2fkg\n", pesoIdeal);

    return 0;
}
