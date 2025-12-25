/* Testa cast (modeladores) nos operandos */
#include <stdio.h>
int main()
{
    float num_real; // variável real int x=1,y=2,z=1; // valores inteiros – inicializados na declaração
    int x = 1, y = 2, z = 1;

    // expressão com operadores inteiros,todos resultados parciais em inteiro:
    num_real = x / 2 + y / 2 + z / 2;
    printf("Caso 1: %f\n", num_real); // float sem formatação: 6 casa decimais //operadores

    num_real = (float)x / 2 + y / 2 + z / 2; // operadores inteiros, 1o resultado parcial em real
    printf("Caso 2: %f\n", num_real);

    num_real = (float)x / 2 + (float)y / 2 + (float)z / 2; // operadores inteiros, todos resultados parciais em real
    printf("Caso 3: %f\n", num_real);

    num_real = x / 2.0 + y / 2.0 + z / 2.0; // operadores inteiros, todos resultados parciais em real
    printf("Caso 3: %f\n", num_real);
    return 0;
}
