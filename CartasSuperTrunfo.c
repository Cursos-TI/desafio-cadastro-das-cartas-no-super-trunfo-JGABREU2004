#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){

    // iniciando o desafio do Super Trunfo
    // inserindo as váriaveis e atributos

    char estado;
    char codigo_carta[20];
    char nome_cidade[20];
    int populacao, pontos_turisticos;
    float area_km, pib;

    // Digitar os dados da Carta 1

    printf("Carta 1 \n");
    printf("Digite o estado: \n"); // Digitar o código do estado da Carta 1
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n"); // Digitar o código da Carta 1
    scanf("%s", &codigo_carta);

    printf("Digite a cidade: \n"); // Digitar o nome da cidade Carta 1
    scanf("%s", &nome_cidade);

    printf("Digite a população: \n"); // Digitar a população da cidade da Carta 1
    scanf("%d", &populacao);

    printf("Digite a área em Km²: \n"); // Digitar a area em Km² da cidade da Carta 1
    scanf("%f", &area_km);

    printf("Digite o PIB: \n"); // Digitar o PIB da cidade da Carta 1
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turístico: \n"); // Digitar a quantidade de pontos turísticos da cidade da carta 1
    scanf("%d", &pontos_turisticos);

    // Agora vamos fazer a impressão dos dados da Carta 1
    
    printf("Carta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %.2f\n", area_km);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    // Digitar os dados da Carta 2

    printf("Carta 2 \n");
    printf("Digite o estado: \n"); // Digitar o código do estado da Carta 2
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n"); // Digitar o código da Carta 2
    scanf("%s", &codigo_carta);

    printf("Digite a cidade: \n"); // Digitar o nome da cidade Carta 2
    scanf("%s", &nome_cidade);

    printf("Digite a população: \n"); // Digitar a população da cidade da Carta 2
    scanf("%d", &populacao);

    printf("Digite a área em Km²: \n"); // Digitar a area em Km² da cidade da Carta 2
    scanf("%f", &area_km);

    printf("Digite o PIB: \n"); // Digitar o PIB da cidade da Carta 2
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turístico: \n"); // Digitar a quantidade de pontos turísticos da cidade da carta 2
    scanf("%d", &pontos_turisticos);

    // Agora vamos fazer a impressão dos dados da Carta 2
    
    printf("Carta 2 \n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %.2f\n", area_km);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);


    return 0;
}
