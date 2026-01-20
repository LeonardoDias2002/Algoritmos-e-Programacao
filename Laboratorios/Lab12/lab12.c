/* Programa que simula uma revenda de carros, onde usuário pode cadastras, consultar e calcular preço médio dos carros da venda, bem como
ver o número total de carros que estão a venda no momento */

#include <stdio.h>
#include <string.h>
#define NUM_MAX_CARROS 3

typedef struct carro
{
    int cod;
    char modelo[45];
    char marca[45];
    float preco;
    int ano;
} CARRO;

int menu(void);
void cadastraCarro(CARRO *c);
void printCarro(CARRO c);
float calculaMediaPreco(CARRO carros[], int ncarros);
CARRO procuraCarro(CARRO carros[], int ncarros, int cod);

int main(void)
{
    CARRO carros[NUM_MAX_CARROS];
    CARRO carroEncontrado;
    int ncarros = 0;
    int opcao;
    int cod;
    float mediaPreco;

    do
    {
        opcao = menu();

        switch (opcao)
        {
        case 1:
        {
            if (ncarros < 3)
            {
                cadastraCarro(&carros[ncarros]);
                ncarros++;
            }
            else
            {
                printf("Limite de carros atingido, nao cadastre mais nenhum carro\n");
            }
            break;
        }

        case 2:
        {
            printf("Informe o codigo do carro: ");
            scanf("%d", &cod);
            carroEncontrado = procuraCarro(carros, ncarros, cod);
            if (carroEncontrado.cod != -1)
            {
                printCarro(carroEncontrado);
            }
            else
            {
                printf("Carro nao encontrado!\n");
            }
            break;
        }

        case 3:
        {
            mediaPreco = calculaMediaPreco(carros, ncarros);
            printf("O preco medio dos carros eh %.2f\n", mediaPreco);
            break;
        }

        case 4:
        {
            printf("Existem %d carros em estoque\n", ncarros);
            break;
        }
        default:
            break;
        }

    } while (opcao != 5);

    return 0;
}

int menu(void)
{
    int opcao;

    printf("1 - Cadastro de carro\n");
    printf("2 - Consultar carro\n");
    printf("3 - Preco medio dos carros\n");
    printf("4 - Imprime estoque em revenda\n");
    printf("5 - Sair\n");
    printf("Entre com a sua opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

void cadastraCarro(CARRO *c)
{
    printf("Codigo: ");
    scanf("%d", &c->cod);
    getchar();

    printf("Marca: ");
    fgets(c->marca, 45, stdin);
    c->marca[strlen(c->marca) - 1] = '\0';

    printf("Modelo: ");
    fgets(c->modelo, 45, stdin);
    c->modelo[strlen(c->modelo) - 1] = '\0';

    printf("Preco: ");
    scanf("%f", &c->preco);

    printf("Ano: ");
    scanf("%d", &c->ano);
    getchar();
}

void printCarro(CARRO c)
{
    printf("Marca: %s\n", c.marca);
    printf("Modelo: %s\n", c.modelo);
    printf("Preco: R$%.2f\n", c.preco);
    printf("Ano: %d\n", c.ano);
}

float calculaMediaPreco(CARRO carros[], int ncarros)
{
    float somaPrecos = 0;
    float media;

    for (int i = 0; i < ncarros; i++)
    {
        somaPrecos += carros[i].preco;
    }

    if (ncarros != 0)
        media = somaPrecos / ncarros;
    else
        printf("Nao ha carros cadastrados");

    return media;
}

CARRO procuraCarro(CARRO carros[], int ncarros, int cod)
{
    CARRO naoEncontrado;

    for (int i = 0; i < ncarros; i++)
    {
        if (carros[i].cod == cod)
        {
            return carros[i];
        }
    }

    naoEncontrado.cod = -1;

    return naoEncontrado;
}
