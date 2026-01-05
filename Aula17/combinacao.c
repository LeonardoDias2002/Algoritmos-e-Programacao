/* Programa para calcular a combinação de n elementos p a p */

#include <stdio.h>

int fatorial(int n);
int combinacao(int n, int p);

int main(void)
{
    int n, p;
    int resultado;

    do
    {
        printf("Entre com n e p: ");
        scanf("%d%d", &n, &p);

        if (n < p)
        {
            printf("Valor de n deve ser maior ou igual ao de p.\n");
        }
    } while (n < p);

    resultado = combinacao(n, p);

    printf("Numero de possiveis combinacoes com n elementos, p a p: %d\n", resultado);

    return 0;
}

int fatorial(int n)
{
    int resultado = 1;

    for (n; n > 1; n--)
    {
        resultado *= n;
    }

    return resultado;
}

int combinacao(int n, int p)
{
    int resultado;

    resultado = fatorial(n) / (fatorial(p) * (fatorial(n - p)));

    return resultado;
}
