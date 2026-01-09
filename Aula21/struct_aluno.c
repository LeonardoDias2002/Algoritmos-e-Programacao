/* Programa que lê as notas de um aluno e as exibe formatada */

#include <stdio.h>
#include <string.h>
#define TAM_MAX_NOME 15

struct struct_aluno
{
    char nome[TAM_MAX_NOME + 1];
    float nota1, nota2, nota3;
};

float calcula_media_notas(float, float, float);
char calcula_conceito(float);

int main(void)
{
    struct struct_aluno aluno;
    float media;
    char conceito;

    printf("Nome: ");
    fgets(aluno.nome, TAM_MAX_NOME + 1, stdin);
    aluno.nome[strlen(aluno.nome) - 1] = '\0';

    printf("Nota 1: ");
    scanf("%f", &aluno.nota1);

    printf("Nota 2: ");
    scanf("%f", &aluno.nota2);

    printf("Nota 3: ");
    scanf("%f", &aluno.nota3);

    media = calcula_media_notas(aluno.nota1, aluno.nota2, aluno.nota3);
    conceito = calcula_conceito(media);

    printf("\nResultado:\n");

    /* EXPLICACAO DA FORMATACAO:
       %-15s : String alinhada a esquerda (-) ocupando 15 espacos
       %6s   : String alinhada a direita ocupando 6 espacos (para os titulos das provas)
       %5s   : Titulo da media
       %4s   : Titulo do conceito
    */
    printf("%-15s %6s %6s %6s %5s %4s\n", "Nome do aluno", "Prova1", "Prova2", "Prova3", "Media", "Conc");

    /* %6.1f : Float ocupando 6 espacos totais, sendo 1 casa decimal
     */
    printf("%-15s %6.2f %6.2f %6.2f %5.2f %4c\n",
           aluno.nome,
           aluno.nota1,
           aluno.nota2,
           aluno.nota3,
           media,
           conceito);

    return 0;
}

float calcula_media_notas(float nota1, float nota2, float nota3)
{
    float media;

    media = (nota1 + nota2 + nota3) / 3;

    return media;
}

char calcula_conceito(float media)
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
