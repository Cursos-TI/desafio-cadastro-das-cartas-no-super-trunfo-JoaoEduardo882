#include <stdio.h>
#include <stdlib.h>

// Definindo o número de estados e cidades
#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para armazenar os dados de cada cidade
typedef struct {
    char codigo[5];   // Código da cidade (ex: A01, B02)
    char nome[100];    // Nome da cidade
    long populacao;    // População
    float area;        // Área em km²
    float pib;         // PIB em bilhões de USD
    int pontos_turisticos;  // Número de pontos turísticos
    
    // Propriedades calculadas
    float densidade_populacional;  // Densidade populacional
    float pib_per_capita;          // PIB per capita
    float super_poder;             // Soma das propriedades
} Cidade;

// Função para cadastrar as cidades
void cadastrar_cidades(Cidade cartas[NUM_ESTADOS][NUM_CIDADES]) {
    for (char estado = 'A'; estado <= 'H'; estado++) {
        for (int i = 1; i <= 4; i++) {
            // Definir o código da cidade (ex: A01, A02, ...)
            sprintf(cartas[estado - 'A'][i - 1].codigo, "%c%02d", estado, i);

            // Pedir para o usuário preencher os dados da cidade
            printf("Cadastro da cidade %c%02d:\n", estado, i);
            printf("Nome da cidade: ");
            scanf(" %[^\n]", cartas[estado - 'A'][i - 1].nome);  // Lê o nome da cidade (incluindo espaços)
            printf("População: ");
            scanf("%ld", &cartas[estado - 'A'][i - 1].populacao);
            printf("Área (km²): ");
            scanf("%f", &cartas[estado - 'A'][i - 1].area);
            printf("PIB (bilhões de USD): ");
            scanf("%f", &cartas[estado - 'A'][i - 1].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[estado - 'A'][i - 1].pontos_turisticos);
            printf("\n");

            // Calcular as propriedades calculadas
            if (cartas[estado - 'A'][i - 1].area > 0) {
                cartas[estado - 'A'][i - 1].densidade_populacional = (float)cartas[estado - 'A'][i - 1].populacao / cartas[estado - 'A'][i - 1].area;
            } else {
                cartas[estado - 'A'][i - 1].densidade_populacional = 0.0;
            }

            if (cartas[estado - 'A'][i - 1].populacao > 0) {
                cartas[estado - 'A'][i - 1].pib_per_capita = cartas[estado - 'A'][i - 1].pib * 1000000000 / cartas[estado - 'A'][i - 1].populacao;
            } else {
                cartas[estado - 'A'][i - 1].pib_per_capita = 0.0;
            }

            // Calcular o Super Poder: soma de todas as propriedades
            cartas[estado - 'A'][i - 1].super_poder = cartas[estado - 'A'][i - 1].populacao + cartas[estado - 'A'][i - 1].area
                                                     + cartas[estado - 'A'][i - 1].pib
                                                     + cartas[estado - 'A'][i - 1].pontos_turisticos
                                                     + cartas[estado - 'A'][i - 1].pib_per_capita
                                                     + cartas[estado - 'A'][i - 1].densidade_populacional;
        }
    }
}

// Função para comparar duas cartas e determinar o vencedor
void comparar_cartas(Cidade carta1, Cidade carta2) {
    int vitoria1 = 0, vitoria2 = 0;

    // Comparando a densidade populacional (menor é melhor)
    if (carta1.densidade_populacional < carta2.densidade_populacional) {
        vitoria1++;
        printf("Densidade Populacional: Cidade %s venceu!\n", carta1.nome);
    } else if (carta1.densidade_populacional > carta2.densidade_populacional) {
        vitoria2++;
        printf("Densidade Populacional: Cidade %s venceu!\n", carta2.nome);
    } else {
        printf("Densidade Populacional: Empate!\n");
    }

    // Comparando as outras propriedades (maior é melhor)
    if (carta1.populacao > carta2.populacao) {
        vitoria1++;
        printf("População: Cidade %s venceu!\n", carta1.nome);
    } else if (carta1.populacao < carta2.populacao) {
        vitoria2++;
        printf("População: Cidade %s venceu!\n", carta2.nome);
    } else {
        printf("População: Empate!\n");
    }

    if (carta1.area > carta2.area) {
        vitoria1++;
        printf("Área: Cidade %s venceu!\n", carta1.nome);
    } else if (carta1.area < carta2.area) {
        vitoria2++;
        printf("Área: Cidade %s venceu!\n", carta2.nome);
    } else {
        printf("Área: Empate!\n");
    }

    if (carta1.pib > carta2.pib) {
        vitoria1++;
        printf("PIB: Cidade %s venceu!\n", carta1.nome);
    } else if (carta1.pib < carta2.pib) {
        vitoria2++;
        printf("PIB: Cidade %s venceu!\n", carta2.nome);
    } else {
        printf("PIB: Empate!\n");
    }

    if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
        vitoria1++;
        printf("Pontos turísticos: Cidade %s venceu!\n", carta1.nome);
    } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
        vitoria2++;
        printf("Pontos turísticos: Cidade %s venceu!\n", carta2.nome);
    } else {
        printf("Pontos turísticos: Empate!\n");
    }

    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        vitoria1++;
        printf("PIB per Capita: Cidade %s venceu!\n", carta1.nome);
    } else if (carta1.pib_per_capita < carta2.pib_per_capita) {
        vitoria2++;
        printf("PIB per Capita: Cidade %s venceu!\n", carta2.nome);
    } else {
        printf("PIB per Capita: Empate!\n");
    }

    if (carta1.super_poder > carta2.super_poder) {
        vitoria1++;
        printf("Super Poder: Cidade %s venceu!\n", carta1.nome);
    } else if (carta1.super_poder < carta2.super_poder) {
        vitoria2++;
        printf("Super Poder: Cidade %s venceu!\n", carta2.nome);
    } else {
        printf("Super Poder: Empate!\n");
    }

    // Determinando o vencedor geral
    if (vitoria1 > vitoria2) {
        printf("\nCidade %s venceu a comparação geral!\n", carta1.nome);
    } else if (vitoria2 > vitoria1) {
        printf("\nCidade %s venceu a comparação geral!\n", carta2.nome);
    } else {
        printf("\nEmpate geral!\n");
    }
}

// Função para exibir os dados das cartas cadastradas
void exibir_cartas(Cidade cartas[NUM_ESTADOS][NUM_CIDADES]) {
    printf("\n------------------- Cartas Cadastradas -------------------\n");
    for (char estado = 'A'; estado <= 'H'; estado++) {
        for (int i = 1; i <= 4; i++) {
            printf("\nCidade: %c%02d\n", estado, i);
            printf("Nome: %s\n", cartas[estado - 'A'][i - 1].nome);
            printf("Código: %s\n", cartas[estado - 'A'][i - 1].codigo);
            printf("População: %ld\n", cartas[estado - 'A'][i - 1].populacao);
            printf("Área: %.2f km²\n", cartas[estado - 'A'][i - 1].area);
            printf("PIB: %.2f bilhões de USD\n", cartas[estado - 'A'][i - 1].pib);
            printf("Pontos turísticos: %d\n", cartas[estado - 'A'][i - 1].pontos_turisticos);
            printf("Densidade Populacional: %.2f habitantes/km²\n", cartas[estado - 'A'][i - 1].densidade_populacional);
            printf("PIB per Capita: %.2f USD\n", cartas[estado - 'A'][i - 1].pib_per_capita);
            printf("Super Poder: %.2f\n", cartas[estado - 'A'][i - 1].super_poder);
            printf("--------------------------------------------------------\n");
        }
    }
}

int main() {
    // Matriz de cartas de cidades, sendo 8 estados e 4 cidades por estado
    Cidade cartas[NUM_ESTADOS][NUM_CIDADES];

    printf("Bem-vindo ao cadastro do jogo Super Trunfo - Países!\n");

    // Cadastrar as cidades
    cadastrar_cidades(cartas);

    // Exibir as cartas cadastradas
    exibir_cartas(cartas);

    // Comparação de duas cartas
    printf("\nDigite o código das duas cidades a serem comparadas (ex: A01, A02):\n");
    char codigo1[5], codigo2[5];
    scanf("%s %s", codigo1, codigo2);

    // Encontrar as cartas correspondentes aos códigos
    Cidade *carta1 = NULL, *carta2 = NULL;
    for (char estado = 'A'; estado <= 'H'; estado++) {
        for (int i = 1; i <= 4; i++) {
            if (strcmp(cartas[estado - 'A'][i - 1].codigo, codigo1) == 0) {
                carta1 = &cartas[estado - 'A'][i - 1];
            }
            if (strcmp(cartas[estado - 'A'][i - 1].codigo, codigo2) == 0) {
                carta2 = &cartas[estado - 'A'][i - 1];
            }
        }
    }

    if (carta1 && carta2) {
        comparar_cartas(*carta1, *carta2);
    } else {
        printf("Códigos das cidades inválidos!\n");
    }

    return 0;
}
