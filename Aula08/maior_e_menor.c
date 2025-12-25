/* Programa que lê 5 valores inteiros, e então imprime o menor e o maior valor lido */

#include <stdio.h>
#define QUANT_VALORES 5

int main(void)
{
    int valor;
    int maior, menor;
    int contador;

    contador = 1;

    printf("Entre com o numero %d: ", contador);
    scanf("%d", &valor);

    maior = valor;
    menor = valor;

    for (contador = 2; contador <= QUANT_VALORES; contador++)
    {
        printf("Entre com o numero %d: ", contador);
        scanf("%d", &valor);

        if (valor > maior)
        {
            maior = valor;
        }
        if (valor < menor)
        {
            menor = valor;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
