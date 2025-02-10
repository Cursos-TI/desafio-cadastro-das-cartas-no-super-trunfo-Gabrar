#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigodacidade = 2305407;
    char nome[20] = "Icó";
    float populacao = 68.303;
    int area = 1865862;
    float pib = 10797.31;
    int pontos = 20;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Qual o código da Cidade?\n'");
    scanf("%d", &codigodacidade);

    printf("Qual o Nome da Cidade?\n");
    scanf("%s", &nome);

    printf("Qual é a população de Icó?\n");
    scanf("%f", &populacao);

    printf("Qual é a área de Icó?\n");
    scanf(" %d", &area);

    printf("Qual o PIB de Icó?\n");
    scanf("%f", &pib);

    printf("Quantos Pontos Turísticos tem em Icó?\n");
    scanf("%d", &pontos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da Cidade: %d\nNome da Cidade: %s\nPopulação de Icó: %.3f\n", codigodacidade, nome, populacao);
    printf("Área de Icó: %dkm²\nPib de Icó: R$%.2f\nQuantos Pontos Turísticos tem em Icó: %d", area, pib, pontos);

    return 0;
}
