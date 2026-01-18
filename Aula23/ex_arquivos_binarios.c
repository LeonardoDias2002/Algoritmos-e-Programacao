/*Programa que lê 5 números inteiros e os grava em um árquivo binário.
 Depois, ler os valores do arquivo e armazenar em um vetor */
#include <stdio.h>
#include <string.h>

#define NUM_ELEMENTOS 5

int main(void)
{
    FILE *arq;
    char nome[16];
    int vetor[NUM_ELEMENTOS];
    int cont, valor;

    printf("Nome do arquivo: ");
    scanf("%s", nome);

    arq = fopen(nome, "wb");

    if (arq == NULL)
    {
        printf("Erro na abertura\n");
    }
    else
    {
        printf("Entre %d valores inteiros: ", NUM_ELEMENTOS);

        for (cont = 0; cont < NUM_ELEMENTOS; cont++)
        {
            scanf("%d", &valor);
            if (fwrite(&valor, sizeof(valor), 1, arq) != 1)
            {
                printf("Erro na escrita\n");
            }
        }

        fclose(arq);
    }

    arq = fopen(nome, "rb");

    if (arq == NULL)
    {
        printf("Erro na abertura");
    }
    else
    {
        for (cont = 0; cont < NUM_ELEMENTOS; cont++)
        {
            if (fread(&vetor[cont], sizeof(valor), 1, arq) == 1)
                printf("vetor[%d] = %d\n", cont, vetor[cont]);
            else
                printf("Erro na leitura\n");
        }
        fclose(arq);
    }

    return 0;
}