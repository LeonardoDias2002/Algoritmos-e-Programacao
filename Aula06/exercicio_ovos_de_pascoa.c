/* Programa que calcula valor total a pagar por ovos de páscoa, tendo numero maximo de ovos que um cliente pode comprar */

#include <stdio.h>
#include <ctype.h>
#define MAX_A 50
#define MAX_B 30
#define MAX_C 20
#define VALOR_A 12.00
#define VALOR_B 21.30
#define VALOR_C 15.50

int main(void)
{
    char tipoOvo;
    int numeroUnidades;
    float valorTotal;

    printf("Insira o tipo de ovo que desejas comprar: ");
    scanf("%c", &tipoOvo);

    printf("Insira quantas unidades desejas comprar: ");
    scanf("%d", &numeroUnidades);

    tipoOvo = toupper(tipoOvo);

    switch (tipoOvo)
    {
    case 'A':
        if (numeroUnidades <= MAX_A)
        {
            valorTotal = numeroUnidades * VALOR_A;
        }
        else
        {
            printf("Numero de unidades excede o limite!\n");
            return 0;
        }
        break;

    case 'B':
        if (numeroUnidades <= MAX_B)
        {
            valorTotal = numeroUnidades * VALOR_B;
        }
        else
        {
            printf("Numero de unidades excede o limite!\n");
            return 0;
        }
        break;

    case 'C':
        if (numeroUnidades <= MAX_C)
        {
            valorTotal = numeroUnidades * VALOR_C;
        }
        else
        {
            printf("Numero de unidades excede o limite!\n");
            return 0;
        }
        break;

    default:
        printf("Codigo invalido!\n");
        return 0;
    }

    printf("Valor total: R$%.2f\n", valorTotal);

    return 0;
}
