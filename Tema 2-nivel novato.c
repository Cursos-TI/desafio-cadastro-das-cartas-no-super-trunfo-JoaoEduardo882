#include <stdio.h>

int main() {
    // Definindo variáveis para os atributos de cada carta
    char estado1, estado2;                     // Oito estados representados por uma Letra de A a H
    char codigo1[5], codigo2[5];               // Códigos das Cartas
    char nomeCidade1[50], nomeCidade2[50];     // Nomes das Cidades
    unsigned long int populacao1, populacao2;  // População das Cidades
    float area1, area2;                        // Área das Cidades em km²
    float pib1, pib2;                          // PIB das Cidades
    int pontosturisticos1, pontosturisticos2;  // Número de pontos turísticos das cidades
    float densidade1, densidade2;              // Densidade Populacional
    float pib_per_capita1, pib_per_capita2;    // PIB per capita
    float atributo1, atributo2;                // Atributos usados para a comparação

    // Cadastro da primeira carta (Cidade 1)
    printf("\nCadastro da Carta 1: \n");

    printf("Digite o estado uma letra de (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cadastro da segunda carta (Cidade 2)
    printf("\nCadastro da Carta 2: \n");

    printf("Digite o estado uma letra de (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos da Densidade Populacional e PIB per Capita das duas cartas
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em reais, multiplicamos por 1 bilhão

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

    // Aqui, escolhemos o atributo PIB per Capita para a comparação
    atributo1 = pib_per_capita1;
    atributo2 = pib_per_capita2;

    // Exibição das cartas para verificação dos dados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Comparação dos atributos
    printf("\nComparação de cartas (Atributo: PIB per Capita):\n");

    printf("\nCarta 1 - %s (%s): %.2f reais\n", nomeCidade1, codigo1, atributo1);
    printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, codigo2, atributo2);

    // Comparação com base no atributo escolhido
    if (atributo1 > atributo2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (atributo1 < atributo2) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
