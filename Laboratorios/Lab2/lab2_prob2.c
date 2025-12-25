/* Programa que, dado o raio de um circulo, calcula a area e perimetro do maior quadrado inscrito nesse circulo */

#include <stdio.h>
#define RAIZ_QUADRADA_DE_2 1.414

int main(void)
{
    float raio, diagonal, lado, area, perimetro;

    printf("Entre com um valor para o raio: ");
    scanf("%f", &raio);

    diagonal = 2 * raio;

    lado = diagonal / RAIZ_QUADRADA_DE_2;

    perimetro = 4 * lado;
    area = lado * lado;

    printf("Perimetro do maior quadrado: %.2f\n", perimetro);
    printf("Area do maior quadrado: %.2f\n", area);

    return 0;
}
