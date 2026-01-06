/* Programa que converte temperatura em Fahrenheit para Celsius ou vice-versa */

#include <stdio.h>

int menu(void);
float f_to_c(void);
float c_to_f(void);

int main(void)
{
    int opcao;
    float temperatura;

    do
    {
        opcao = menu();

        if (opcao == 1)
        {
            temperatura = c_to_f();
            printf("Temperatura equivalente em Fahrenheit: %.6f\n", temperatura);
        }

        if (opcao == 2)
        {
            temperatura = f_to_c();
            printf("Temperatura equivalente em Celsius: %.6f\n", temperatura);
        }

    } while (opcao != 3);

    return 0;
}

int menu(void)
{
    int opcao;

    printf("Entre com uma das opcoes: \n");
    printf("1 - Converte Celsius para Fahrenheit\n2 - Converte Fahrenheit para Celsius\n3 - Sair");
    printf("\nOpcao: ");
    scanf("%d", &opcao);

    return opcao;
}

float f_to_c(void)
{
    float temperatura_c, temperatura_f;

    printf("Entre com uma temperatura em Fahrenheit: ");
    scanf("%f", &temperatura_f);
    temperatura_c = 5 * ((temperatura_f - 32) / 9);

    return temperatura_c;
}

float c_to_f(void)
{
    float temperatura_c, temperatura_f;

    printf("Entre com uma temperatura em graus Celsius: ");
    scanf("%f", &temperatura_c);
    temperatura_f = 9 * (temperatura_c / 5) + 32;

    return temperatura_f;
}
