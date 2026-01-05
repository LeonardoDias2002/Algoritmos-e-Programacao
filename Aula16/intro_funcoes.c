/* Programa exemplo sobre funções */

#include <stdio.h>

void menu(void);

int main(void)
{
    int opcao;

    menu();
    scanf("%d", &opcao);

    return 0;
}

void menu(void)
{
    printf("Opcoes disponiveis:\n");
    printf("-------------------\n");

    printf("1 - soma de dois valores reais\n");
    printf("2 - se eh divisor do numero\n");
    printf("3 - sequencia de numeros pares\n");
    printf("4 - se numero eh perfeito\n");

    printf("  -> Informe a opcao desejada: ");
}
