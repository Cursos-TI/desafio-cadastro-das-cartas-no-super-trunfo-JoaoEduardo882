#include <stdio.h>
int main(){
    //Definindo variaveis para os atributos de cada carta
    char estado1, estado2;                     //Oito estados representados por uma Letra de A a H
    char codigo1[5], codigo2[5];               //Codigos das Cartas
    char nomeCidade1[50], nomeCidade2[50];     //Nomes das Cidades
    unsigned long int populacao1, populacao2;  //População das Cidades
    float area1, area2;                        //Área das Cidades em km²
    float pib1, pib2;                          //PIB das Cidades
    int pontosturisticos1, pontosturisticos2;  //Numeros de pontos turisticos das cidades
    int pontos1, pontos2;                      //Pontos
    float densidade1, densidade2;              //Densidade Populacional
    float pib_per_capita1, pib_per_capita2;   //PIB per capita
    float super_poder1, super_poder2;         //Super Poder das Cartas

    //Cadastro da primeira carta(Cidade 1)
    printf("\n Cadastro da Carta 1: \n");

    printf("Digite o estado uma letra de (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²):  ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões)  ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:  ");
    scanf("%d", &pontosturisticos1);

    //Cadastro da segunda carta(Cidade 2)
    printf("\n Cadastro da Carta 2: \n");

    printf("Digite o estado uma letra de (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²):  ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões)  ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:  ");
    scanf("%d", &pontosturisticos2);

    //Cálculos da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em reais, multiplicamos por 1 bilhão

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

    //Cálculo do Super Poder (somatório dos atributos)
    super_poder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos2 + pib_per_capita2 + (1 / densidade2);

    // Comparações entre os atributos
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    // Comparação de Área
    if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    // Comparação de PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    // Comparação de Pontos Turísticos
    if (pontos1 > pontos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    // Comparação de Densidade Populacional
    if (densidade1 < densidade2) { // Menor densidade é melhor
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    // Comparação de PIB per Capita
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    // Comparação de Super Poder
    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
    
    // Exibição dos dados cadastrados das duas cartas
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: R$ %f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);


    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: R$ %f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);


    return 0;


}