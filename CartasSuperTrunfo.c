#include <stdio.h>

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
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Insira o código da primeira carta:\n");
    scanf("%c %d", &estado1, &numero1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidadeA);

    printf("Insira a população da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Insira a área da cidade:\n");
    scanf("%f", &area1);

    densidade_populacional1 = (float)  populacao1 / area1;

    printf("Insira o PIB da cidade:\n");
    scanf(" %f", &pib1);

    pib_per_capita1 = (float) pib1 / populacao1;

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Segunda carta:

    printf("Insira o código da segunda carta:\n");
    scanf(" %c %d", &estado2, &numero2);
    
    printf("Insira o nome da segunda cidade:\n");
    scanf("%s", &cidadeB);

    printf("Insira a população da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Insira a área:\n");
    scanf(" %f", &area2);

    densidade_populacional2 = (float) populacao2 / area2;

    printf("Insira o PIB:\n");
    scanf(" %f", &pib2);

    pib_per_capita2 = (float) pib2 / populacao2;

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    
    printf("Código da primeira carta: %c0%d\n", estado1, numero1);
    printf("Nome da cidade: %s\n", cidadeA);
    printf("População: %lu\n", populacao1);
    printf("Área: %f\n", area1);
    printf("Densidade populacional: %f\n", densidade_populacional1);
    printf("PIB: %f\n", pib1);
    printf("PIB per capita: %f\n", pib_per_capita1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("Código da segunda carta: %c0%d\n", estado2, numero2);
    printf("Nome da cidade: %s\n", cidadeB);
    printf("População: %lu\n", populacao2);
    printf("Área: %f\n", area2);
    printf("Densidade populacional: %f\n", densidade_populacional2);
    printf("PIB: %f\n", pib2);
    printf("PIB per capita: %f\n", pib_per_capita2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    printf("Comparação das cartas: \n");

    // Função if-else para a comparação das cartas
    
    if (populacao1 > populacao2){
        printf("Carta %c0%d venceu!\n", estado1, numero1);
    } else{
        printf("Carta %c0%d venceu!", estado2, numero2);
    }
    
    if (area1 > area2){
        printf("Carta %c0%d venceu!\n", estado1, numero1);
    } else{
        printf("Carta %c0%d venceu!\n", estado2, numero2);
    }

    if (densidade_populacional1 < densidade_populacional2){
        printf("Carta %c0%d venceu!\n", estado1, numero1);
    } else{
        printf("Carta %c0%d venceu!\n", estado2, numero2);
    }

    if (pib1 > pib2){
        printf("Carta %c0%d venceu!\n", estado1, numero1);
    } else{
        printf("Carta %c0%d venceu!\n", estado2, numero2);
    }

    if (pib_per_capita1 > pib_per_capita2){
        printf("Carta %c0%d venceu!\n", estado1, numero1);
    } else{
        printf("Carta %c0%d venceu!\n", estado2, numero2);
    }

    if (pontos_turisticos1 > pontos_turisticos2){
        printf("Carta %c0%d venceu!\n", estado1, numero1);
    } else{
        printf("Carta %c0%d venceu!\n", estado2, numero2);
    }
    
    if (super_poder1 > super_poder2){
        printf("Carta %c0%d venceu!\n", estado1, numero1);
    } else{
        printf("Carta %c0%d venceu!\n", estado2, numero2);
    }

    return 0;
}
