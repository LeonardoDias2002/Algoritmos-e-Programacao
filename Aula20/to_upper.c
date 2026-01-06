/* Função que deixa uma string na mesma string com caracteres maiusculos */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toupper_string(char str[]);

int main(void)
{
    char string[40];

    printf("Entre com uma string: ");
    fgets(string, 40, stdin);
    string[strlen(string) - 1] = '\0';
    toupper_string(string);
    puts("String em uppercase: ");
    puts(string);

    return 0;
}

void toupper_string(char str[])
{
    int i, tam;
    tam = strlen(str);

    for (i = 0; i < tam; i++)
    {
        str[i] = toupper(str[i]);
    }
}
