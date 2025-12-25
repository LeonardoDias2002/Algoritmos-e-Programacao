/* Programa que calcula valor a pagar em uma compra de livros, se forem vendidos mais de 10 livros, informa na tela */

#include <stdio.h>
#define PRECO_LIVRO_A 10.00
#define PRECO_LIVRO_B 20.00
#define PRECO_LIVRO_C 30.00

int main(void)
{

    int qtdLivroA, qtdLivroB, qtdLivroC;
    int qtdTotalLivros;
    float valorFinal;

    printf("Insira a quantidade de livros tipo A comprados: ");
    scanf("%d", &qtdLivroA);

    printf("Insira a quantidade de livros tipo B comprados: ");
    scanf("%d", &qtdLivroB);

    printf("Insira a quantidade de livros tipo C comprados: ");
    scanf("%d", &qtdLivroC);

    valorFinal = (qtdLivroA * PRECO_LIVRO_A) + (qtdLivroB * PRECO_LIVRO_B) + (qtdLivroC * PRECO_LIVRO_C);
    qtdTotalLivros = qtdLivroA + qtdLivroB + qtdLivroC;

    printf("Valor total a pagar: R$%.2f\n", valorFinal);

    if (qtdTotalLivros > 10)
    {
        printf("Foram vendido mais de 10 livros!\n");
    }

    return 0;
}
