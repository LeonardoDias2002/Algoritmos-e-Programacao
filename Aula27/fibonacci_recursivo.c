/* Programa que calcula o enésimo número de Fibonacci de forma recursiva */

#include <stdio.h>

int fibonacci_recursivo(int num);

int main(void)
{
    int num;
    int resultado;
    printf("Entre com o numero de Fibonacci que deseja calcular: ");
    scanf("%d", &num);

    resultado = fibonacci_recursivo(num);

    printf("fib(%d) = %d\n", num, resultado);

    return 0;
}

int fibonacci_recursivo(int num)
{
    int fib;

    if (num <= 2)
    {
        fib = 1;
    }
    else
    {
        fib = fibonacci_recursivo(num - 1) + fibonacci_recursivo(num - 2);
    }

    return fib;
}