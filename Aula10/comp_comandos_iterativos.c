/* Programa que soma números pares entre 10 e 100 e mostra equivalências entre for, while e do while */

#include <stdio.h>

int main(void)
{
    int numero = 10, soma = 0;

    // usando while
    while (numero <= 100)
    {
        if (numero % 2 == 0)
        {
            soma += numero;
        }
        numero++;
    }
    printf("While - soma = %d\n", soma);

    numero = 10;
    soma = 0;

    // usando do while
    do
    {
        if (numero % 2 == 0)
        {
            soma += numero;
        }
        numero++;
    } while (numero <= 100);
    printf("Do while - soma = %d\n", soma);

    soma = 0;

    for (numero = 10; numero <= 100; numero++)
    {
        if (numero % 2 == 0)
        {
            soma += numero;
        }
    }
    printf("For soma - soma = %d\n", soma);

    return 0;
}
