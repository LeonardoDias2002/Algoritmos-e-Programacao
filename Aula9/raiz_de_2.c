/* Cálculo da raiz de 2 através de Newthon-Raphson partindo de uma aproximação inicial */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float valorAnterior;
    float tol, erro;
    float valorAtual;

    printf("Insira uma aproximação inicial: ");
    scanf("%f", &valorAnterior);
    printf("Insira uma tolerancia de erro: ");
    scanf("%f", &tol);

    do
    {
        valorAtual = valorAnterior - (pow(valorAnterior, 2) - 2) / (2 * valorAnterior);
        erro = fabs(valorAtual - sqrt(2));
        valorAnterior = valorAtual;

        printf("%.2f\n", valorAtual);

    } while (erro > tol);

    return 0;
}
