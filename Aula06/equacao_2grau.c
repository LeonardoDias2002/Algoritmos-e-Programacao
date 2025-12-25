/* Programa que calcula as raizes de uma equação de segundo grau */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c;
    float discriminante;
    float raiz1, raiz2;

    printf("Entre com o valor de a: ");
    scanf("%f", &a);

    if (a == 0)
    {
        printf("Nao eh equacao de segundo grau!\n");
        return 0;
    }

    printf("Entre com o valor de b: ");
    scanf("%f", &b);

    printf("Entre com o valor de c: ");
    scanf("%f", &c);

    discriminante = pow(b, 2) - (4 * a * c);

    if (discriminante < 0)
    {
        printf("Raizes nao sao reais (discriminante menor que zero)!\n");
    }
    else if (discriminante == 0)
    {
        raiz1 = -b / (2 * a);
        printf("Raiz unica: %.2f\n", raiz1);
    }
    else
    {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Raizes: %.2f, %.2f\n", raiz1, raiz2);
    }

    return 0;
}
