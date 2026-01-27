/* Programa que calcula o valor do aproximado seno de um ângulo dado em graus, dado também a tolerância de erro */

#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main(void)
{
    float anguloGraus, anguloRads;
    float tolErro;
    int contador = 1;
    int contadorTermo = 3;
    int contadorFatorial;
    float resultado = 0;
    float termo;
    float erro;
    int fatorialTermo = 1;

    printf("Entre com o valor do angulo em graus: ");
    scanf("%f", &anguloGraus);
    printf("Entre com o valor do erro: ");
    scanf("%f", &tolErro);

    erro = tolErro + 1;
    anguloRads = anguloGraus * (M_PI / 180.0);

    termo = anguloRads;

    while (fabs(termo) > tolErro)
    {

        resultado += termo;
        contadorFatorial = contadorTermo;
        fatorialTermo = 1;
        for (contadorFatorial; contadorFatorial > 1; contadorFatorial--)
        {
            fatorialTermo *= contadorFatorial;
        }

        termo = pow(-1, contador) * (pow(anguloRads, contadorTermo) / fatorialTermo);
        resultado += termo;

        contador++;
        contadorTermo += 2;
    }

    printf("Valor aproximado do seno: %.6f\n", resultado);

    return 0;
}
