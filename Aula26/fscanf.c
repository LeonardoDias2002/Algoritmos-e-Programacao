// Programa para exemplificar diferenças entre fscanf e fgets

#include <stdio.h>
#define NUMCHAR 256

int main(void)
{
    FILE *arq;
    char buffer[NUMCHAR];

    arq = fopen("Teste.txt", "r");

    if (arq == NULL)
    {
        printf("Erro na leitura");
    }
    else
    {
        printf("Imprimindo conteudo com fscanf\n");

        while (!feof(arq))
        {
            if (fscanf(arq, "%s", buffer) != -1)
            {
                printf("%s-", buffer);
            }
        }

        rewind(arq);

        printf("\n\nImprimindo conteudo com fgets\n");

        while (!feof(arq))
        {
            if (fgets(buffer, 256, arq) != NULL)
            {
                printf("%s", buffer);
            }
        }

        fclose(arq);
    }

    return 0;
}