/* Programa que calcula o vetor união entre dois vetores de inteiros */

#include <stdio.h>
#define MAX 40

void calc_uniao(int a[], int na, int b[], int nb, int c[], int *nc);
void le_vetor(int vetor[], int tam);

int main(void)
{
    int vetor_a[MAX], vetor_b[MAX], vetor_uniao[2 * MAX];
    int na, nb, nc;

    printf("Entre com o nro de elementos do vetor a: ");
    scanf("%d", &na);
    printf("Entre com os 5 elementos do vetor a: ");
    le_vetor(vetor_a, na);

    printf("Entre com o nro de elementos do vetor b: ");
    scanf("%d", &nb);
    printf("Entre com os 5 elementos do vetor b: ");
    le_vetor(vetor_b, nb);

    calc_uniao(vetor_a, na, vetor_b, nb, vetor_uniao, &nc);

    return 0;
}

void le_vetor(int vetor[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);
    }
}

void calc_uniao(int a[], int na, int b[], int nb, int c[], int *nc)
{
    int i, j, k;
    int repetido;

    // 'p' será o índice atual (posição livre) no vetor C
    int p = 0;

    // --- FASE 1: Processar Vetor A ---
    for (i = 0; i < na; i++)
    {
        repetido = 0;
        // Verifica se a[i] já existe no vetor C (do início até a posição p)
        for (k = 0; k < p; k++)
        {
            if (c[k] == a[i]) // Note o duplo igual (==)
            {
                repetido = 1;
                break; // Se achou, para de procurar
            }
        }

        if (!repetido)
        {
            c[p] = a[i];
            p++; // Só avança o índice de C se adicionamos um número
        }
    }

    // --- FASE 2: Processar Vetor B ---
    for (j = 0; j < nb; j++)
    {
        repetido = 0;
        // Verifica se b[j] já existe no vetor C
        for (k = 0; k < p; k++)
        {
            if (c[k] == b[j]) // Compara com o que já está gravado em C
            {
                repetido = 1;
                break;
            }
        }

        if (!repetido)
        {
            c[p] = b[j];
            p++; // Só avança se o número não era repetido
        }
    }

    // Atualiza o tamanho final para a main saber quantos imprimir
    *nc = p;

    // Impressão
    printf("Vetor uniao: ");
    for (i = 0; i < *nc; i++)
    {
        printf(" %d ", c[i]);
    }
    printf("\n");
}
