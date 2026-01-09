/* Programa que simula um campeonato de futebol */

#include <stdio.h>
#define NRO_TIMES 5

typedef struct est_time
{
    char nome[15];
    int pontos;
} TIME;

typedef struct est_resultado
{
    int local, visitante;
} RESULTADO;

void leitura_dados(TIME times[], RESULTADO resultados[NRO_TIMES][NRO_TIMES], int ntimes);
void calcula_pontos(TIME times[], RESULTADO resultado[NRO_TIMES][NRO_TIMES], int ntimes);
void print_times(TIME times[], int ntimes);

int main(void)
{
    TIME times[NRO_TIMES] = {"Alemanha", 0, "Franca", 0, "Brasil", 0, "Italia", 0, "Argentina", 0};
    RESULTADO jogos[NRO_TIMES][NRO_TIMES];

    leitura_dados(times, jogos, NRO_TIMES);
    calcula_pontos(times, jogos, NRO_TIMES);
    print_times(times, NRO_TIMES);

    return 0;
}

void leitura_dados(TIME times[], RESULTADO resultados[NRO_TIMES][NRO_TIMES], int ntimes)
{
    int l, c;

    for (l = 0; l < ntimes; l++)
    {
        for (c = 0; c < ntimes; c++)
        {
            if (l != c)
            {
                printf("Entre com o resultado do jogo %s x %s: ", times[l].nome, times[c].nome);
                scanf("%d", &resultados[l][c].local);
                scanf("%d", &resultados[l][c].visitante);
                printf("\n");
            }
        }
    }
}

void calcula_pontos(TIME time[], RESULTADO resultados[NRO_TIMES][NRO_TIMES], int ntimes)
{
    int l, c;

    for (l = 0; l < ntimes; l++)
    {
        for (c = 0; c < ntimes; c++)
        {
            if (l != c)
            {
                if (resultados[l][c].local > resultados[l][c].visitante)
                {
                    time[l].pontos += 3;
                }
                else if (resultados[l][c].local == resultados[l][c].visitante)
                {
                    time[l].pontos++;
                    time[c].pontos++;
                }
                else
                    time[c].pontos += 3;
            }
        }
    }
}

void print_times(TIME time[], int ntimes)
{
    int i;

    for (i = 0; i < ntimes; i++)
    {
        printf("%s: %d pts.\n", time[i].nome, time[i].pontos);
    }
}
