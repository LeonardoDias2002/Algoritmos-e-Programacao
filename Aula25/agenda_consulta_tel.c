/* Programa para buscar dados em uma agenda salva em arquivo de texto */

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *arq;
    char nome[80], procurado[80];
    int prefixo, num, encontrado = 0;

    arq = fopen("Agenda.txt", "r");

    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
    }
    else
    {
        printf("Entre com nome para consulta: ");
        scanf("%s", procurado);
        while (!feof(arq) && encontrado == 0)
        {
            fscanf(arq, "%s %d %d\n", nome, &prefixo, &num);
            if (!strcmp(nome, procurado))
            {
                printf("Nome: %s\nPrefixo: %d\nNumero: %d\n", nome, prefixo, num);
                encontrado = 1;
            }
            if (!encontrado)
            {
                printf("Nome nao consta na agenda!\n");
            }
            fclose(arq);
        }
    }

    return 0;
}