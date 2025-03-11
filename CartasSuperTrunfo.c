#include <stdio.h>

int main() {
    //Informações da Cidade 1 e Cidade 2:
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    printf("*** BEM VINDO AO JOGO DE CARTAS SUPER TRUNFO!! ***\n\n");

    printf("Primeiro, coletaremos informações sobre a cidade 1.\n\n");

        printf("Insira uma letra para o Estado 1:\n");
        scanf("%c", &estado1);
        printf("Insira o código para o Estado 1 - Ex: 01, 02, 03, 04:\n");
        scanf("%s", &codigo1);
        printf("Insira o nome da cidade:\n");
        scanf("%s", &cidade1);
        printf("Insira a população dessa cidade:\n");
        scanf("%d", &populacao1);
        printf("Insira a Área dessa cidade:\n");
        scanf("%f", &area1);
        printf("Insira o PIB dessa cidade:\n");
        scanf("%f", &pib1);
        printf("E por fim, insira quantos pontos turísticos tem nessa cidade:\n");
        scanf("%d", &pontos1);

    printf("\nAgora, coletaremos informações sobre a cidade 2.\n\n");

        printf("Insira uma letra para o Estado 2:\n");
        scanf(" %c", &estado2);
        printf("Insira o código para o Estado 2 - Ex: 01, 02, 03, 04:\n");
        scanf("%s", &codigo2);
        printf("Insira o nome da cidade 1:\n");
        scanf("%s", &cidade2);
        printf("Insira a população dessa cidade:\n");
        scanf("%d", &populacao2);
        printf("Insira a Área dessa cidade:\n");
        scanf("%f", &area2);
        printf("Insira o PIB dessa cidade:\n");
        scanf("%f", &pib2);
        printf("E por fim, insira quantos pontos turísticos tem nessa cidade:\n");
        scanf("%d", &pontos2);

        float pibpc1 = (populacao1 / pib1);
        float pibpc2 = (populacao2 / pib2);

        float densp1 = (populacao1 / area1);
        float densp2 = (populacao2 / area2);

    printf("\nFique agora com as estátisticas!\n\n");

        printf("*** Carta 1 ***\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %c%s\n", estado1, codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d Pessoas\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f Bilhões de Reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade populacional: %.1f hab/km²\n", densp1);
        printf("PIB Per Capita: %.3f Reais\n", pibpc1);

        printf("*** Carta 2 ***\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %c%s\n", estado2, codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d Pessoas\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f Bilhões de Reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade populacional: %.1f hab/km²\n", densp2);
        printf("PIB Per Capita: %.3f Reais\n", pibpc2);

    return 0;
}
