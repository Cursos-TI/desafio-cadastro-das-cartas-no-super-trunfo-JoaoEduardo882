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

    // Variáveis para armazenar a escolha do usuário e os atributos selecionados
    int escolha1, escolha2;

    // Exibição do menu para a primeira escolha
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite a sua escolha (1-5): ");
    scanf("%d", &escolha1);

    // Exibição do menu para a segunda escolha (garantindo que não seja o mesmo atributo)
    printf("\nEscolha o segundo atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");

    //Impedir a escolha do mesmo atributo duas vezes
    do {
        printf("Digite a sua escolha (1-5), diferente da primeira: ");
        scanf("%d", &escolha2);
    } while (escolha1 == escolha2);

    // Lógica de comparação
    float soma1 = 0, soma2 = 0;
    float valor1, valor2;

    // Comparação do primeiro atributo escolhido
    printf("\nComparação entre os atributos escolhidos:\n");
    switch (escolha1) {
        case 1:  // População
            valor1 = populacao1;
            valor2 = populacao2;
            printf("Atributo 1: População\n");
            break;
        case 2:  // Área
            valor1 = area1;
            valor2 = area2;
            printf("Atributo 1: Área\n");
            break;
        case 3:  // PIB
            valor1 = pib1;
            valor2 = pib2;
            printf("Atributo 1: PIB\n");
            break;
        case 4:  // Pontos Turísticos
            valor1 = pontosturisticos1;
            valor2 = pontosturisticos2;
            printf("Atributo 1: Pontos Turísticos\n");
            break;
        case 5:  // Densidade Populacional
            valor1 = densidade1;
            valor2 = densidade2;
            printf("Atributo 1: Densidade Populacional\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, codigo1, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, codigo2, valor2);

    if (escolha1 == 5) {  // Densidade Populacional (menor valor vence)
        soma1 += (valor1 < valor2) ? valor1 : 0;
        soma2 += (valor2 < valor1) ? valor2 : 0;
    } else {  // Maior valor vence para os outros atributos
        soma1 += (valor1 > valor2) ? valor1 : 0;
        soma2 += (valor2 > valor1) ? valor2 : 0;
    }

    // Comparação do segundo atributo escolhido
    switch (escolha2) {
        case 1:  // População
            valor1 = populacao1;
            valor2 = populacao2;
            printf("\nAtributo 2: População\n");
            break;
        case 2:  // Área
            valor1 = area1;
            valor2 = area2;
            printf("\nAtributo 2: Área\n");
            break;
        case 3:  // PIB
            valor1 = pib1;
            valor2 = pib2;
            printf("\nAtributo 2: PIB\n");
            break;
        case 4:  // Pontos Turísticos
            valor1 = pontosturisticos1;
            valor2 = pontosturisticos2;
            printf("\nAtributo 2: Pontos Turísticos\n");
            break;
        case 5:  // Densidade Populacional
            valor1 = densidade1;
            valor2 = densidade2;
            printf("\nAtributo 2: Densidade Populacional\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, codigo1, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, codigo2, valor2);

    if (escolha2 == 5) {  // Densidade Populacional (menor valor vence)
        soma1 += (valor1 < valor2) ? valor1 : 0;
        soma2 += (valor2 < valor1) ? valor2 : 0;
    } else {  // Maior valor vence para os outros atributos
        soma1 += (valor1 > valor2) ? valor1 : 0;
        soma2 += (valor2 > valor1) ? valor2 : 0;
    }

    // Exibição da soma dos atributos
    printf("\nSoma dos atributos para Carta 1 (%s): %.2f\n", nomeCidade1, soma1);
    printf("Soma dos atributos para Carta 2 (%s): %.2f\n", nomeCidade2, soma2);

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

    // Determinando o vencedor
    if (soma1 > soma2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (soma1 < soma2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;

}