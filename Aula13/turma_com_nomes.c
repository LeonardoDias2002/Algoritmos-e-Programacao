/* Programa que lê o nome, notas finais e frequência de uma turma de alunos, ao final, imprime o
nome de cada um ao lado de seus conceitos finais */

#include <stdio.h>
#include <string.h>
#define TAMANHO_TURMA 5
#define TAMANHO_MAX_NOME 10
#define TOTAL_DE_AULAS 45
#define FREQUENCIA_MINIMA 75

int main(void)
{
    char nomesAlunos[TAMANHO_TURMA][TAMANHO_MAX_NOME];
    float notasFinais[TAMANHO_TURMA];
    int frequencia[TAMANHO_TURMA];
    char conceito;

    for (int i = 0; i < TAMANHO_TURMA; i++)
    {
        printf("Entre com o nome do aluno %d: ", i + 1);
        if (fgets(nomesAlunos[i], TAMANHO_MAX_NOME, stdin))
        {
            nomesAlunos[i][strlen(nomesAlunos[i]) - 1] = '\0';
        }
        else
            printf("Problema com fgets!\n");

        printf("Entre com a nota final do aluno %d: ", i + 1);
        scanf("%f", &notasFinais[i]);

        printf("Entre com a frequencia do aluno %d: ", i + 1);
        scanf("%d", &frequencia[i]);

        getchar();
    }

    printf("\nRESULTADOS:\n");

    for (int i = 0; i < TAMANHO_TURMA; i++)
    {
        if ((frequencia[i] * 100) / TOTAL_DE_AULAS < FREQUENCIA_MINIMA)
        {
            printf("%s - Conceito FF\n", nomesAlunos[i]);
        }
        else
        {
            if (notasFinais[i] < 6)
            {
                conceito = 'D';
            }
            else
            {
                if (notasFinais[i] >= 6 && notasFinais[i] < 7.5)
                {
                    conceito = 'C';
                }
                else
                {
                    if (notasFinais[i] >= 7.5 && notasFinais[i] < 8.5)
                    {
                        conceito = 'B';
                    }
                    else
                    {
                        if (notasFinais[i] >= 8.5)
                        {
                            conceito = 'A';
                        }
                    }
                }
            }

            printf("%s - Conceito %c\n", nomesAlunos[i], conceito);
        }
    }

    return 0;
}
