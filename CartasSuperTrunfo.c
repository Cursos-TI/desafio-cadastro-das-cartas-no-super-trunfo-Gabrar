#include <stdio.h>

int main(){
    //Informações da Cidade 1 e Cidade 2:
    char estado1[10] = "Ceará", estado2[10] = "Ceará";
    int codigo1 = 01, codigo2 = 02;
    char cidade1[20] = "ICÓ", cidade2[20] = "CRATO";
    int populacao1 = 64802, populacao2 = 131150;
    float area1 = 1.138, area2 = 1.872;
    float pib1 = 737.5, pib2 = 1.9;
    int pontos1 = 12, pontos2 = 50;
    float densd1 = populacao1 / pib1;
    float densd2 = populacao2 / pib2;
    int opcao, opcao2, opcao3;
    
    // IMPRESSÃO DA CARTA 1
    printf("\n****************** CARTA 1 ******************\n");
        printf("Estado: %s\n", estado1);
        printf("Código: A%d\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.3fkm²\n", area1);
        printf("PIB: R$%.1f Milhões\n", pib1);
        printf("Pontos Turísticos: %d\n", pontos1);
        printf("Densidade Demográfica: %.3f\n\n", densd1);

    // IMPRESSÃO DA CARTA 2
    printf("\n****************** CARTA 2 ******************\n");
        printf("Estado: %s\n", estado2);
        printf("Código: A%d\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.3fkm²\n", area2);
        printf("PIB: R$%.1f Bilhões\n", pib2);
        printf("Pontos Turísticos: %d\n", pontos2);
        printf("Densidade Demográfica: %.3f\n\n", densd2);

    MenuIniciar:

    // MENU DO JOGO
    printf("Menu Inicial\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
        scanf("%d", &opcao);

            
        switch (opcao)
        {
            Atributos:      // SWITCH PARA AS OPÇÕES DE ATRIBUTOS
        case 1:
            printf("Esolha qual atributo você deseja comparar\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
            printf("6. Voltar pro Menu principal\n");
            printf("Escolha uma opção: ");
             scanf("%d", &opcao2);
            
            switch (opcao2)
            {
            case 1:
                printf("População 1: %d - População 2: %d\n", populacao1, populacao2);
                populacao1 > populacao2 ? printf("Cidade 1 Ganhou!!\n\n") : printf("Cidade 2 Ganhou!!\n\n");

                goto Atributos;
                break;
            case 2:
                printf("Área 1: %.3f - Área 2: %.3f\n", area1, area2);
                area1 > area2 ? printf("Cidade 1 Ganhou!!") : printf("Cidade 2 Ganhou!!");

                goto Atributos;
                break;
            case 3:
                printf("PIB 1: %.1f - PIB 2: %.1f\n", pib1, pib2);
                pib1 < pib2 ? printf("Cidade 1 Ganhou!!\n\n") : printf("Cidade 2 Ganhou!!\n\n");

                goto Atributos;
                break;
            case 4:
                printf("Pontos Turísticos: %d - Pontos Turísticos: %d\n", pontos1, pontos2);
                pontos1 > pontos2 ? printf("Cidade 1 Ganhou!!\n\n") : printf("Cidade 2 Ganhou!!\n\n");

                goto Atributos;
                break;
            case 5:
                printf("Densidade Demográfica: %.3f - Densidade Demográfica: %.3f", densd1, densd2);
                densd1 > densd2 ? printf("Cidade 1 Ganhou!!\n\n") : printf("Cidade 2 Ganhou!!\n\n");

                goto Atributos;
                break;
            case 6:
                goto MenuIniciar;
            default:
                printf("Opção inválida!\n");
                break;
            }
            break;
        case 2:     // SWITCH PARA AS REGRAS
            printf("1. Regra 1\n");
            printf("2. Regra 2\n");
            printf("3. Regra 3\n");
            printf("4. Voltar para o menu inicar\n");
            scanf("%d", &opcao3);

            switch (opcao3)
            {
            case 1:
                /* code */
                break;
            case 2:
                break;
            case 3: 
                break;
            case 4:
                goto MenuIniciar;       // VOLTA PARA O MENU INICIAR
                break;
            default:
                break;
            }
            break;
        case 3:
            return 0;
            break;
        default:
            break;
        }
}