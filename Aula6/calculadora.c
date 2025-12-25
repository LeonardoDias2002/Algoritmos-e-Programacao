/* Programa que simula uma calculadora que executa soma, subtração, multiplicação e divisão */

#include <stdio.h>

int main(void)
{
    char operacao;
    float valor1, valor2;
    float resultado;

    printf("********************************\n");
    printf("Insira uma operacao (+, -, *, /): ");
    scanf("%c", &operacao);
    printf("********************************\n");

    printf("Insira o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%f", &valor2);

    switch (operacao)
    {
    case '+':
        resultado = valor1 + valor2;
        break;
    case '-':
        resultado = valor1 - valor2;
        break;
    case '*':
        resultado = valor1 * valor2;
        break;
    case '/':
        if (valor2 != 0)
        {
            resultado = valor1 / valor2;
        }
        else
        {
            printf("Erro! Divisao por zero!\n");
            return 0;
        }
        break;
    default:
        printf("Operador invalido!\n");
    }

    printf("Resultado: %4.2f\n", resultado);

    return 0;
}
