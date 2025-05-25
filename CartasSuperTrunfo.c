#include <stdio.h>

float calculePibPerCapita(int population, float pib){
    float result = pib/population;
    printf("PIB per Capita: %2.f reais\n", result);
    return result;
}

void calculeDesidadePopulacional(int population, float area){
    float result = area/population;
    printf("Densidade Populacional: %2.f hab/km²\n", result);
}
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    char estado1;
    char nomeCidade1[20];
    float pib1;
    int pontosTuristicos1;

    // carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    char estado2;
    char nomeCidade2[20];
    float pib2;
    int pontosTuristicos2;

    printf("Cadastro da primeira carta:\n");
    printf("Código da cidade: ");
    scanf("%s", codigo1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("Estado: ");
    scanf("%f", &estado1);

    printf("Nome da cidade: ");
    scanf("%f", &nomeCidade1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da segunda carta:\n");
    printf("Código da cidade: ");
    scanf("%s", codigo2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n--- DADOS DAS CARTAS ---\n");

    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    calculeDesidadePopulacional(populacao1, pib1);
    calculePibPerCapita(populacao1, area1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n km²", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    calculeDesidadePopulacional(populacao2, pib2);
    calculePibPerCapita(populacao2, area2);
    return 0;
}