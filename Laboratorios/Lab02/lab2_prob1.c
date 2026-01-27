/* Programa que lê um valor inteiro que representa o nũmero de segundos que uma pessoa trabalhou e apresenta o nũmero de dias, horas, minutos e
segundo sequivalentes ao valor total em segundos. */

#include <stdio.h>

int main(void)
{
    int tempoTotal, dias, horas, minutos, segundos;

    printf("Entre com o total em segundos: ");
    scanf("%d", &tempoTotal);

    minutos = tempoTotal / 60;
    segundos = tempoTotal % 60;

    horas = minutos / 60;
    minutos = minutos % 60;

    dias = horas / 24;
    horas = horas % 24;

    printf("%d Dias(s) %d hora(s) %d min(s) %d sec(s)", dias, horas, minutos, segundos);

    return 0;
}
