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
        }
    }
}

// Função para exibir os dados das cidades cadastradas
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
            
            // Exibir as propriedades calculadas
            printf("Densidade Populacional: %.2f habitantes/km²\n", cartas[estado - 'A'][i - 1].densidade_populacional);
            printf("PIB per Capita: %.2f USD\n", cartas[estado - 'A'][i - 1].pib_per_capita);
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

    return 0;
}
