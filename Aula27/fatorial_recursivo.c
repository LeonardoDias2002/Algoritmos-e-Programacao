/* Programa que calcula o fatorial de um número de forma recursiva */

#include <stdio.h>

int fatorial_recursivo(int num);

int main(void)
{
    int num;
    int resultado;

    printf("Entre com o numero para calculo do fatorial: ");
    scanf("%d", &num);
    resultado = fatorial_recursivo(num);
    printf("%d! = %d\n", num, resultado);

    return 0;
}

int fatorial_recursivo(int num)
{
    int fat;

    if (num < 2)
    {
        fat = 1;
    }
    else
    {
        fat = num * fatorial_recursivo(num - 1);
    }

    return fat;
}