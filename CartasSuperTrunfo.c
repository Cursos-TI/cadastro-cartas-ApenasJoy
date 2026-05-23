#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    int populacao1, turisticos1;
    int populacao2, turisticos2;

    float area1, pib1, densidade1, capita1, superpoder1;
    float area2,  pib2, densidade2, capita2, superpoder2;

    char estado1[20], codigo1[20], cidade1[20];
    char estado2[20], codigo2[20], cidade2[20];

    int resultadoPo1, resultadoTu1, resultadoA1,  resultadoPib1, resultadoDen1, resultadoCap1, resultadoSup1;
    int resultadoPo2, resultadoTu2, resultadoA2,  resultadoPib2, resultadoDen2, resultadoCap2, resultadoSup2;

  // Área para entrada de dados

    //Dados da Primeira Carta

    printf("Digite o estado da Primeira Carta: ");
    scanf("%s", estado1);

    printf("Digite o código da Primeira Carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Primeira Carta: ");
    scanf("%s", cidade1);

    printf("Digite a população da Primeira Carta: ");
    scanf("%d", &populacao1);

    printf("Digite, em km², a área da Primeira Carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Primeira Carta: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Primeira Carta: ");
    scanf("%d", &turisticos1);

    //Dados da Segunda Carta

    printf("\nDigite o estado da Segunda Carta: ");
    scanf("%s", estado2);

    printf("Digite o código da Segunda Carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Segunda Carta: ");
    scanf("%s", cidade2);

    printf("Digite a população da Segunda Carta: ");
    scanf("%d", &populacao2);

    printf("Digite, em km², a área da Segunda Carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Segunda Carta: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Segunda Carta: ");
    scanf("%d", &turisticos2);

  //Calculando a densidade populacional, o PIB per capita e o super poder
    
    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;

    pib1 *= 1000000000;
    pib2 *= 1000000000;
    capita1 = pib1/(float)populacao1;
    capita2 = pib2/(float)populacao2;

    pib1 /= 1000000000;
    pib2 /= 1000000000;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)turisticos1 + capita1 + (1/densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)turisticos2 + capita2 + (1/densidade2);

    //Comparando os atributos das cartas
 
    resultadoPo1 = populacao1 > populacao2;
    resultadoA1 = area1 > area2;
    resultadoPib1 = pib1 > pib2;
    resultadoTu1 = turisticos1 > turisticos2;
    resultadoDen1 = densidade1 < densidade2;
    resultadoCap1 = capita1 > capita2;
    resultadoSup1 = superpoder1 > superpoder2;

    resultadoPo2 = populacao2 > populacao1;
    resultadoA2 = area2 > area1;
    resultadoPib2 = pib2 > pib1;
    resultadoTu2 = turisticos2 > turisticos1;
    resultadoDen2 = densidade2 < densidade1;
    resultadoCap2 = capita2 > capita1;
    resultadoSup2 = superpoder2 > superpoder1;
 
    // Área para exibição dos dados da cidade

    //Exibindo os dados da Primeira Carta

    printf("\nCarta 1 \n");

    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d \n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);
    printf("Super Poder: %.2f \n", superpoder1);

    //Exibindo os dados da Segunda Carta

    printf("\nCarta 2 \n");

    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d \n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f \n", superpoder2);
   
    //Exibindo o resultado das comparações

    printf("\nComparação de Cartas\n");
    printf("\nPopulação \nCarta 1: %d \nCarta 2: %d \n", resultadoPo1, resultadoPo2);
    printf("\nÁrea \nCarta 1: %d \nCarta 2: %d \n", resultadoA1, resultadoA2);
    printf("\nPIB \nCarta 1: %d \nCarta 2: %d \n", resultadoPib1, resultadoPib2);
    printf("\nPontos Turísticos \nCarta 1: %d \nCarta 2: %d \n", resultadoTu1, resultadoTu2);
    printf("\nDensidade Populacional \nCarta 1: %d \nCarta 2: %d \n", resultadoDen1, resultadoDen2);
    printf("\nPIB per Capita \nCarta 1: %d \nCarta 2: %d \n", resultadoCap1, resultadoCap2);
    printf("\nSuper Poder \nCarta 1: %d \nCarta 2: %d \n", resultadoSup1, resultadoSup2);

    return 0;
} 
