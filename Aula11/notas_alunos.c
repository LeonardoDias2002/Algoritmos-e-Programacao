/* Programa que lê o número de alunos (<= 60), então lê o código e nota de cada aluno e
informa os códigos e notas dos alunos com nota menor do que a média*/

#include <stdio.h>
#define TAM_MAX 60

int main(void)
{
    int tamanhoTurma;
    float somaNotas = 0;
    float mediaTurma;

    do
    {
        printf("Entre com o tamanho da turma: ");
        scanf("%d", &tamanhoTurma);

        if (tamanhoTurma > TAM_MAX)
        {
            printf("Tamanho maior que o limite permitido, entre novamente.\n");
        }
    } while (tamanhoTurma > TAM_MAX);

    int codigos[tamanhoTurma];
    float notas[tamanhoTurma];

    for (int i = 0; i < tamanhoTurma; i++)
    {
        printf("Entre com o codigo do aluno %d: ", i + 1);
        scanf("%d", &codigos[i]);
        printf("Entre com a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        somaNotas += notas[i];
    }

    mediaTurma = somaNotas / tamanhoTurma;

    printf("Media da turma: %.2f\n", mediaTurma);

    for (int i = 0; i < tamanhoTurma; i++)
    {
        if (notas[i] < mediaTurma)
        {
            printf("Aluno %d abaixo da media. Nota: %.2f\n", codigos[i], notas[i]);
        }
    }

    return 0;
}
