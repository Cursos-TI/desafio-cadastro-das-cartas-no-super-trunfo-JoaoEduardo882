#include <stdio.h>
#include <string.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

int main() {
    //Variaveis para armazenar os dados das cidades
    char codigo[4];            //Codigo da cidade (ex: A01, B02)
    char nome[50];             //Nome da cidade
    int populacao;             //População da cidade
    float area;                //Area da cidade em km²
    float pib;                 //PIB da população em bilhões
    int pontos_turisticos;     //Numero de Pontos Turisticos
    char estado;               //Letra do Estado (A, B, C, ..., H)
    int cidadeNum;             //Numero da Cidade (1, 2, 3, 4)
    int i, j;

    //Loop para Cadastrar cidades de A a H, e de 1 a 4
    for (i=0; i < NUM_ESTADOS; i++) {
        estado = 'A' + i; //Atribui a Letra do estado (A, B, C, ..., H)

        for (j=1; i < NUM_CIDADES; j++){
         cidadeNum = j;
          

          //Gerar o código da cidade (ex: A01, B02)
          sprintf(codigo, "%c%02d", estado , cidadeNum);


          //Solicitar dados do usuário
          printf("\nCadastro da cidade %s: \n", codigo);


          printf("Nome da Cidade: ");
          getchar(); //Limpar o buffer de entrada
          fgets(nome, 50, stdin);
          nome[strcspn(nome, "\n")] = '\0'; //Remover o \n no final do nome

          printf("População: ");
          scanf("%d", &populacao);

          printf("Area (em km²):");
          scanf("%f", &area);

          printf("PIB (em bilhões): ");
          scanf("%f", &pib);

          printf("Numero de pontos turísticos: ");
          scanf("%d", &pontos_turisticos);

          //Exibir os dados da cidades de forma organizada
          printf("\nInformações da cidade %s:\n", codigo);
          printf("Nome: %s\n", nome);
          printf("População: %d\n", populacao);
          printf("Área: %.2f km²\n", area);
          printf("PIB: %.2f bilhões\n", pib);
          printf("Pontos turisticos: %d\n", pontos_turisticos);
    
      }

    }

    return 0;
}



