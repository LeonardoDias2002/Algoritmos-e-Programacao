/* Programa que calcula a quantidade de notas dado um valor inteiro em reais */

#include <stdio.h>
#define NOTA100 100
#define NOTA50 50
#define NOTA20 20
#define NOTA10 10
#define NOTA5 5
#define NOTA2 2
#define NOTA1 1

int main(void)
{
    int valor, qtdNotas;
    int qtdNotas100;
    int qtdNotas50;
    int qtdNotas20;
    int qtdNotas10;
    int qtdNotas5;
    int qtdNotas2;
    int qtdNotas1;

    printf("Insira aqui um valor: R$");
    scanf("%d", &valor);

    qtdNotas100 = valor / NOTA100;
    valor = valor % NOTA100;
    qtdNotas50 = valor / NOTA50;
    valor = valor % NOTA50;
    qtdNotas20 = valor / NOTA20;
    valor = valor % NOTA20;
    qtdNotas10 = valor / NOTA10;
    valor = valor % 10;
    qtdNotas5 = valor / NOTA5;
    valor = valor % 5;
    qtdNotas2 = valor / NOTA2;
    valor = valor % 2;
    qtdNotas1 = valor / NOTA1;

    qtdNotas = qtdNotas100 + qtdNotas50 + qtdNotas20 + qtdNotas10 + qtdNotas5 + qtdNotas2 + qtdNotas1;

    printf("Quantidade de notas: %d\n", qtdNotas);
    printf("Notas de 100: %d\n", qtdNotas100);
    printf("Notas de 50: %d\n", qtdNotas50);
    printf("Notas de 20: %d\n", qtdNotas20);
    printf("Notas de 10: %d\n", qtdNotas10);
    printf("Notas de 5: %d\n", qtdNotas5);
    printf("Notas de 2: %d\n", qtdNotas2);
    printf("Notas de 1: %d\n", qtdNotas1);

    return 0;
}
