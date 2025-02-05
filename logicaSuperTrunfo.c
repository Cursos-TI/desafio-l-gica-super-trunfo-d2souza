#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //DECLARAÇÃO DE VARIAVEIS CARTA 1
    int populacao, carta1, numeroDePontosTuristicos, codigoDaCarta;
    float area;
    float pib;
    float densidadePopulacional;
    float pibPerCapta;
    long double superPoder;
    char estado;
    char nomeDaCidade[30];

    //DECLARAÇÃO DE VARIAVEIS CARTA 2
    int populacao2, carta2, numeroDePontosTuristicos2, codigoDaCarta2;
    float area2;
    float pib2;
    float densidadePopulacional2;
    float pibPerCapta2;
    long double superPoder2;
    char estado2;
    char nomeDaCidade2[30];
    
    // ENTRADAS DO USUÁRIO PARA A CARTA 1

    printf("Digite o estado da primeira carta(de 'A' a 'H'): ");
    scanf("%c", &estado);

    printf("Digite a cidade da primeira carta(de 1 a 4): ");
    scanf("%d", &codigoDaCarta);

    printf("Digite o numero de Pontos Turisticos da primeira carta: ");
    scanf("%d", &numeroDePontosTuristicos);

    printf("Digite a area total da cidade em quilometros quadrados da primeira carta: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade da primeira carta: ");
    scanf("%f", &pib);

    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &populacao);

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %29[^\n]", &nomeDaCidade);

    //CALCULOS DE DENSIDADE POPULACIONAL E PIB PER CAPTA
    densidadePopulacional = (float)populacao / area;
    pibPerCapta = (float)pib / populacao;
    superPoder = populacao + numeroDePontosTuristicos + area + pib + pibPerCapta + (1/densidadePopulacional);

// ENTRADAS DO USUÁRIO PARA A CARTA 2

    printf("********************************************************\n");
    getchar();

    printf("Digite o estado da segunda carta(de 'A' a 'H'): ");
    scanf("%c", &estado2);

    printf("Digite a cidade da segunda carta(de 1 a 4): ");
    scanf("%d", &codigoDaCarta2);

    printf("Digite o numero de Pontos Turisticos da segunda carta: ");
    scanf("%d", &numeroDePontosTuristicos2);

    printf("Digite a area total da cidade em quilometros quadrados da segunda carta: ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB da cidade da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %29[^\n]", &nomeDaCidade2);

    //CALCULOS DE DENSIDADE POPULACIONAL E PIB PER CAPTA DA SEGUNDA CARTA
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapta2 = (float)pib2 / populacao2;
    superPoder2 = populacao2 + numeroDePontosTuristicos2 + area2 + pib2 + pibPerCapta2 + (1/densidadePopulacional2);

   printf("******************************************\n");
    if (populacao > populacao2)
    {
        printf("A população da primeira cidade venceu\n!");
        carta1 ++;
    }else
    {
        printf("A população da segunda cidade venceu\n!");
        carta2 ++;
    };

    if (numeroDePontosTuristicos > numeroDePontosTuristicos2)
    {
        printf("O numero de pontos turisticos da primeira cidade venceu\n!");
        carta1 ++;
    }else
    {
        printf("O numero de pontos turisticos da segunda cidade venceu\n!");
        carta2 ++;
    };

    if (area > area2)
    {
        printf("A area da primeira cidade venceu\n!");
        carta1 ++;
    }else
    {
        printf("A area da segunda cidade venceu\n!");
        carta2 ++;
    };

    if (pib > pib2)
    {
        printf("O PIB da primeira cidade venceu\n!");
        carta1 ++;
    }else
    {
        printf("O PIB da segunda cidade venceu\n!");
        carta2 ++;
    };

    if (densidadePopulacional < densidadePopulacional2)
    {
        printf("A densidade populacional da primeira cidade venceu\n!");
        carta1 ++;
    }else
    {
        printf("A densidade populacional da segunda cidade venceu\n!");
        carta2 ++;
    };

    if (populacao > populacao2)
    {
        printf("A população da primeira cidade venceu\n!");
        carta1 ++;
    }else
    {
        printf("A população da segunda cidade venceu\n!");
        carta2 ++;
    };

    if (pibPerCapta > pibPerCapta2)
    {
        printf("O PIB per Capita da primeira cidade venceu\n!");
        carta1 ++;
    }else
    {
        printf("O PIB per Capita da segunda cidade venceu\n!");
        carta2 ++;
    };

    if (superPoder > superPoder2)
    {
        printf("O Super Poder da primeira cidade venceu\n!");
        carta1 ++;
    }else
    {
        printf("O Super Poder da segunda cidade venceu\n!");
        carta2 ++;
    };
    printf("**********************************************\n");

    if (carta1 > carta2)
    {
        printf("A Cidade %s venceu!!!!\n", nomeDaCidade);
    }else{
        printf("A Cidade %s venceu!!!!\n", nomeDaCidade2);
    };

    return 0;
}
