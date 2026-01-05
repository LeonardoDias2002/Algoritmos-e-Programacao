/* Programa que, dado as coordenadas dos vértices de um triângulo, calcula sua área através
da fórmula de Heron */

#include <stdio.h>
#include <math.h>

float calcula_semiperimetro(float x1, float x2, float x3, float y1, float y2, float y3, float *distancia1_2, float *distancia1_3, float *distancia2_3);
float formula_de_heron(float lado1, float lado2, float lado3, float semiperimetro);

int main(void)
{
    float x1, x2, x3, y1, y2, y3;
    float area;
    float semiperimetro;
    float distancia1_2, distancia1_3, distancia2_3;

    printf("Insira as coordenadas do 1o vertice: ");
    scanf("%f%f", &x1, &y1);
    printf("Insira as coordenadas do 2o vertice: ");
    scanf("%f%f", &x2, &y2);
    printf("Insira as coordenadas do 3o vertice: ");
    scanf("%f%f", &x3, &y3);

    semiperimetro = calcula_semiperimetro(x1, x2, x3, y1, y2, y3, &distancia1_2, &distancia1_3, &distancia2_3);

    area = formula_de_heron(distancia1_2, distancia1_3, distancia2_3, semiperimetro);

    printf("Area do triangulo: %.6f\n", area);

    return 0;
}

float calcula_semiperimetro(float x1, float x2, float x3, float y1, float y2, float y3, float *distancia1_2, float *distancia1_3, float *distancia2_3)
{
    float semiperimetro;

    *distancia1_2 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    *distancia1_3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    *distancia2_3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    semiperimetro = (*distancia1_2 + *distancia1_3 + *distancia2_3) / 2;

    return semiperimetro;
}

float formula_de_heron(float lado1, float lado2, float lado3, float semiperimetro)
{
    float area;

    area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

    return area;
}
