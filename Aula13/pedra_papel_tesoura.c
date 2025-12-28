/* Programa que implementa um jogo de pedra-papel-tesoura do usuário contra a máquina */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1
#define MAX 3
#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

int main(void)
{
    int escolhaMenu;
    int jogadaUsuario, jogadaComputador;

    printf("*******************");
    printf("PEDRA-PAPEL-TESOURA");
    printf("*******************");

    do
    {
        printf("Menu:\n");
        printf("1 - Jogar\n2 - Sair\n");
        printf("Entre sua escolha: ");
        scanf("%d", &escolhaMenu);

        switch (escolhaMenu)
        {
        case 1:
            printf("1 - Pedra\n2 - Papel\n3 - Tesoura\n");
            printf("Entre sua jogada: ");
            scanf("%d", &jogadaUsuario);

            srand(time(NULL));
            jogadaComputador = MIN + (rand() % (MAX - MIN + 1));

            switch (jogadaUsuario)
            {
            case 1:
                printf("Sua jogada: Pedra\n");
                break;
            case 2:
                printf("Sua jogada: Papel\n");
                break;
            case 3:
                printf("Sua jogada: Tesoura\n");
                break;
            default:
                break;
            }

            switch (jogadaComputador)
            {
            case 1:
                printf("Jogada do computador: Pedra\n");
                break;
            case 2:
                printf("Jogada do computador: Papel\n");
                break;
            case 3:
                printf("Jogada do computador: Tesoura\n");
                break;
            default:
                break;
            }

            if (jogadaUsuario == jogadaComputador)
            {
                printf("Empate!\n");
            }

            if (jogadaUsuario == PEDRA)
            {
                if (jogadaComputador == PAPEL)
                {
                    printf("Papel enrola pedra. Computador venceu!\n");
                }
                else if (jogadaComputador == TESOURA)
                {
                    printf("Pedra quebra tesoura. Voce venceu!\n");
                }
            }

            if (jogadaUsuario == PAPEL)
            {
                if (jogadaComputador == PEDRA)
                {
                    printf("Papel enrola pedra. Voce venceu!\n");
                }
                else if (jogadaComputador == TESOURA)
                {
                    printf("Tesoura corta papel. Computador venceu!\n");
                }
            }

            if (jogadaUsuario == TESOURA)
            {
                if (jogadaComputador == PEDRA)
                {
                    printf("Pedra quebra tesoura. Computador venceu!\n");
                }
                else if (jogadaComputador == PAPEL)
                {
                    printf("Tesoura corta papel. Voce venceu!\n");
                }
            }

            break;

        case 2:
            printf("Encerrando programa.\n");
            return 0;

        default:
            printf("Opcao invalida. Encerrando programa");
            break;
        }

    } while (escolhaMenu == 1);

    return 0;
}
