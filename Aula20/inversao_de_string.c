/* Função que recebe uma string e a devolve invertida e função que determina de string é palindromo */

#include <stdio.h>
#include <string.h>
#define SIZE_TEXTO 30

void inverte_string(char *, char *);
void palindromo(char *);

int main(void)
{
    char c1[SIZE_TEXTO], c2[SIZE_TEXTO];

    fgets(c1, SIZE_TEXTO, stdin);
    c1[strlen(c1) - 1] = '\0';
    inverte_string(c2, c1);
    puts("String invertido: ");
    puts(c2);
    palindromo(c1);

    return 0;
}

void inverte_string(char *str1, char *str2)
{
    int i, tam;
    tam = strlen(str2);

    for (i = 0; i < tam; i++)
    {
        str1[tam - i - 1] = str2[i];
    }

    str1[tam] = '\0';
}

void palindromo(char *str)
{
    int i, tam;
    int palindromo = 1;
    tam = strlen(str);

    for (i = 0; i < tam; i++)
    {
        if (str[i] != str[tam - i - 1])
        {
            palindromo = 0;
        }
    }

    if (palindromo == 1)
    {
        printf("Eh palindromo!\n");
    }
    else
        printf("Nao eh palindromo!\n");
}
