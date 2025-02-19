#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    printf("Desafio cadastro das cartas de Super-trunfo\n");

    char estado1; 
    char estado2;
    int numero1, numero2;
    char cidadeA [50]; 
    char cidadeB [50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Insira o codigo da primeira carta:\n");
    scanf("%c %d", &estado1, &numero1);

    printf("insira o nome da cidade:\n");
    scanf("%s", &cidadeA);

    printf("Insira a populacao da cidade\n");
    scanf("%d", &populacao1);

    printf("Insira a Area:\n");
    scanf(" %f", &area1);

    printf("Insira o PIB:\n");
    scanf(" %f", &pib1);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Segunda carta:

    printf("Insira o codigo da segunda carta:\n");
    scanf(" %c %d", &estado2, &numero2);
    
    printf("insira o nome da segunda cidade:\n");
    scanf("%s", &cidadeB);

    printf("Insira a populacao da cidade\n");
    scanf("%d", &populacao2);

    printf("Insira a Area:\n");
    scanf(" %f", &area2);

    printf("Insira o PIB:\n");
    scanf(" %f", &pib2);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Codigo da primeira carta: %c%d\n", estado1, numero1);
    printf("Nome da cidade: %s\n", cidadeA);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    printf("Codigo da segunda carta: %c%d\n", estado2, numero2);
    printf("Nome da cidade: %s\n", cidadeB);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}
