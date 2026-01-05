/* Programa que ilustra semelhança de ponteiros e vetores */

#include <stdio.h>

int main(void)
{
    int v[5];
    int i;

    printf("Leitura com acesso tipo ponteiro\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", v + i); // já é ponteiro! não precisa do &
    }

    printf("Impressao com acesso tipo ponteiro\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(v + i));
    }

    printf("\nImpressao com acesso tipo vetor\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
