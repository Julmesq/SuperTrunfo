#include <stdio.h>
    //Desafio Supertrunfo 
int main () {
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1 = 0, pontos2 = 0;

    // Entrada de dados
    printf("Digite a populacao do pais 1: ");
    scanf("%d", &populacao1);
    printf("Digite a area do pais 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB do pais 1: ");
    scanf("%f", &pib1);

    printf("Digite a populacao do pais 2: ");
    scanf("%d", &populacao2);
    printf("Digite a area do pais 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB do pais 2: ");
    scanf("%f", &pib2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Comparações e pontuação
    if (densidade1 < densidade2)
        pontos1++;
    else if (densidade2 < densidade1)
        pontos2++;

    if (pib_per_capita1 > pib_per_capita2)
        pontos1++;
    else if (pib_per_capita2 > pib_per_capita1)
        pontos2++;

    // Resultados
    printf("\nDensidade demografica pais 1: %.2f\n", densidade1);
    printf("Densidade demografica pais 2: %.2f\n", densidade2);
    printf("PIB per capita pais 1: %.2f\n", pib_per_capita1);
    printf("PIB per capita pais 2: %.2f\n", pib_per_capita2);

    printf("\nPontos pais 1: %d\n", pontos1);
    printf("Pontos pais 2: %d\n", pontos2);

    if (pontos1 > pontos2)
        printf("Pais 1 vence!\n");
    else if (pontos2 > pontos1)
        printf("Pais 2 vence!\n");
    else
        printf("Empate!\n");

    return 0;
}
