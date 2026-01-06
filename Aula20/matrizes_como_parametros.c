/* Programa que armazena notas de alunos em uma matriz e exibe um menu para o usuãrio entrar com as notas,
escrever as notas na tela ou sair */

#include <stdio.h>
#include <ctype.h>
#define MAX_TURMAS 10
#define MAX_ALUNOS 30

void le_notas(float[][MAX_ALUNOS], int nroTurmas, int nroAlunos);
void escreve_notas(float[][MAX_ALUNOS], int nroTurmas, int nroAlunos);
char menu(void);

int main(void)
{
    float matriz[MAX_TURMAS][MAX_ALUNOS];
    int nroAlunos, nroTurmas;
    char opcao;

    printf("Entre com o nro de alunos: ");
    scanf("%d", &nroAlunos);
    printf("Entre com o nro de turmas: ");
    scanf("%d", &nroTurmas);

    do
    {
        opcao = menu();

        if (toupper(opcao) == 'L')
        {
            le_notas(matriz, nroTurmas, nroAlunos);
        }
        else
        {
            if (toupper(opcao) == 'E')
            {
                escreve_notas(matriz, nroTurmas, nroAlunos);
            }
            else
            {
                if (toupper(opcao) != 'Q')
                {
                    printf("Opcao invalida!\n");
                }
            }
        }

        printf("\n");
    } while (toupper(opcao) != 'Q');

    return 0;
}

void le_notas(float matriz[MAX_TURMAS][MAX_ALUNOS], int nroTurmas, int nroAlunos)
{
    int i, j;

    for (i = 0; i < nroTurmas; i++)
    {
        for (j = 0; j < nroAlunos; j++)
        {
            printf("Entre com a nota da turma %d e aluno %d\n", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void escreve_notas(float matriz[MAX_TURMAS][MAX_ALUNOS], int nroTurmas, int nroAlunos)
{
    int i, j;

    for (i = 0; i < nroTurmas; i++)
    {
        printf("\n----- Notas da turma %d -----\n", i + 1);
        for (j = 0; j < nroAlunos; j++)
        {
            printf("Notas do aluno %d = %.2f\n", j + 1, matriz[i][j]);
        }
    }
}

char menu(void)
{
    char opcao;

    printf("Entre com a sua opcao:\n");
    printf("L - Ler notas\nE - Escrever notas\nQ - Sair\n");
    scanf(" %c", &opcao);

    return opcao;
}
