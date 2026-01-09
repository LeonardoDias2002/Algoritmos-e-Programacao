/* Leitura e escrita de arranjo de estrutura, usando funções, com passagem por elemento:
lê e imprime vetor de estrutura */

#include <stdio.h>
#include <string.h>
#define NRO_ALUNOS 5
#define NRO_NOTAS 3
#define TAMANHO_NOME 15

typedef struct struct_aluno
{
    char nome[TAMANHO_NOME + 1];
    float notas[NRO_NOTAS];
    float media;
    float conceito;
} ALUNO;

void le_alunos(ALUNO[], int);
void imprime_alunos(ALUNO[], int);

int main(void)
{
    int i, num_alunos;
    ALUNO alunos[NRO_ALUNOS];

    printf("Entre o numero de alunos da turma: ");
    scanf("%d", &num_alunos);

    le_alunos(alunos, num_alunos);
    printf("\n\nResultado:\n");

    // cabeçalho
    printf("\n%-15s   prova1 prova2 prova3 media\n", "Nome do aluno");
    imprime_alunos(alunos, num_alunos);

    return 0;
}

void le_alunos(ALUNO aluno[], int num_alunos)
{
    for (int i = 0; i < num_alunos; i++)
    {
        getchar();
        printf("Nome do aluno: ");
        fgets(aluno[i].nome, TAMANHO_NOME + 1, stdin);
        aluno[i].nome[strlen(aluno[i].nome) - 1] = '\0';
        aluno[i].media = 0;

        for (int j = 0; j < NRO_NOTAS; j++)
        {
            printf("Entre com a nota %d: ", j + 1);
            scanf("%f", &aluno[i].notas[j]);
            aluno[i].media += aluno[i].notas[j];
        }

        aluno[i].media = aluno[i].media / NRO_NOTAS;
    }
}

void imprime_alunos(ALUNO aluno[], int num_alunos)
{
    for (int i = 0; i < num_alunos; i++)
    {
        printf("%-15s   ", aluno[i].nome);

        for (int j = 0; j < NRO_NOTAS; j++)
        {
            printf("%6.2f ", aluno[i].notas[j]);
        }

        printf("%6.2f\n", aluno[i].media);
    }
}
