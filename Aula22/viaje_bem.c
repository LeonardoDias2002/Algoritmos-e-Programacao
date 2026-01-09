/* Programa que lê e imprime dados de um bilhete */

#include <stdio.h>
#include <string.h>
#define TAMANHO_NOME_PASSAGEIRO 20
#define TAMANHO_NOME_CIDADE 20

typedef struct est_data
{
    int dia, mes, ano;
} DATA;

typedef struct est_horario
{
    int hora, min;
} HORARIO;

typedef struct est_bilhete
{
    int cod;
    char nome_passageiro[TAMANHO_NOME_PASSAGEIRO + 1];
    char origem[TAMANHO_NOME_CIDADE + 1], destino[TAMANHO_NOME_CIDADE + 1];
    DATA data_b;
    HORARIO horario_b;
    int assento;
    float valor;
} BILHETE;

BILHETE le_bilhete(void);
void imprime_bilhete(BILHETE);

int main(void)
{
    BILHETE bilhete;

    bilhete = le_bilhete();

    imprime_bilhete(bilhete);

    return 0;
}

BILHETE le_bilhete(void)
{
    BILHETE bilhete;

    printf("Entre com o codigo do bilhete: ");
    scanf("%d", &bilhete.cod);

    getchar();
    printf("Entre com o nome do passageiro: ");
    fgets(bilhete.nome_passageiro, TAMANHO_NOME_PASSAGEIRO + 1, stdin);
    bilhete.nome_passageiro[strlen(bilhete.nome_passageiro) - 1] = '\0';

    printf("Entre com a cidade de origem: ");
    fgets(bilhete.origem, TAMANHO_NOME_CIDADE + 1, stdin);
    bilhete.origem[strlen(bilhete.origem) - 1] = '\0';

    printf("Entre com a cidade de destino: ");
    fgets(bilhete.destino, TAMANHO_NOME_CIDADE + 1, stdin);
    bilhete.destino[strlen(bilhete.destino) - 1] = '\0';

    printf("Entre com a data (dia/mês/ano): ");
    scanf("%d%d%d", &bilhete.data_b.dia, &bilhete.data_b.mes, &bilhete.data_b.ano);

    printf("Entre com o horario (hora e minuto): ");
    scanf("%d%d", &bilhete.horario_b.hora, &bilhete.horario_b.min);

    printf("Entre com o assento: ");
    scanf("%d", &bilhete.assento);

    printf("Entre com o valor: ");
    scanf("%f", &bilhete.valor);

    return bilhete;
}

void imprime_bilhete(BILHETE bilhete)
{
    printf("Nome do passageiro: %s\n", bilhete.nome_passageiro);
    printf("Origem: %s\n", bilhete.origem);
    printf("Destino: %s\n", bilhete.destino);
    printf("Data: %d/%d/%d\n", bilhete.data_b.dia, bilhete.data_b.mes, bilhete.data_b.ano);
    printf("Horario: %d:%d\n", bilhete.horario_b.hora, bilhete.horario_b.min);
    printf("Assento: %d\n", bilhete.assento);
    printf("Valor: R$%.2f\n", bilhete.valor);
}
