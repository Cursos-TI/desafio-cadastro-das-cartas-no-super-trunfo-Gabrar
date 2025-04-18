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
        printf("PIB Per Capita: %.3f Reais\n\n\n", pibpc2);

        double superPoder1 = populacao1 + area1 + pib1 + pontos1 + densp1 + pibpc1;
        double superPoder2 = populacao2 + area2 + pib2 + pontos2 + densp2 + pibpc2;

        printf("*** COMPARAÇÃO DE CARTAS ***\n\n");
        printf("População: Carta 1 venceu: (%d)\n", populacao1 > populacao2);
        printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", densp1 > densp2);
        printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpc1 > pibpc2);
        printf("Super Poder: Carta 1 venceu (%d)\n\n", superPoder1 > superPoder2);
        printf("OBS. (1) = VERDADEIRO / (0) = FALSO\n\n");

        int opcoes, regras;

        printf("### VAMOS COMPARAR AS CARTAS ###\n\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcoes);

        switch (opcoes) {
        case 1:
            if (populacao1 > populacao2){
                printf("CIDADE 1 GANHOU!!\n");
                printf("População 1: %d - Populacão 2: %d", populacao1, populacao2);
            } else {
                printf("CIDADE 2 GANHOU!!\n");
                printf("População 1: %d - Populacão 2: %d", populacao1, populacao2);
            }
            break;
        case 2:
            if (area1 > area2){
                printf("CIDADE 1 GANHOU!!\n");
                printf("Área 1: %f - Área 2: %f", area1, area2);
            } else {
                printf("CIDADE 2 GANHOU!!\n");
                printf("Área 1: %f - Área 2: %f ", area1, area2);
            }
            break;
        case 3:
            if (pib1 > pib2){
                printf("CIDADE 1 GANHOU!!\n");
                printf("PIB 1: %f - PIB 2: %f", pib1, pib2);
            } else {
                printf("CIDADE 2 GANHOU!!\n");
                printf("PIB 1: %f - PIB 2: %f", pib1, pib2);
            }
            break;
        case 4:
            if (pontos1 > pontos2) {
                printf("CIDADE 1 GANHOU!!\n");
                printf("Pontor Turísticos 1: %d - Pontos Turísticos 2: %d", pontos1, pontos2);
            } else {
                printf("CIDADE 2 GANHOU!!\n");
                printf("Pontor Turísticos 1: %d - Pontos Turísticos 2: %d", pontos1, pontos2);
            }
            break;
        case 5:
            if (densp1 > densp2) {
                printf("CIDADE 1 GANHOU!!\n");
                printf("Densidade Demográfica 1: %f - Densidade Demográfica 2: %f", densp1, densp2);
            } else {
                printf("CIDADE 2 GANHOU!!\n");
                printf("Densidade Demográfica 1: %f - Densidade Demográfica 2: %f", densp1, densp2);
            }
        }

    return 0;
}