/* Programa que le o numero de alunos matriculados no curso e o genero de cada um, entao calcula
a porcentagem de alunos do genero feminino e a porcentagem de alunos que prestaram vestibular
mais de 3 vezes */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int numAlunos;
    char genero;
    int numGenFeminino = 0;
    int numGenMasculino = 0;
    int numVezesVestibular;
    int maisDeTres = 0;

    printf("Entre com o numero total de alunos: ");
    scanf("%d", &numAlunos);

    for (int i = 0; i < numAlunos; i++)
    {
        printf("Entre com o genero do aluno: ");
        scanf(" %c", &genero);

        switch (toupper(genero))
        {
        case 'M':
            numGenMasculino++;
            break;

        case 'F':
            numGenFeminino++;
            break;

        default:
            break;
        }

        printf("Entre com o nro de vezes que fez o vestibular: ");
        scanf("%d", &numVezesVestibular);

        if (numVezesVestibular >= 3)
        {
            maisDeTres++;
        }
    }

    printf("Percentual de alunos genero feminino: %.2f\n", (float)(numGenFeminino * 100) / numAlunos);
    printf("Percentual alunos vestibular 3 vezes ou mais: %.2f\n", (float)(maisDeTres * 100) / numAlunos);

    return 0;
}
