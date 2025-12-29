/* Jogo de adivinhar um numero inteiro sorteado no intervalo [1, 10] */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_TENTATIVAS 5
#define MIN 1
#define MAX 10

int main(void)
{
    int chute;
    int resposta;
    int nroTentativas = 0;
    int achou = 0;

    srand(time(NULL));

    resposta = MIN + (rand() % (MAX - MIN + 1));

    do
    {
        nroTentativas++;
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        if (chute > resposta)
        {
            printf("Seu chute e maior do que o valor sorteado!\n");
        }
        else
        {
            if (chute < resposta)
            {
                printf("Seu chute e menor do que o valor sorteado!\n");
            }
            else
            {
                if (chute == resposta)
                {
                    printf("Parabens, voce acertou em %d tentativa(s)!\n", nroTentativas);
                    achou = 1;
                }
            }
        }
    } while (chute != resposta && nroTentativas <= MAX_TENTATIVAS);

    if (achou == 0)
    {
        printf("Voce ultrapassou o numero maximo de tentativas!\n");
    }

    return 0;
}
