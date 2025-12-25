/* Programa que calcula uma aproximação da raiz de 2 através do método de Newton-Raphson, partindo de uma aproximação inicial x_zero */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int numeroIteracoes, contador;
    double x_zero, varTemporaria;
    double resultado;

    printf("Entre o numero de iteracoes: ");
    scanf("%d", &numeroIteracoes);

    printf("Entre a aproximacao inicial de raiz de 2: ");
    scanf("%lf", &x_zero);

    varTemporaria = x_zero;

    for (contador = 1; contador <= numeroIteracoes; contador++)
    {
        resultado = varTemporaria - (pow(varTemporaria, 2) - 2) / (2 * varTemporaria);
        varTemporaria = resultado;
    }

    printf("sqrt(2): %.15f\n", sqrt(2));
    printf("Valor aproximado: %.15f\n", resultado);

    return 0;
}
