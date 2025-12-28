/* Programa que lê as 5 notas de uma turma de 10 alunos, então calcula a média da primeira nota e a informa
bem como o numero de alunos com a primeira nota acima desta média */

#include <stdio.h>
#define NUM_ALUNOS 10
#define NUM_NOTAS 5

int main(void)
{
    float notasTurma[NUM_NOTAS][NUM_ALUNOS];
    float somaPrimeiraNota = 0;
    float mediaPrimeiraNota;
    int alunosAcimaMedia = 0;

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        for (int j = 0; j < NUM_NOTAS; j++)
        {
            printf("Insira a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notasTurma[j][i]);
        }
    }

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        somaPrimeiraNota += notasTurma[0][i];
    }

    mediaPrimeiraNota = somaPrimeiraNota / NUM_ALUNOS;

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        if (notasTurma[0][i] > mediaPrimeiraNota)
        {
            alunosAcimaMedia++;
        }
    }

    printf("Media da primeira nota: %.2f\n", mediaPrimeiraNota);
    printf("%d alunos ficaram acima dessa media na primeira nota.\n", alunosAcimaMedia);

    return 0;
}
