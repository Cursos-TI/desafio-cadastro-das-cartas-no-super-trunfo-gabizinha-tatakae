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
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (- densidade_populacional1);
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (- densidade_populacional2);
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Insira o codigo da primeira carta:\n");
    scanf("%c %d", &estado1, &numero1);

    printf("insira o nome da cidade:\n");
    scanf("%s", &cidadeA);

    printf("Insira a populacao da cidade\n");
    scanf("%lu", &populacao1);

    printf("Insira a Area:\n");
    scanf(" %f", &area1);

    densidade_populacional1 = (float)  populacao1 / area1;

    printf("Insira o PIB:\n");
    scanf(" %f", &pib1);

    pib_per_capita1 = (float) pib1 / populacao1;

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Segunda carta:

    printf("Insira o codigo da segunda carta:\n");
    scanf(" %c %d", &estado2, &numero2);
    
    printf("insira o nome da segunda cidade:\n");
    scanf("%s", &cidadeB);

    printf("Insira a populacao da cidade\n");
    scanf("%lu", &populacao2);

    printf("Insira a Area:\n");
    scanf(" %f", &area2);

    densidade_populacional2 = (float) populacao2 / area2;

    printf("Insira o PIB:\n");
    scanf(" %f", &pib2);

    pib_per_capita2 = (float) pib2 / populacao2;

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Codigo da primeira carta: %c0%d\n", estado1, numero1);
    printf("Nome da cidade: %s\n", cidadeA);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %f\n", area1);
    printf("Densidade populacional: %f\n", densidade_populacional1);
    printf("PIB: %f\n", pib1);
    printf("PIB per capita: %f\n", pib_per_capita1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    printf("Codigo da segunda carta: %c0%d\n", estado2, numero2);
    printf("Nome da cidade: %s\n", cidadeB);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Densidade populacional: %f\n", densidade_populacional2);
    printf("PIB: %f\n", pib2);
    printf("PIB per capita: %f\n", pib_per_capita2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    printf("Comparacao das cartas: \n");

    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = densidade_populacional1 < densidade_populacional2;
    resultado4 = pib1 > pib2;
    resultado5 = pib_per_capita1 > pib_per_capita2;
    resultado6 = pontos_turisticos1 > pontos_turisticos2;
    resultado7 = super_poder1 > super_poder2;

    printf("Populacao da carta %c0%d > populacao da carta %c0%d: %lu\n",estado1, numero1, estado2, numero2, resultado1);
    printf("area da carta %c0%d > area da carta %c0%d: %d\n",estado1, numero1, estado2, numero2, resultado2);
    printf("Densidade populacional da carta %c0%d < densidade populacional da carta %c0%d: %d\n",estado1, numero1, estado2, numero2, resultado3);
    printf("PIB da carta %c0%d > PIB da carta %c0%d: %d\n",estado1, numero1, estado2, numero2, resultado4);
    printf("PIB per capita da carta %c0%d > PIB per capita da carta %c0%d: %d\n",estado1, numero1, estado2, numero2, resultado5);
    printf("Numero de pontos turisticos da carta %c0%d > Numero de pontos turisticos da carta %c0%d: %d\n",estado1, numero1, estado2, numero2, resultado6);
    printf("Super Poder da carta %c0%d > Super Poder da carta %c0%d: %d\n",estado1, numero1, estado2, numero2, resultado7);


    return 0;
}
