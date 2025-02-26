#include <stdio.h>

int main() {
    //Variáveis separadas para cada atributo da cidade.

    printf("Desafio cadastro das cartas de Super-trunfo\n\n");

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
    int opcao;

    densidade_populacional1 = (float)  populacao1 / area1;
    pib_per_capita1 = (float) pib1 / populacao1;

    // Cadastro das Cartas:
    
    printf("Insira o código da primeira carta:\n");
    scanf("%c %d", &estado1, &numero1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidadeA);

    printf("Insira a população da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Insira a área da cidade:\n");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade:\n");
    scanf(" %f", &pib1);

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
    
    printf("Nome da cidade: %s\n", cidadeA);
    printf("População: %lu\n", populacao1);
    printf("Área: %f\n", area1);
    printf("Densidade populacional: %f\n", densidade_populacional1);
    printf("PIB: %f\n", pib1);
    printf("PIB per capita: %f\n", pib_per_capita1);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos1);

    printf("Nome da cidade: %s\n", cidadeB);
    printf("População: %lu\n", populacao2);
    printf("Área: %f\n", area2);
    printf("Densidade populacional: %f\n", densidade_populacional2);
    printf("PIB: %f\n", pib2);
    printf("PIB per capita: %f\n", pib_per_capita2);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos2);

    printf("Comparação das cartas: \n");
    printf("Escolha os atributos a serem comparados: \n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Densidade populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per capita\n");
    printf("6. Pontos turísticos\n");
    printf("7. Super poder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    //Função if- else aninhada na funcao switch para a comparação das cartas

    switch (opcao)
    {
    case 1:
        printf("Cidade %s: %lu - ", cidadeA, populacao1);
        printf("Cidade %s: %d\n", cidadeB, populacao2); 
        break;
    case 2:
        printf("Cidade %s: %f - ", cidadeA, area1);
        printf("Cidade %s: %f\n", cidadeB, area2);
        break;
    case 3:
        printf("Cidade %s: %f - ", cidadeA, densidade_populacional1);
        printf("Cidade %s: %f\n", cidadeB, densidade_populacional2);
        break;
    case 4:
        printf("Cidade %s: %f - ", cidadeA, pib1);
        printf("Cidade %s: %f\n", cidadeB, pib2);
        break;
    case 5:
        printf("Cidade %s: %f - ", cidadeA, pib_per_capita1);
        printf("Cidade %s: %f\n", cidadeB, pib_per_capita2);
        break;
    case 6:
        printf("Cidade %s: %d - ", cidadeA, pontos_turisticos2);
        printf("Cidade %s: %d\n", cidadeB, pontos_turisticos2);
        break;
    case 7:
        printf("Cidade %s: %f - ", cidadeA, super_poder1);
        printf("Cidade %s: %f\n", cidadeB, super_poder2);
        break;
    default:
        break;
    }

    switch (opcao)
    {
    case 1:
        printf("Comparação das populações\n");
        if (populacao1 == populacao2){
            printf("Empate!\n");
        } else if(populacao1 > populacao2){
            printf("Carta %c0%d venceu!\n", estado1, numero1);
        } else{
            printf("Carta %c0%d venceu!", estado2, numero2);
        }
        break;
    case 2:
        printf("Comparação das áreas: \n");
        if (area1 == area2){
            printf("Empate!\n");
        } else if (area1 > area2){
            printf("Carta %c0%d venceu!\n", estado1, numero1);
        } else{
            printf("Carta %c0%d venceu!\n", estado2, numero2);
        }
        break;
    case 3:
        printf("Comparação da densidade populacional: \n");
        if (densidade_populacional1 == densidade_populacional2){
            printf("Empate!\n");
        } else if(densidade_populacional1 < densidade_populacional2){
            printf("Carta %c0%d venceu!\n", estado1, numero1);
        }else{
            printf("Carta %c0%d venceu!\n", estado2, numero2);
        }
        break;
    case 4:
        printf("Comparação do PIB: \n");
        if(pib1 == pib2){
            printf("Empate!\n");
        } else if (pib1 > pib2){
            printf("Carta %c0%d venceu!\n", estado1, numero1);
        } else{
            printf("Carta %c0%d venceu!\n", estado2, numero2);
        }
        break;
    case 5:
        printf("Comparação do PIB per capita: \n");    
        if(pib_per_capita1 == pib_per_capita2){
            printf("Empate!\n");
        } else if (pib_per_capita1 > pib_per_capita2){
            printf("Carta %c0%d venceu!\n", estado1, numero1);
        } else{
            printf("Carta %c0%d venceu!\n", estado2, numero2);
        }
        break;
    case 6:
        printf("Comparação dos pontos turísticos: \n");
        if(pontos_turisticos1 == pontos_turisticos2){
            printf("Empate!\n");
        } else if (pontos_turisticos1 > pontos_turisticos2){
            printf("Carta %c0%d venceu!\n", estado1, numero1);
        } else{
            printf("Carta %c0%d venceu!\n", estado2, numero2);
        }
        break;
    case 7:
        printf("Comparação dos Super poderes: \n");
        if(super_poder1 == super_poder2){
            printf("Empate!\n");
        } else if (super_poder1 > super_poder2){
            printf("Carta %c0%d venceu!\n", estado1, numero1);
        } else{
            printf("Carta %c0%d venceu!\n", estado2, numero2);
        }
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    return 0;
}
