#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //DECLARAÇÃO DE VARIAVEIS CARTA 1
    int populacao, carta1, numeroDePontosTuristicos, codigoDaCarta, escolhaJogador1;
    float area;
    float pib;
    float densidadePopulacional;
    float pibPerCapta;
    long double superPoder;
    char cidade;
    char nomeDoEstado[30];

    //DECLARAÇÃO DE VARIAVEIS CARTA 2
    int populacao2, carta2, numeroDePontosTuristicos2, codigoDaCarta2, escolhaJogador2;
    float area2;
    float pib2;
    float densidadePopulacional2;
    float pibPerCapta2;
    long double superPoder2;
    char cidade2;
    char nomeDoEstado2[30];

    //Entradas do usuario de menu de opcoes

    printf("****Super Trunfo Paises!****");
    printf("\nDigite o nome do estado da primeira carta: ");
    scanf(" %29[^\n]", &nomeDoEstado);
    printf("\nDigite o nome do estado da segunda carta: ");
    scanf(" %29[^\n]", &nomeDoEstado2);
    printf("\nQual cidade irá usar(de 'A' a 'H'): ");
    scanf("%c", &cidade);
    getchar();
    printf("\nQual cidade irá usar(de 'A' a 'H'): ");
    scanf("%c", &cidade2);
    getchar();
    printf("\nDigite a cidade da primeira carta(de 1 a 4): ");
    scanf("%d", &codigoDaCarta);
    printf("\nDigite a cidade da primeira carta(de 1 a 4): ");
    scanf("%d", &codigoDaCarta2);
    printf("\n******************************");
    printf("\nQual atributo deseja jogar? ");
    printf("\n1. Numero de Pontos Turisticos");
    printf("\n2. Area total da cidade em quilometros quadrados");
    printf("\n3. PIB");
    printf("\n4. Populacao\n");
    scanf("%d", &escolhaJogador1);

    //switch de escolhas para qual atributo deseja jogar incluindo fator de desempate

    switch (escolhaJogador1)
    {
    case 1:
        printf("Digite o numero de Pontos Turisticos da primeira carta: ");
        scanf("%d", &numeroDePontosTuristicos);
        printf("Digite o numero de Pontos Turisticos da segunda carta: ");
        scanf("%d", &numeroDePontosTuristicos2);
        if (numeroDePontosTuristicos > numeroDePontosTuristicos2)
        {
            printf("O numero de pontos turisticos da primeira cidade venceu!\n");
            carta1 ++;
        }else
        {
            printf("O numero de pontos turisticos da segunda cidade venceu!\n");
            carta2 ++;
        };
        break;
    case 2:
        printf("Digite a area total da cidade em quilometros quadrados da primeira carta: ");
        scanf("%f", &area);
        printf("Digite a area total da cidade em quilometros quadrados da segunda carta: ");
        scanf("%f", &area2);
        if (area > area2)
        {
            printf("A area da primeira cidade venceu!\n");
            carta1 ++;
        }else
        {
            printf("A area da segunda cidade venceu!\n");
            carta2 ++;
        };
        break;
    case 3:
        printf("Digite o PIB da cidade da primeira carta: ");
        scanf("%f", &pib);
        printf("Digite o PIB da cidade da segunda carta: ");
        scanf("%f", &pib2);
        if (pib == pib2)
        {
            printf("\nHouve um empate! Vamos desempatar calculando o PIB per capita!");
            printf("\nDigite a populacao da primeira carta: ");
            scanf("%d", &populacao);
            printf("\nDigite a populacao da segunda carta: ");
            scanf("%d", &populacao2);
            pibPerCapta = (float)pib / populacao;
            pibPerCapta2 = (float)pib2 / populacao2;
            if (pibPerCapta > pibPerCapta2)
                {
                printf("O PIB per Capita da primeira cidade venceu!\n");
                carta1 ++;
                }else
                {
                printf("O PIB per Capita da segunda cidade venceu!\n");
                carta2 ++;
                };

        } else if (pib > pib2)
        {
            printf("O PIB da primeira cidade venceu!\n");
            carta1 ++;
        } else
        {
            printf("O PIB da segunda cidade venceu!\n");
            carta2 ++;
        };
        break;
    case 4:
        printf("Digite a populacao da primeira carta: ");
        scanf("%d", &populacao);
        printf("Digite a populacao da segunda carta: ");
        scanf("%d", &populacao2);
        if (populacao == populacao2)
        {
            printf("\nHouve um empate! Vamos desempatar calculando a densidade populacional!");
            printf("\nDigite o PIB da cidade da primeira carta: ");
            scanf("%f", &pib);
            printf("\nDigite o PIB da cidade da segunda carta: ");
            scanf("%f", &pib2);
            densidadePopulacional = (float)populacao / area;
            densidadePopulacional2 = (float)populacao2 / area2;
            if (densidadePopulacional < densidadePopulacional2)
            {
            printf("A densidade populacional da primeira cidade venceu!\n");
            carta1 ++;
            }else
            {
            printf("A densidade populacional da segunda cidade venceu!\n");
            carta2 ++;
            };
        } else if (populacao > populacao2)
        {
        printf("A população da primeira cidade venceu!\n");
        carta1 ++;
        }else
        {
        printf("A população da segunda cidade venceu!\n");
        carta2 ++;
        };
        break;
    break;
    default:
        printf("Opcao invalida");
        break;
    }
    /*  Comentei o super poder pois ainda não descobri um uso para ele
    superPoder = populacao + numeroDePontosTuristicos + area + pib + pibPerCapta + (1/densidadePopulacional);
    */
    return 0;
}
