/* Programa para substituir um determinado caractere em
um arquivo texto existente por outro (ambos obtidos por leitura
via teclado) */

#include <stdio.h>

int main(void)
{
    FILE *arq;
    char antigo, novo, temp, caract;
    int alt = 0;

    arq = fopen("texto_original.txt", "r+");

    if (arq == NULL)
    {
        printf("Erro na abertura\n");
        return -1;
    }

    printf("Caractere a procurar: ");
    scanf(" %c", &antigo);

    printf("Substituir por: ");
    scanf(" %c", &novo);

    while (!feof(arq))
    {
        temp = getc(arq);

        if (temp == antigo)
        {
            alt++;
            fseek(arq, -sizeof(char), SEEK_CUR);
            putc(novo, arq);
        }
    }

    fclose(arq);

    printf("\nNumero de caracteres alterados: %d\n", alt);

    return 0;
}