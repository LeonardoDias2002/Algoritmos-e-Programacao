/* Programa que calcula a aproximação da função exponencial e^x, dado valor de x e número de termos da série */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    int numeroTermos;
    int contador;
    double resultado = 0;
    double termo;
    double fatorial = 1, contadorFatorial;

    printf("Entre o valor x e o numero de termos da serie\n");
    scanf("%f%d", &x, &numeroTermos);

    for (contador = 0; contador < numeroTermos; contador++)
    {
        contadorFatorial = contador;
        fatorial = 1;
        for (contadorFatorial; contadorFatorial > 1; contadorFatorial--)
        {
            fatorial *= contadorFatorial;
        }
        termo = (pow(x, contador)) / fatorial;
        resultado += termo;
    }

    printf("Valor calculado: %.6lf\n", resultado);
    printf("Valor calculado pela funcao exp: %.6lf\n", exp(x));

    return 0;
}
