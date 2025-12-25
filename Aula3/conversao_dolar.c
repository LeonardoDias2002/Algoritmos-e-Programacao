/* Programa que calcula o valor em um valor em reais em dólares. */
#include <stdio.h>

int main(void)
{

    float valorReal, valorDolar;
    float cotacaoDolar;

    printf("Insira o valor em reais: R$ ");
    scanf("%f", &valorReal);
    printf("Insira a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    valorDolar = valorReal / cotacaoDolar;

    printf("Valor em dolar: $%4.2f\n", valorDolar);

    return 0;
}
