/* Programa que verifica quantos acertos uma aposta teve na mega-sena */

#include <stdio.h>
#define TAMANHO_JOGO 6
#define TRUE 1
#define FALSE 0

int avalia_aposta(int aposta[], int sorteio[], int tam);
void le_jogo(int aposta[], int tam);

int main(void)
{
    int sorteio[TAMANHO_JOGO], aposta[TAMANHO_JOGO];
    int invalido, nroAcertos;

    printf("Entre com as 6 dezenas sorteadas:\n");
    le_jogo(sorteio, TAMANHO_JOGO);

    printf("Entre com seu jogo:\n");
    le_jogo(aposta, TAMANHO_JOGO);

    nroAcertos = avalia_aposta(aposta, sorteio, TAMANHO_JOGO);

    printf("Voce acertou %d dezenas!\n", nroAcertos);

    switch (nroAcertos)
    {
    case 4:
        printf("Quadra!\n");
        break;

    case 5:
        printf("Quina!\n");
        break;

    case 6:
        printf("Sena!\n");
        break;

    default:
        break;
    }

    return 0;
}

void le_jogo(int aposta[], int tam)
{
    int invalido;

    for (int i = 0; i < TAMANHO_JOGO; i++)
    {
        do
        {
            printf("Valor %d: ", i + 1);
            scanf("%d", &aposta[i]);
            if (aposta[i] > 80 || aposta[i] <= 0)
            {
                printf("Valor fora do intervalo! Digite novamente\n");
                invalido = TRUE;
            }
            else
                invalido = FALSE;
        } while (invalido);
    }
}

int avalia_aposta(int aposta[], int sorteio[], int tam)
{
    int i, j;
    int nroAcertos = 0;

    for (i = 0; i < TAMANHO_JOGO; i++)
    {
        for (j = 0; j < TAMANHO_JOGO; j++)
        {
            if (aposta[i] == sorteio[j])
            {
                nroAcertos++;
            }
        }
    }

    return nroAcertos;
}
