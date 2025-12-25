/* Programa que calcula comissao de uma venda */
#include <stdio.h>

int main(void)
{

    float valorVenda, taxaComissao, valorComissao;

    printf("Insira o valor da venda: R$");
    scanf("%f", &valorVenda);

    printf("Insira o percentual da comissao: ");
    scanf("%f", &taxaComissao);

    valorComissao = (valorVenda * taxaComissao) / 100;

    printf("Valor da comissao: R$%4.2f\n", valorComissao);

    return 0;
}
