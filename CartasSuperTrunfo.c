#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Desafio cadastro das cartas de Super-trunfo\n");

    char letra;
    int numero; 
    int populacao;
    int turismo;
    char cidade[50];
    float area;
    float densidade;
    float pib;
    float pib_per_capita;

    printf("Insira o codigo da carta:\n");
    scanf("%c %d", &letra, &numero);

    printf("insira o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Insira a populacao da cidade\n");
    scanf("%d", &populacao);

    printf("Insira a area:\n");
    scanf(" %f", &area);

    printf("Insira o PIB:\n");
    scanf(" %f", &pib);

    densidade = (float)populacao / area;
    pib_per_capita = (float)pib / populacao;

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &turismo);

    printf("Codigo da carta: %c%d\n", letra, numero);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB: %.2f\n", pib);
    printf("Pib per capita: %.2f\n", pib_per_capita);
    printf("Pontos turisticos: %d\n", turismo);

    return 0;
}
