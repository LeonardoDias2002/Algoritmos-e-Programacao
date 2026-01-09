/* Programa que lê dados de alunos (nome e notas), calcula e informa média e conceito */

#include <stdio.h>
#include <string.h>

#define NR_ALUNOS 3
#define NR_NOTAS 3
#define TAM_NOME 15

struct struct_aluno
{
    char nome[TAM_NOME + 1];
    float notas[NRO_NOTAS];
    float media;
    char conceito;
};

char conceito(float media);
float nota_valida(void);
struct struct_aluno le_dados_aluno(void);
void le_dados_aluno_referencia(struct struct_aluno *);
void imprime_dados_aluno(struct struct_aluno);

int main(void)
{
    // vetor com elementos do tipo struct_aluno
    struct struct_aluno aluno[NR_ALUNOS];
    int indice_aluno;

    // leitura dos alunos
    for (indice_aluno = 0; indice_aluno < NR_ALUNOS; indice_aluno++)
    {
        le_dados_aluno_referencia(&aluno[indice_aluno]);
    }

    // impressão dos alunos
    for (indice_aluno = 0; indice_aluno < NR_ALUNOS; indice_aluno++)
    {
        imprime_dados_aluno(aluno[indice_aluno]);
    }

    return 0;
}

char conceito(float media)
{
    char conceito;

    if (media < 6)
    {
        conceito = 'D';
    }

    if (media >= 6 && media < 8)
    {
        conceito = 'C';
    }

    if (media >= 8 && media < 9)
    {
        conceito = 'B';
    }

    if (media >= 9)
    {
        conceito = 'A';
    }

    return conceito;
}

float nota_valida(void)
{
    float nota;
    do
    {
        scanf("%f", &nota);

        if (nota < 0 || nota > 10)
        {
            printf("Nota invalida, insira novamente: ");
        }
    } while (nota < 0 || nota > 10);

    return nota;
}

struct struct_aluno le_dados_aluno(void)
{
    struct struct_aluno aluno;
    float notasSomatorio = 0;

    printf("Entre com o nome do aluno: ");
    fgets(aluno.nome, TAM_NOME + 1, stdin);
    aluno.nome[strlen(aluno.nome) - 1] = '\0';

    for (int i = 0; i < NRO_NOTAS; i++)
    {
        printf("Entre com a nota %d de %s: ", i + 1, aluno.nome);
        aluno.notas[i] = nota_valida();
    }

    getchar();

    for (int i = 0; i < NRO_NOTAS; i++)
    {
        notasSomatorio += aluno.notas[i];
    }

    aluno.media = notasSomatorio / NRO_NOTAS;

    aluno.conceito = conceito(aluno.media);

    return aluno;
}

// Exercício para fazer passagem por referencia
void le_dados_aluno_referencia(struct struct_aluno *aluno)
{
    float notasSomatorio = 0;

    printf("Entre com o nome do aluno: ");
    fgets((*aluno).nome, TAM_NOME + 1, stdin);
    (*aluno).nome[strlen((*aluno).nome) - 1] = '\0';

    for (int i = 0; i < NRO_NOTAS; i++)
    {
        printf("Entre com a nota %d de %s: ", i + 1, (*aluno).nome);
        (*aluno).notas[i] = nota_valida();
    }

    getchar();

    for (int i = 0; i < NRO_NOTAS; i++)
    {
        notasSomatorio += (*aluno).notas[i];
    }

    (*aluno).media = notasSomatorio / NRO_NOTAS;

    (*aluno).conceito = conceito((*aluno).media);
}

void imprime_dados_aluno(struct struct_aluno aluno)
{
    printf("Nome: %s\n", aluno.nome);
    for (int i = 0; i < NRO_NOTAS; i++)
    {
        printf("Nota %d: %.2f\n", i, aluno.notas[i]);
    }
    printf("Media: %.2f\n", aluno.media);
    printf("Conceito: %c\n", aluno.conceito);
    printf("\n");
}
