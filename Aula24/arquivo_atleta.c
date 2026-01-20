/* Programa que manipula arquivo binário contendo informações sobre atletas */

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[31];
    int idade;
    float altura;
} ATLETA;

void listaArquivo(FILE *arq, char nome[]);

int main(void)
{
    ATLETA a;
    FILE *arq;
    char nomeArquivo[16];
    int op;

    printf("Nome do arquivo: ");
    fgets(nomeArquivo, 15, stdin);
    nomeArquivo[strlen(nomeArquivo) - 1] = '\0';

    arq = fopen(nomeArquivo, "wb+");

    if (arq == NULL)
    {
        printf("Erro na criacao do arquivo!");
    }
    else
    {
        do
        {
            printf("\nNome: ");
            fgets(a.nome, 30, stdin);
            a.nome[strlen(a.nome) - 1] = '\0';
            printf("\nIdade: ");
            scanf("%d", &a.idade);
            printf("\nAltura: ");
            scanf("%f", &a.altura);

            if (fwrite(&a, sizeof(ATLETA), 1, arq) != 1)
            {
                printf("Erro na escrita");
            }

            printf("\n1 - Inserir novo\n2 - Encerrar\n");
            printf("Opcao: ");
            scanf("%d", &op);

            getchar();

        } while (op != 2);
    }

    listaArquivo(arq, nomeArquivo);

    return 0;
}

void listaArquivo(FILE *arq, char nome[])
{
    ATLETA a;

    rewind(arq);

    if (arq == NULL)
    {
        printf("Erro na abertura");
    }
    else
    {
        printf("----- Comeco da Listagem -----");
        while (!feof(arq))
        {
            if (fread(&a, sizeof(ATLETA), 1, arq) == 1)
            {
                printf("\nNome: %s\n", a.nome);
                printf("Idade: %d\n", a.idade);
                printf("Altura: %.2f\n", a.altura);
            }
        }

        printf("----- Fim da Listagem -----\n");
    }

    fclose(arq);
}