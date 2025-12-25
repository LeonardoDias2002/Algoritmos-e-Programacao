/* Programa que, de acordo com entradas de usuário, calcula o número de torcedores por clube (Grêmio, Internacional e Outros, média
salarial dos torcedores de Grêmio e Internacional, número de pessoas nascidas em Porto Alegre que não torce para Grêmio nem inter e
número total de entrevistados*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int numEntrevistados = 0;
    int numGremistas = 0;
    int numColorados = 0;
    int numOutrosClubes = 0;
    int numPortoAlegrensesNaoTorcemGrenal = 0;
    int numOutrasCidades = 0;
    float salario;
    char sair;
    int resposta;
    float somaSalarioGremistas = 0;
    float somaSalarioColorados = 0;

    printf("PESQUISA:\n");

    do
    {
        numEntrevistados++;
        printf("Para qual clube voce torce?\n");
        printf("1 - Gremio\n2 - Internacional\n3 - Outros\n");
        scanf("%d", &resposta);

        switch (resposta)
        {
        case 1:
            numGremistas++;
            printf("Insira seu salario: R$");
            scanf("%f", &salario);
            somaSalarioGremistas += salario;
            printf("Em que cidade voce nasceu?\n");
            printf("1 - Porto Alegreo\n2 - Outras\n");
            scanf("%d", &resposta);
            break;

        case 2:
            numColorados++;
            printf("Insira seu salario: R$");
            scanf("%f", &salario);
            somaSalarioColorados += salario;
            printf("Em que cidade voce nasceu?\n");
            printf("1 - Porto Alegreo\n2 - Outras\n");
            scanf("%d", &resposta);
            break;

        case 3:
            numOutrosClubes++;
            printf("Insira seu salario: R$");
            scanf("%f", &salario);
            printf("Em que cidade voce nasceu?\n");
            printf("1 - Porto Alegreo\n2 - Outras\n");
            scanf("%d", &resposta);

            if (resposta == 1)
            {
                numPortoAlegrensesNaoTorcemGrenal++;
            }
            break;

        default:
            break;
        }

        printf("Deseja inserir mais um entrevistado? (S/N): ");
        scanf(" %c", &sair);

    } while (toupper(sair) != 'N');

    printf("Total de gremistas: %d\n", numGremistas);
    printf("Total de colorados: %d\n", numColorados);
    printf("Media salarial dos gremistas: %.2f\n", somaSalarioGremistas / numGremistas);
    printf("Media salarial dos colorados: %.2f\n", somaSalarioColorados / numColorados);
    printf("Numero de porto-alegrenses que não torcem para a dupla Grenal: %d\n", numPortoAlegrensesNaoTorcemGrenal);
    printf("Total de entrevistados: %d\n", numEntrevistados);

    return 0;
}
