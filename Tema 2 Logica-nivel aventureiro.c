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

    //Variáveis para armazenar a escolha do usuário e o atributo selecionado
    int escolha;

    // Exibição do menu
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite a sua escolha (1-5): ");
    scanf("%d", &escolha);

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

    // Lógica de comparação baseada na escolha do usuário
    switch (escolha) {
        case 1: {  // Comparação de População
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s (%s): %lu habitantes\n", nomeCidade1, codigo1, populacao1);
            printf("Carta 2 - %s (%s): %lu habitantes\n", nomeCidade2, codigo2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao1 < populacao2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        case 2: {  // Comparação de Área
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, codigo1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, codigo2, area2);
            
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area1 < area2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        case 3: {  // Comparação de PIB
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s (%s): R$ %.2f bilhões\n", nomeCidade1, codigo1, pib1);
            printf("Carta 2 - %s (%s): R$ %.2f bilhões\n", nomeCidade2, codigo2, pib2);
            
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib1 < pib2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        case 4: {  // Comparação de Pontos Turísticos
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", nomeCidade1, codigo1, pontosturisticos1);
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", nomeCidade2, codigo2, pontosturisticos2);
            
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosturisticos1 < pontosturisticos2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        case 5: {  // Comparação de Densidade Populacional
            printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, codigo1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, codigo2, densidade2);
            
            if (densidade1 < densidade2) {  // Menor densidade vence
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (densidade1 > densidade2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        default:
            printf("Opção inválida. Por favor, escolha uma opção entre 1 e 5.\n");
            break;
    }
    
    return 0;

}