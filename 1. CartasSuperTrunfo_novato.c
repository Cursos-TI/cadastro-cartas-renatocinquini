#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    char codigo1[4], cidade1[20], estado1[20];
    int populacao1, pontos1;
    float area1, pib1;

    char codigo2[4], cidade2[20], estado2[20];
    int populacao2, pontos2;
    float area2, pib2;
    
    // Área para entrada de dados

    printf("Cadastro de Cartas Super Trunfo\n\n");

    printf("Carta 1\n");
   
    printf("Digite o nome do estado: \n");
    scanf(" %19[^\n]", estado1);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %19[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em Km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos1);
    
    printf("\n");
    printf("Carta 2\n");
    
    printf("Digite o nome do estado: \n");
    scanf(" %19[^\n]", estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %19[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em Km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos2);

    
    // Área para exibição dos dados da cidade

    printf("\n");
    printf("RESULTADOS:\n\n");
    
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d hab.\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Nº de Pontos Turísticos: %d\n", pontos1);

    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d hab.\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Nº de Pontos Turísticos: %d\n", pontos2);

    printf("\n");

    return 0;
}
