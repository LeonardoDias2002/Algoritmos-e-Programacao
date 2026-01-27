/* Programa que simula um jogo de pedra-papel-tesoura */

#include <stdio.h>

int main(void)
{
    char jogada1, jogada2;

    printf("Entre com suas jogadas: ");
    scanf(" %c %c", &jogada1, &jogada2);

    if (jogada1 != 'p' && jogada1 != 'r' && jogada1 != 't')
    {
        printf("Jogada 1 invalida!\n");
        return 0;
    }

    if (jogada2 != 'p' && jogada2 != 'r' && jogada2 != 't')
    {
        printf("Jogada 2 invalida!\n");
        return 0;
    }

    if (jogada1 == jogada2)
    {
        printf("EMPATE!\n");
    }

    if (jogada1 == 'p')
    {
        if (jogada2 == 'r')
            printf("Papel cobre pedra! O jogador 1 venceu.\n");

        if (jogada2 == 't')
            printf("Tesoura corta papel! O jogador 2 venceu.\n");
    }

    if (jogada1 == 'r')
    {
        if (jogada2 == 'p')
            printf("Papel cobre pedra! O jogador 2 venceu.\n");

        if (jogada2 == 't')
            printf("Pedra quebra tesoura! O jogador 1 venceu.\n");
    }

    if (jogada1 == 't')
    {
        if (jogada2 == 'p')
            printf("Tesoura corta papel! O jogador 1 venceu.\n");

        if (jogada2 == 'r')
            printf("Pedra quebra tesoura! O jogador 2 venceu.\n");
    }

    return 0;
}
