/* Programa para exemplificar ponteiros em C */

#include <stdio.h>

int main(void)
{
    int count, q, *m;

    m = &count;

    count = 60;
    q = *m;

    printf("m = %p\n", m);
    printf("q = %d\n", q);
    printf("conteudo do endreço apontado por m: %d\n", *m);

    return 0;
}
