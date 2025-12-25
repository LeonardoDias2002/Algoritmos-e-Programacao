/* Programa que calcula a média de uma turma de 30 alunos e informa as notas superiores à média da turma */

#include <stdio.h>
#define NRO_ALUNOS 30

int main(void)
{
    float notas[NRO_ALUNOS];
    float soma = 0;
    float media;

    for (int i = 0; i < NRO_ALUNOS; i++)
    {
        printf("Insira a nota do aluno %d", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / NRO_ALUNOS;

    for (int i = 0; i < NRO_ALUNOS; i++)
    {
        if (notas[i] > media)
        {
            printf("Aluno %d ficou acima da media da turma!", i + 1);
        }
    }

    return 0;
}
