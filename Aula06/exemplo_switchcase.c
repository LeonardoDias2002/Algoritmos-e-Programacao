/* Programa que imprime uma mensagem, de acordo com o código lido */

#include <stdio.h>

int main(void)
{
    int codigoMensagem;

    printf("Codigo (1 a 4): ");
    scanf("%d", &codigoMensagem);

    switch (codigoMensagem)
    {
    case 1:
        printf("Mensagem 1\n");
        break;
    case 2:
        printf("Mensagem 2\n");
        break;
    case 3:
        printf("Mensagem 3\n");
        break;
    case 4:
        printf("Mensagem 4\n");
        break;
    default:
        printf("Codigo invalido!\n");
    }

    return 0;
}
