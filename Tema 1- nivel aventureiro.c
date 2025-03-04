#include <stdio.h>
#include <string.h>
int main(){
    //Definindo variaveis para os atributos de cada carta
    char estado1, estado2;                     //Oito estados representados por uma Letra de A a H
    char codigo1[5], codigo2[5];               //Codigos das Cartas
    char nomeCidade1[50], nomeCidade2[50];     //Nomes das Cidades
    int populacao1, populacao2;                //População das Cidades
    float area1, area2;                        //Área das Cidades em km²
    float pib1, pib2;                          //PIB das Cidades
    int pontosturisticos1, pontosturisticos2;  //Numeros de pontos turisticos das cidades
    float densidade1, densidade2;              //Densidade Populacional
    float pib_per_capita1, pib_per_capita2;    //PIB per capita

    //Cadastro da primeira carta(Cidade 1)
    printf("\n Cadastro da Carta 1: \n");

    printf("Digite o estado uma letra de (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²):  ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões)  ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:  ");
    scanf("%d", &pontosturisticos2);

    //Cálculos da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;



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