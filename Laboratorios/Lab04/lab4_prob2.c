/* Programa que alcula o arco tangente de um valor real x, para -1 < x < 1, dado o valor de x e o número de termos da soma
da série que usaremos para calcular */

#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    int numTermos;
    float somatorio = 0;
    int termo = 0;
    int i = 1;
    float anguloGraus;

    printf("Entre com o valor de x para calcular arctan(x): ");
    scanf("%f", &x);
    if (fabs(x) >= 1)
    {
        printf("Valor invalido!\n");
        return 0;
    }

    printf("Entre com o numero de termos: ");
    scanf("%d", &numTermos);

    for (int termo = 0; termo < numTermos; termo++)
    {
        somatorio += pow(-1, termo) * (pow(x, i) / i);
        i += 2;
        printf("Iteracao %d = %.6f\n", termo, somatorio);
    }

    anguloGraus = somatorio * (180 / M_PI);

    printf("Angulo em radianos = %.6f\n", somatorio);
    printf("Angulo em graus = %.6f\n", anguloGraus);

    return 0;
}
