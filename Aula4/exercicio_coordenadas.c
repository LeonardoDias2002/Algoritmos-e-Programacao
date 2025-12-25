/* Programa que lê o valor das coordenadas de um ponto e informa em qual quadrante esse ponto está, ou se está na origem
ou nos eixos */

#include <stdio.h>

int main(void)
{

    float coordenadaX, coordenadaY;

    printf("Informe a coordenada x do ponto: ");
    scanf("%f", &coordenadaX);
    printf("Informe a coordenada y do ponto: ");
    scanf("%f", &coordenadaY);

    if (coordenadaX == 0 && coordenadaY == 0)
    {
        printf("O ponto esta na origem! (0, 0)\n");
    }

    if (coordenadaX == 0 && coordenadaY != 0)
    {
        printf("O ponto esta sobre o eixo Y!\n");
    }

    if (coordenadaX != 0 && coordenadaY == 0)
    {
        printf("O ponto esta sobre o eixo X!\n");
    }

    if (coordenadaX > 0 && coordenadaY > 0)
    {
        printf("O ponto esta no primeiro quadrante!\n");
    }

    if (coordenadaX < 0 && coordenadaY > 0)
    {
        printf("O ponto esta no segundo quadrante!\n");
    }

    if (coordenadaX < 0 && coordenadaY < 0)
    {
        printf("O ponto esta no terceiro quadrante!\n");
    }

    if (coordenadaX > 0 && coordenadaY < 0)
    {
        printf("O ponto esta no quarto quadrante!\n");
    }

    return 0;
}
