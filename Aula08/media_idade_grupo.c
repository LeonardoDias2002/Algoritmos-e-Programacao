/* Programa que calcula média de idade de um grupo de pessoas, além de dizer quantos menores de idade existem no grupo*/

#include <stdio.h>
#define NUMERO_PESSOAS 5

int main(void)
{
    int idade;
    int idadeAcumulada = 0;
    int numMenores;
    float media;

    for (int contador = 1; contador <= NUMERO_PESSOAS; contador++)
    {
        printf("Entre com a idade da pessoa %d: ", contador);
        scanf("%d", &idade);

        if (idade < 18)
        {
            numMenores++;
        }

        idadeAcumulada += idade;
    }

    media = (float)idadeAcumulada / NUMERO_PESSOAS;

    printf("Media de idade: %.2f\n", media);
    printf("Numero de menores de idade: %d\n", numMenores);

    return 0;
}
