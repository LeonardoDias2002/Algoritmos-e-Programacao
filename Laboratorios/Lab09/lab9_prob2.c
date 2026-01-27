/* Programa que calcula aproximação de raiz cũbica de um número real */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float raiz_cubica_iterativa(float r, float x0, float t);

int main(void)
{
    float r, x0, t;
    float raiz_cubica_aprox;

    printf("Entre com um numero real: ");
    scanf("%f", &r);
    printf("Entre com uma aproximacao inicial: ");
    scanf("%f", &x0);
    printf("Entre com uma tolerancia (numero estritamente positivo): ");
    scanf("%f", &t);

    if (t <= 0)
    {
        printf("Numero de tolerancia não positivo\n");
        return 0;
    }

    raiz_cubica_aprox = raiz_cubica_iterativa(r, x0, t);

    printf("Aproximaçao da raiz cubica de %f: %.6f\n", r, raiz_cubica_aprox);
}

float raiz_cubica_iterativa(float r, float x0, float t)
{
    float x_n = x0 - (pow(x0, 3) - r) / (3 * pow(x0, 2));

    while (fabs(pow(x_n, 3) - r) >= t)
    {
        x_n = x_n - (pow(x_n, 3) - r) / (3 * pow(x_n, 2));
    }

    return x_n;
}
