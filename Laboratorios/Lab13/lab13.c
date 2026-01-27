/* Programa que salva jogadores e suas respectivas pontuações em
um arquivo binário, sendo capaz de alterá-lo se necessário */

#include <stdio.h>
#include <stdlib.h> // Necessário para exit(0) se quiser, ou apenas boas práticas

#define MAX_SCORES 5
#define TRUE 1
#define FALSE 0

typedef struct
{
    char nome[45];
    int pontos;
} JOGADOR;

// Protótipos
int menu(void);
int le_arquivo(char nome_arq[], JOGADOR top5[MAX_SCORES]);
int salva_arquivo(char nome_arq[], JOGADOR top5[MAX_SCORES]);
void troca_info_array(JOGADOR top5[], JOGADOR novoj, int posicao);
void imprime_top5(JOGADOR top5[]);

int main(void)
{
    FILE *arq;
    char nomeArquivo[45] = "top5.bin";
    int opcao;
    int posicao;

    int arquivoLido = FALSE;
    JOGADOR top5[MAX_SCORES] = {0};

    JOGADOR novoj;

    do
    {
        opcao = menu();

        switch (opcao)
        {
        case 1:
            printf("Entre com o nome do arquivo a ser lido: ");
            scanf("%s", nomeArquivo);
            // Se a função retornar 1 (sucesso), marcamos como lido
            if (le_arquivo(nomeArquivo, top5))
            {
                arquivoLido = TRUE;
            }
            break;
        case 2:
            // Só tenta salvar se tivermos um nome de arquivo válido ou dados
            salva_arquivo(nomeArquivo, top5);
            break;
        case 3:
            // Permite imprimir se leu arquivo OU se já editou algo (opcional, mas segui sua lógica estrita)
            if (arquivoLido == TRUE)
            {
                imprime_top5(top5);
            }
            else
            {
                printf("Não ha arquivo lido p impressao!\n");
            }
            break;
        case 4:
            printf("Entre com o nome do jogador: ");
            scanf("%s", novoj.nome);
            printf("Entre com os pontos do jogador: ");
            scanf("%d", &novoj.pontos);
            printf("Entre em qual posicao voce quer adicionar o jogador: ");
            scanf("%d", &posicao);

            troca_info_array(top5, novoj, posicao);

            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida! Digite novamente!\n");
            break;
        }
    } while (opcao != 5);

    return 0;
}

int menu(void)
{
    int opcao;
    printf("\n1 - Le conteudo arquivo para o array\n");
    printf("2 - Salva array no arquivo\n");
    printf("3 - Imprime conteudo do array\n");
    printf("4 - Troca informacao do arquivo\n");
    printf("5 - Fim\n");
    printf("Entre com sua opção:");
    scanf("%d", &opcao);
    return opcao;
}

int le_arquivo(char nome_arq[], JOGADOR top5[MAX_SCORES])
{
    FILE *arq = fopen(nome_arq, "rb"); // Abre para leitura binária
    if (arq == NULL)
    {
        printf("Erro: Arquivo nao encontrado ou falha na leitura.\n");
        return 0; // Falha
    }

    // Lê o bloco inteiro de memória do arquivo direto para o array
    fread(top5, sizeof(JOGADOR), MAX_SCORES, arq);

    fclose(arq);
    printf("Arquivo lido com sucesso!\n");
    return 1; // Sucesso
}

int salva_arquivo(char nome_arq[], JOGADOR top5[MAX_SCORES])
{
    FILE *arq = fopen(nome_arq, "wb"); // Abre para escrita binária (cria ou sobrescreve)
    if (arq == NULL)
    {
        printf("Erro ao abrir arquivo para gravacao.\n");
        return 0;
    }

    // Escreve o array inteiro no arquivo
    fwrite(top5, sizeof(JOGADOR), MAX_SCORES, arq);

    fclose(arq);
    printf("Arquivo escrito com sucesso!\n");
    return 1;
}

void imprime_top5(JOGADOR top5[])
{
    printf("\nJogador | Score\n");
    printf("---------------------------\n");

    for (int i = 0; i < MAX_SCORES; i++)
    {
        // Se o nome estiver vazio (lixo ou zerado), imprime traços, senão imprime o nome
        // %-15s alinha o texto à esquerda ocupando 15 espaços (estética)
        if (top5[i].pontos == 0 && top5[i].nome[0] == '\0')
        {
            printf("%-15s | %d\n", "---", 0);
        }
        else
        {
            printf("%-15s | %d\n", top5[i].nome, top5[i].pontos);
        }
    }
}

void troca_info_array(JOGADOR top5[], JOGADOR novoj, int posicao)
{
    // Verifica se a posição é válida (índices de 0 a 4)
    if (posicao >= 0 && posicao < MAX_SCORES)
    {
        // Structs podem ser copiadas diretamente com = em C
        top5[posicao] = novoj;
        printf("Informacao trocada no array!\n");
    }
    else
    {
        printf("Posicao invalida! Use valores entre 0 e %d.\n", MAX_SCORES - 1);
    }
}