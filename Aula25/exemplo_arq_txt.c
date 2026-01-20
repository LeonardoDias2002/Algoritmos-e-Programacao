/* Salva em um arquivo texto um dado número de inteiros, um em cada linha.
Lê do arquivo texto os valores salvos e armazena num vetor */

#include <stdio.h>
#define NUMEL 5

int main(void)
{
    FILE *arq;
    char nome[16];
    int cont, valor, vetor[NUMEL];

    printf("Nome do arquivo: ");
    scanf("%s", nome);

    arq = fopen(nome, "w");

    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
    }
    else
    {
        printf("Entre com %d valores inteiros: ", NUMEL);
        for (cont = 0; cont < NUMEL; cont++)
        {
            scanf("%d", &valor);
            fprintf(arq, "%d\n", valor);
        }
        fclose(arq);
    }

    arq = fopen(nome, "r");

    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
    }
    else
    {
        for (cont = 0; cont < NUMEL; cont++)
        {
            fscanf(arq, "%d\n", &vetor[cont]);
            printf("vetor[%d] = %d\n", cont, vetor[cont]);
        }
        fclose(arq);
    }

    return 0;
}