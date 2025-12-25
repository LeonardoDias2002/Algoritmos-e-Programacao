/* Programa para demonstrar comportamento de fors aninhados */

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 2; j <= 8; j += 2)
        {
            printf("i = %d, j = %d\n", i, j);
        }
    }

    return 0;
}
