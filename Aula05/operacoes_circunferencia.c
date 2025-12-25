/* Programa que calcula a área ou o perímetro de uma circunferência, baseado na operação escolhida pelo usuário */

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void)
{
    int operacao;
    double raio, area, perimetro;

    printf("Entre com o valor do raio: ");
    scanf("%lf", &raio);

    printf("Entre com a operacao:\n");
    printf("1 - Calculo da area:\n");
    printf("2 - Calculo do perimetro:\n");
    printf("Sua escolha: ");
    scanf("%d", &operacao);

    if (operacao == 1)
    {
        area = PI * pow(raio, 2);
        printf("A area eh: %.2lf\n", area);
    }
    else if (operacao == 2)
    {
        perimetro = 2 * PI * raio;
        printf("O perimetro eh: %2.lf\n", perimetro);
    }
    else
    {
        printf("Codigo de operacao invalido!");
    }

    return 0;
}
