/* Programa que calcula quanto tempo levará para a população brasileira se tornar maior que a estadunidense */

#include <stdio.h>
#define POP_INICIAL_BRASIL 200
#define POP_INICIAL_EUA 318

int main(void)
{
    float populacaoBrasil = POP_INICIAL_BRASIL;
    float populacaoEUA = POP_INICIAL_EUA;
    int qtdAnos = 0;
    float taxaEUA;
    taxaEUA = 0.013;

    do
    {

        populacaoBrasil = populacaoBrasil + (populacaoBrasil * 0.015);
        printf("Populacao brasileira apos %d: %.2f milhoes\n", qtdAnos, populacaoBrasil);

        populacaoEUA = populacaoEUA + (populacaoEUA * taxaEUA);
        if (taxaEUA > 0)
        {
            taxaEUA -= 0.001;
        }
        else
        {
            taxaEUA = 0;
        }

        printf("Populacao estadunidense apos ano %d: %.2f milhoes\n", qtdAnos, populacaoEUA);

        qtdAnos++;

    } while (populacaoBrasil < populacaoEUA);

    return 0;
}
