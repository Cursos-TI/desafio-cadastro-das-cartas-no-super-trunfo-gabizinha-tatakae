#include <stdio.h>

int main() {

    //Variáveis separadas para cada atributo da cidade.

    char estado1, estado2;
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
    int resultado1, resultado2;
    int atributo1, atributo2;

    //Cálculo da densidade populacional e do pib per capita

    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita1 = (float) pib1 / populacao1;
    pib_per_capita2 = (float) pib2 / populacao2;

    // menu interativo:

    printf("Seja bem-vindo ao jogo de Super-Trunfo!\n\n");

    // Cadastro das Cartas
    
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

    printf("Insira o PIB:\n");
    scanf(" %f", &pib2);

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
    printf("Super-poder: %f", super_poder1);

    printf("Nome da cidade: %s\n", cidadeB);
    printf("População: %lu\n", populacao2);
    printf("Área: %f\n", area2);
    printf("Densidade populacional: %f\n", densidade_populacional2);
    printf("PIB: %f\n", pib2);
    printf("PIB per capita: %f\n", pib_per_capita2);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos2);
    printf("Super-poder: %f", super_poder2);

    printf("Comparação das cartas: \n");
    printf("Escolha o primeiro atributo para a comparação: \n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Densidade populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per capita\n");
    printf("6. Pontos turísticos\n");
    printf("7. Super poder\n");
    
    printf("Opção: ");
    scanf("%d", &atributo1);

    //Função switch e if-else com operadores ternários para a comparação dos atributos das cartas
    
    switch (atributo1)
    {
    case 1:
        printf("Você escolheu a opção 'População'!");
        printf("Cidade %s: %lu - ", cidadeA, populacao1);
        printf("Cidade %s: %d\n", cidadeB, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu a opção 'Área'!");
        printf("Cidade %s: %f - ", cidadeA, area1);
        printf("Cidade %s: %f\n", cidadeB, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu a opção 'Densidade populacional'!");
        printf("Cidade %s: %f - ", cidadeA, densidade_populacional1);
        printf("Cidade %s: %f\n", cidadeB, densidade_populacional2);
        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu a opção 'PIB'!");
        printf("Cidade %s: %f - ", cidadeA, pib1);
        printf("Cidade %s: %f\n", cidadeB, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu a opção 'PIB per capita'!");
        printf("Cidade %s: %f - ", cidadeA, pib_per_capita1);
        printf("Cidade %s: %f\n", cidadeB, pib_per_capita2);
        resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu a opção 'Pontos turísticos'!");
        printf("Cidade %s: %d - ", cidadeA, pontos_turisticos2);
        printf("Cidade %s: %d\n", cidadeB, pontos_turisticos2);
        resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;
    case 7:
        printf("Você escolheu a opção 'Super poder'!");
        printf("Cidade %s: %f - ", cidadeA, super_poder1);
        printf("Cidade %s: %f\n", cidadeB, super_poder2);
        resultado1 = super_poder1 > super_poder2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida.");
        break;
    }

    //resultado do primeiro teste:
    if (resultado1 == 1)
    {
        printf("Carta %c0%d venceu o primeiro round!\n", estado1, numero1);
    } else{
        printf("Carta %c0%d venceu o primeiro round!\n", estado2, numero2);
    }
    
    printf("Escolha o segundo atributo para a comparação: \n");
    printf("Nota: O segundo atributo deve ser diferente do primeiro!\n");

    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Densidade populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per capita\n");
    printf("6. Pontos turísticos\n");
    printf("7. Super poder\n");
    printf("Opção: ");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
        printf("Você escolheu o mesmo atributo!\n");
    } else{
        switch (atributo2)
        {
        case 1:
            printf("Você escolheu a opção 'População'!");
            printf("Cidade %s: %lu - ", cidadeA, populacao1);
            printf("Cidade %s: %d\n", cidadeB, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu a opção 'Área'!");
            printf("Cidade %s: %f - ", cidadeA, area1);
            printf("Cidade %s: %f\n", cidadeB, area2);
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu a opção 'Densidade populacional'!");
            printf("Cidade %s: %f - ", cidadeA, densidade_populacional1);
            printf("Cidade %s: %f\n", cidadeB, densidade_populacional2);
            resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu a opção 'PIB'!");
            printf("Cidade %s: %f - ", cidadeA, pib1);
            printf("Cidade %s: %f\n", cidadeB, pib2);
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu a opção 'PIB per capita'!");
            printf("Cidade %s: %f - ", cidadeA, pib_per_capita1);
            printf("Cidade %s: %f\n", cidadeB, pib_per_capita2);
            resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu a opção 'Pontos turísticos'!");
            printf("Cidade %s: %d - ", cidadeA, pontos_turisticos2);
            printf("Cidade %s: %d\n", cidadeB, pontos_turisticos2);
            resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu a opção 'Super poder'!");
            printf("Cidade %s: %f - ", cidadeA, super_poder1);
            printf("Cidade %s: %f\n", cidadeB, super_poder2);
            resultado2 = super_poder1 > super_poder2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida.");
            break;
    }
    }

    // resultado do segundo teste:

    if (resultado2 == 1)
    {
        printf("Carta %c0%d venceu o primeiro round!\n", estado1, numero1);
    } else{
        printf("Carta %c0%d venceu o primeiro round!\n\n", estado2, numero2);
    }

    // resultado final:

    printf("Resultado final da comparação com os atributos %d e %d:\n", atributo1, atributo2);

    if (resultado1 == 1 && resultado2 == 1){
        printf("Carta %c0%d venceu!\n", estado1, numero1);
    } else if(resultado1 == 1 && resultado2 == 0 || resultado1 == 0 && resultado2 == 1){
        printf("Empate!");
    } else
        printf("Carta %c0%d venceu!\n", estado2, numero2);

    return 0;
}
