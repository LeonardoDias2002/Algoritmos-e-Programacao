/* Programa para exemplificar uso das funções rand() e time() */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int cont;
    srand(time(NULL));

    for (cont = 0; cont < 3; cont++)
    {
        printf("%d ", rand());
    }

    printf("\n");

    return 0;
}
