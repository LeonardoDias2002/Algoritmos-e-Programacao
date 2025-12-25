/* Programa que dado a massa inicial (> 0.5g) de um material radioativo com meia-vida de 50s, calcula o tempo necessário para que a massa
total seja menos do que 0.5g */

#include <stdio.h>
#define MASSA_LIMITE 0.5

int main(void)
{
    float massa;
    int tempoSegundos = 0;
    int tempoMinutos = 0;
    int tempoHoras = 0;

    do
    {
        printf("Massa inicial (gramas): ");
        scanf("%f", &massa);
    } while (massa < 0.5);

    while (massa > MASSA_LIMITE)
    {
        tempoSegundos += 50;
        massa /= 2;
    }

    printf("Total segundos: %d\n", tempoSegundos);
    printf("Massa final: %.6f\n", massa);

    tempoMinutos = tempoSegundos / 60;
    tempoSegundos = tempoSegundos % 60;

    tempoHoras = tempoMinutos / 60;
    tempoMinutos = tempoMinutos % 60;

    printf("Tempo: %d horas, %d min e %ds\n", tempoHoras, tempoMinutos, tempoSegundos);

    return 0;
}
