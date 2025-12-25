/* Programa para processar a média de nota de uma turma de alunos, sem sabermos o número de alunos a priori */

#include <stdio.h>
#define NUMERO_DE_NOTAS 3

int main(void)
{

    float nota1, nota2, nota3, mediaAluno, mediaTurma, soma = 0;
    int contador = 0;

    do
    {
        contador++;
        printf("Entre com as notas do aluno %d:\n", contador);
        printf("Entre com a nota 1: ");
        scanf("%f", &nota1);
        printf("Entre com a nota 2: ");
        scanf("%f", &nota2);
        printf("Entre com a nota 3: ");
        scanf("%f", &nota3);

        mediaAluno = (nota1 + nota2 + nota3) / NUMERO_DE_NOTAS;
        soma += mediaAluno;
        printf("Media do aluno %d: %.2f\n", contador, mediaAluno);
    } while (nota1 <= 10);

    mediaTurma = soma / contador;

    return 0;
}
