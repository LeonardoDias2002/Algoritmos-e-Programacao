/* Exercício básico do comando if */

#include <stdio.h>

int main(void)
{

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    // if (valor < 10)
    if (valor == 10)
    {
        // printf("%d eh menor que 10!\n", valor);
        printf("%d eh igual a 10!\n", valor);
    }

    return 0;
}
