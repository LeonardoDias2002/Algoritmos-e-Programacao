/* Programa que diz se cada aluno foi aprovado, numa turma com 5 alunos */

#include <stdio.h>

int main(void)
{
    float media;
    int numeroAluno;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Insira a media do aluno: ");
        scanf("%f", &media);
        printf("Insira o numero do aluno: ");
        scanf("%d", &numeroAluno);

        if (media >= 6)
        {
            printf("Aluno %d aprovado!\n", numeroAluno);
        }
        else
        {
            printf("Aluno %d reprovado!\n", numeroAluno);
        }
    }

    return 0;
}
