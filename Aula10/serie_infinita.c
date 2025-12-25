/* Programa que calcula somatório de n=0 a infinito de pow(r, n), com erro inferior a 0.0001 */

#include <stdio.h>
#include <math.h>
#define MARGEM_DE_ERRO 0.0001

int main(void)
{
    float r;
    float somatorio = 0;
    float expoente = 0;
    float erro = 1000000;
    float resultadoExato;

    do
    {
        printf("Insira o valor de r (< 1): ");
        scanf("%f", &r);
        if (r >= 1)
        {
            printf("Insira um valor que satisfaca r < 1\n");
        }

    } while (r >= 1);

    resultadoExato = 1 / (1 - r);

    do
    {
        somatorio += pow(r, expoente);
        erro = fabs(resultadoExato - somatorio);
        expoente++;

    } while (erro >= MARGEM_DE_ERRO);

    printf("Resultado exato: %.6f\n", resultadoExato);
    printf("Resultado pela série: %6f\n", somatorio);

    return 0;
}
