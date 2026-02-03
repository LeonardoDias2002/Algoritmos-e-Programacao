/* Programa recursivo que soma os digitos de um número*/

#include <stdio.h>
int somaDosDigitos(int n);

int main()
{
    int numero, resultado;

    printf("Entre com um valor inteiro positivo: ");
    scanf("%d", &numero);

    /* Verifica se o número é positivo (opcional, mas boa prática) */
    if (numero < 0)
    {
        printf("Por favor, digite um número positivo.\n");
    }
    else
    {
        resultado = somaDosDigitos(numero);
        printf("A soma dos digitos de %d eh %d\n", numero, resultado);
    }

    return 0;
}

/* Implementação da função recursiva */
int somaDosDigitos(int n)
{
    /* Caso base: se n for 0, não há mais dígitos para somar */
    if (n == 0)
    {
        return 0;
    }
    /* Passo recursivo:
       1. (n % 10) pega o último dígito (ex: 123 % 10 = 3)
       2. somaDosDigitos(n / 10) chama a função para o restante do número (ex: 123 / 10 = 12)
    */
    else
    {
        return (n % 10) + somaDosDigitos(n / 10);
    }
}