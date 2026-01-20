/* Programa para salvar num arquivo texto uma
agenda com nome, prefixo e número de telefone */

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *arq;
    char nome[80];
    int prefixo, num, op;

    arq = fopen("Agenda.txt", "w");

    if (arq == NULL)
    {
        printf("Erro na abertura!\n");
    }
    else
    {
        do
        {
            printf("Entre com o nome: ");
            scanf("%s", nome);

            printf("Entre com o prefixo: ");
            scanf("%d", &prefixo);

            printf("Entre com telefone: ");
            scanf("%d", &num);

            fprintf(arq, "%s %d %d\n", nome, prefixo, num);

            printf("Deseja continuar?\n1 - Sim\n2 - Nao\n");
            scanf("%d", &op);
        } while (op != 2);
        fclose(arq);
    }

    return 0;
}
