/* Programa que calcula valor a pagar em uma compra de livros, se forem vendidos mais de 10 livros, informa na tela */

#include <stdio.h>
#include <ctype.h>
#define PRECO_LIVRO_A 10.00
#define PRECO_LIVRO_B 20.00
#define PRECO_LIVRO_C 30.00

int main(void)
{

    char codigoLivro;
    int qtdLivros;
    float valorFinal;

    printf("Insira o codigo do livro sendo comprado: ");
    scanf("%c", &codigoLivro);
    printf("Insira o quantos livros estao sendo comprado: ");
    scanf("%d", &qtdLivros);

    codigoLivro = toupper(codigoLivro);

    if (codigoLivro == 'A')
    {
        valorFinal = PRECO_LIVRO_A * qtdLivros;
    }
    else if (codigoLivro == 'B')
    {
        valorFinal = PRECO_LIVRO_B * qtdLivros;
    }
    else if (codigoLivro == 'C')
    {
        valorFinal = PRECO_LIVRO_C * qtdLivros;
    }
    else
    {
        printf("O codigo inserido eh invalido!");
    }

    printf("Valor total a pagar: R$%.2f\n", valorFinal);

    if (qtdLivros > 10)
    {
        printf("Foram vendido mais de 10 livros!\n");
    }

    return 0;
}
