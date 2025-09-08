#include <stdio.h>

/*
    Programa: Cadastro de Cartas do Super Trunfo de Países
    Objetivo: Ler e exibir os dados de duas cartas (cidades) informados pelo usuário.
    Não utiliza estruturas de repetição ou decisão.
*/

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);
    getchar(); // Limpa o buffer após ler o char

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);
    getchar(); // Limpa o buffer após ler o código

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a População: ");
    scanf("%d", &populacao1);
    getchar(); // Limpa o buffer após ler o número

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);
    getchar();

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    getchar();

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar();

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%3s", codigo2);
    getchar();

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);
    getchar();

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    getchar();

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar();

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
