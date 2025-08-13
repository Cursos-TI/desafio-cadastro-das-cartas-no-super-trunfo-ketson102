#include <stdio.h>

int main() {
    // Carta 1
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área em KM² da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Carta 2
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("\nDigite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área em KM² da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos carta 1
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // Cálculos carta 2
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição dos resultados
    printf("\n--- Carta 1 ---\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\n--- Carta 2 ---\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
}

