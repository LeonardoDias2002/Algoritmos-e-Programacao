/* Programa que lê um arquivo txt e o entende como uma fase de um jogo, com caracteres diferentes representando elementos
diferentes, troca a posição do monstro na matriz e pode imprimi-lá também */

#include <stdio.h>
#define LINHAS 16
#define COLUNAS 24

int menu(void);
int le_arquivo_nivel(char mat[][COLUNAS], char nome_arq[]);
void imprime_nivel(char mat[][COLUNAS]);
void inclui_monstro(char mat[][COLUNAS], int x, int y);

int main(void)
{
    int opcao;
    char matriz[LINHAS][COLUNAS];
    char nome_arq[45];
    int x;
    int y;
    int numMonstros;

    do
    {
        opcao = menu();
        switch (opcao)
        {
        case 1:
            printf("Entre com o nome do arquivo a ser lido: ");
            scanf("%s", nome_arq);
            numMonstros = le_arquivo_nivel(matriz, nome_arq);
            printf("Numero de monstros: %d\n", numMonstros);
            break;
        case 2:
            imprime_nivel(matriz);
            break;
        case 3:
            printf("Entre com a posx do monstro (0 a 15): ");
            scanf("%d", &x);
            printf("Entre com a posy do monstro (0 a 23): ");
            scanf("%d", &y);
            inclui_monstro(matriz, x, y);
        default:
            break;
        }
    } while (opcao != 4);

    return 0;
}

int menu(void)
{
    int opcao;
    printf("1 – Le conteudo do arquivo para a matriz\n"
           "2 – Imprime matriz na tela\n"
           "3 – Troca monstro na matriz\n"
           "4 – Fim\n"
           "Entre com a sua opcao: ");
    scanf("%d", &opcao);
    if (opcao < 1 || opcao > 4)
    {
        printf("Erro, entre com uma opcao de 1 a 4\n");
        return -1;
    }
    else
        return opcao;
}

int le_arquivo_nivel(char mat[][COLUNAS], char nome_arq[])
{
    FILE *arq;
    int numMonstros = 0;

    arq = fopen(nome_arq, "r");

    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo\n");
        return -1;
    }
    else
    {
        for (int i = 0; i < LINHAS; i++)
        {
            for (int j = 0; j < COLUNAS; j++)
            {
                fscanf(arq, "%c", &mat[i][j]);
                if (mat[i][j] == 'M')
                {
                    numMonstros++;
                }
            }
            fgetc(arq);
        }
    }

    fclose(arq);
    return numMonstros;
}

void imprime_nivel(char mat[][COLUNAS])
{
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
}

void inclui_monstro(char mat[][COLUNAS], int x, int y)
{
    mat[x][y] = 'M';
}
