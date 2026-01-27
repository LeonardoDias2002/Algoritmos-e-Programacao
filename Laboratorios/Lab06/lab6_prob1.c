/* Lê uma string e então a imprime ela toda em letras maiúsculas e ela ao contrário */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAM_MAX 50

int main(void)
{
    char string[TAM_MAX];
    char string_maiusculo[TAM_MAX];
    char string_invertido[TAM_MAX];
    int contador = 0;

    printf("Entre com uma string: ");

    if (fgets(string, TAM_MAX, stdin) != NULL)
    {
        string[strlen(string) - 1] = '\0';
    }
    else
        ("Problema com fgets\n");

    for (int i = 0; i < strlen(string); i++)
    {
        string_maiusculo[i] = toupper(string[i]);
    }

    for (int i = strlen(string) - 1; i >= 0; i--)
    {
        string_invertido[contador] = string[i];
        contador++;
    }

    printf("String todo maiusculo: %s\n", string_maiusculo);
    printf("String invertido: %s\n", string_invertido);
    return 0;
}
