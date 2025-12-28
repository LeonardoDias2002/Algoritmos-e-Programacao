/* Programa que le uma string com espaço, utilizando fgets */

#include <stdio.h>
#include <string.h>
#define TAM 30

int main(void)
{
    char nome[TAM + 1];

    if (fgets(nome, TAM + 1, stdin) != NULL)
    {
        nome[strlen(nome) - 1] = '\0';
        puts(nome);
        printf("Tamanho da string: %d\n", (int)strlen(nome));
    }
    else
        printf("Problema com fgets!\n");

    return 0;
}
