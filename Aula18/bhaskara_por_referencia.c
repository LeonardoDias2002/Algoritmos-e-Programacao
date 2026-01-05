/* Programa que calcula as raízes de uma função de segundo grau a partir da fórmula de Bhaskara,
com os parâmetros de saĩda passados por referência */

#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b, float c, float *x1, float *x2);

int main(void)
{
    float a, b, c;
    float x1, x2;

    printf("Entre com o valor de a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    bhaskara(a, b, c, &x1, &x2);

    printf("x1 = %.6f\nx2 = %.6f\n", x1, x2);

    return 0;
}

void bhaskara(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    delta = (b * b) - (4 * a * c);

    *x1 = (-b + sqrt(delta)) / 2 * a;
    *x2 = (-b - sqrt(delta)) / 2 * a;
}
