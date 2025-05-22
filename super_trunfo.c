#include <stdio.h>
#include <string.h>

int main() {
    char estado1;
    char codigo1[30];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2;
    char codigo2[30];
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("Carta 1\n");

    printf("Estado nº1: ");
    scanf(" %c", &estado1);

    printf("Código da Carta nº1: ");
    scanf("%s", codigo1);

    getchar();  // Limpa ENTER

    printf("Nome nº1: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("População nº1: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Área nº1: ");
    scanf("%f", &area1);
    getchar();

    printf("PIB nº1: ");
    scanf("%f", &pib1);
    getchar();

    printf("Número de Pontos Turísticos nº1: ");
    scanf("%d", &pontos1);
    getchar();

    printf("\nCarta 2\n");

    printf("Estado nº2: ");
    scanf(" %c", &estado2);

    printf("Código da Carta nº2: ");
    scanf("%s", codigo2);

    getchar();  // Limpa ENTER

    printf("Nome nº2: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("População nº2: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Área nº2: ");
    scanf("%f", &area2);
    getchar();

    printf("PIB nº2: ");
    scanf("%f", &pib2);
    getchar();

    printf("Número de Pontos Turísticos nº2: ");
    scanf("%d", &pontos2);
    getchar();

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
