/* Programa que lê caracteres do teclado até o usuário digitar '!'. Ao final informa quantos
caracteres maiúsculos e minúsculos foram digitados */

#include <stdio.h>

int main(void)
{
    char digitado;
    int contMinuscula = 0, contMaiuscula = 0;
    int contador = 0;

    do
    {
        contador++;
        printf("Entre com o %do caractere: ", contador);
        scanf(" %c", &digitado);

        if (digitado >= 65 && digitado <= 90)
        {
            contMaiuscula++;
        }
        else
        {
            if (digitado >= 97 && digitado <= 122)
            {
                contMinuscula++;
            }
        }
    } while (digitado != '!');

    printf("Voce digitou %d caracteres em minusculo e %d em maiusculo\n", contMinuscula, contMaiuscula);

    return 0;
}
