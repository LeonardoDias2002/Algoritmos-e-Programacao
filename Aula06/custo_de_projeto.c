/* Calcula o preço de um produto a partir do tempo levado em sua produção somado ao tempo gasto no projeto (mínimo 1 mês) */

#include <stdio.h>

int main(void)
{
    int tempoProducao, tempoProjeto, tempoTotal;
    float valorFinal;

    printf("Insira o tempo (em meses), necessario para projeto: ");
    scanf("%d", &tempoProjeto);

    printf("Insira o tempo (em meses), necessario para producao: ");
    scanf("%d", &tempoProducao);

    if (tempoProjeto < 1 || tempoProducao < 1)
    {
        printf("O minimo de tempo para cada etapa eh de 1 mes!\n");
        return 0;
    }

    tempoTotal = tempoProjeto + tempoProducao;

    switch (tempoTotal)
    {
    case 2:
        printf("Preco final: R$1000\n");
        break;
    case 3:
        printf("Preco final: R$1500\n");
        break;
    case 4:
        printf("Preco final: R$2000\n");
        break;
    default:
        printf("Preco final: R$2500\n");
    }

    return 0;
}
