#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definindo a atributos da cidade//
typedef struct{
    char codigo[4]; //Código da Cidade(ex:A01)
    int população;
    float area; //Area em  km²
    float pib;  //PIB em Bilhões
    int pontos_turisticos;
}Cidade;

//Função para cadastrar uma cidade
void cadastrarCidade(Cidade*cidade) {
    printf("Digite o código da cidade (Ex A01, B02): ");
    scanf("%s", cidade->codigo);

    printf("Digite a população da cidade: ");
    scanf("%d", &cidade->população);

    printf("Digite a área da cidade: (em km²):");
    scanf("%f", &cidade ->area);

    printf("Digite o PIB da cidade: (em bilhões de R$):");
    scanf("%f", &cidade ->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);
}
