/* Programa que conta, de forma recursiva, quantas vezes um caractere aparece em uma string dada pelo usuário */

#include <stdio.h>

int conta(char s[], char c);

int main(void)
{
    char string[45];
    char caractere;
    int resultado;

    printf("Entre com uma string: ");
    scanf("%s", string);
    printf("Entre com um caractere: ");
    scanf(" %c", &caractere);

    resultado = conta(string, caractere);

    printf("O caractere %c aparece %d vezes na string %s\n", caractere, resultado, string);
    return 0;
}

int conta(char s[], char c)
{
    if (s[0] == '\0')
    {
        return 0;
    }

    if (s[0] == c)
    {
        return 1 + conta(&s[1], c);
    }
    else
    {
        return conta(&s[1], c);
    }
}