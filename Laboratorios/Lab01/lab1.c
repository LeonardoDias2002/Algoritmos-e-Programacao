/* Programa que lê 3 números inteiros e fornece a soma e o produto dos 3 números */
#include <stdio.h>
#define ANO_ATUAL 2025

int main(void)
{
    float numero1, numero2, numero3;
    float soma, produto;
    int idade, anoDeNascimento;

    printf("Entre com o 1o valor: ");
    scanf("%f", &numero1);

    printf("Entre com o 2o valor: ");
    scanf("%f", &numero2);

    printf("Entre com o 3o valor: ");
    scanf("%f", &numero3);

    soma = numero1 + numero2 + numero3;
    produto = numero1 * numero2 * numero3;

    printf("Soma: %.2f\n", soma);
    printf("Produto: %.2f\n", produto);

    printf("Informe seu ano de nascimento: ");
    scanf("%d", &anoDeNascimento);

    idade = ANO_ATUAL - anoDeNascimento;

    printf("Voce tem %d anos\n", idade);

    return 0;
}
