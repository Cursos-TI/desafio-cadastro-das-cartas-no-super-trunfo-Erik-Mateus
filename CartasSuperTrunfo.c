#include <stdio.h>

int main() {
    char codDaCidade1[3];
    float pib1, area1, densidade1, pibPerCapta1, superPoder1;
    unsigned int populacao1, numDePontosTuristicos1;

    char codDaCidade2[3];
    float pib2, area2, densidade2, pibPerCapta2, superPoder2;
    unsigned int populacao2, numDePontosTuristicos2;

    printf("\n");
    printf("Digite o codigo da sua cidade1\n");
    scanf("%s", codDaCidade1);

    printf("Digite a populacao da sua cidade1\n");
    scanf("%u", &populacao1);

    printf("Digite pib da sua cidade1\n");
    scanf("%f", &pib1);

    printf("Digite a area da sua cidade1\n");
    scanf("%f", &area1);

    printf("Digite o numero de pontos turisticos da sua cidade1\n");
    scanf("%u", &numDePontosTuristicos1);

    printf("Digite o codigo da cidade2\n");
    scanf("%s", &codDaCidade2);

    printf("Digite a populacao da sua cidade2\n");
    scanf("%d", &populacao2);

    printf("Digite pib da sua cidade2\n");
    scanf("%f", &pib2);

    printf("Digite a area da sua cidade2\n");
    scanf("%f", &area2);

    printf("Digite o numero de pontos turisticos da sua cidade2\n");
    scanf("%u", &numDePontosTuristicos2);

    densidade1 = populacao1 / area1;
    pibPerCapta1 = pib1 / populacao1;
    superPoder1 = pib1 + (float)populacao1 + area1 + (float)numDePontosTuristicos1 + (-densidade1);

    densidade2 = populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;
    superPoder2 = pib2 + (float)populacao2 + area2 + (float)numDePontosTuristicos2 + (-densidade2);

    printf("\n");
    printf("Sua Carta1: %s \n", codDaCidade1);
    printf("\n");

    printf("Carta1\n" );
    printf("Populacao da cidade1: %d \n", populacao1 );
    printf("Area da cidade1: %.2f \n", area1);
    printf("PIB da cidade1: %.2f \n", pib1);
    printf("Pontos Turisticos da cidade1: %d \n", numDePontosTuristicos1);
    printf("Densidade populacional1: %.2f \n", densidade1);
    printf("PIB per carta1: %.2f \n", pibPerCapta1);
    printf("super Poder da carta1:  %.2f\n", superPoder1);

    printf("\n");
    printf("Sua Carta2: %s \n", codDaCidade2);
    printf("\n");

    printf("Carta2\n" );
    printf("Populacao da cidade2: %d \n", populacao2 );
    printf("Area da cidade2: %.2f \n", area2);
    printf("PIB da cidade2: %.2f \n", pib2);
    printf("Pontos Turisticos da cidade2: %d \n", numDePontosTuristicos2);
    printf("Densidade populacional2: %.2f \n", densidade2);
    printf("PIB per capta2: %.2f \n", pibPerCapta2);
    printf("super Poder da carta2:  %.2f\n", superPoder2);

    printf("\n");
    printf("cartas vencedoras:\n");

    if(populacao1 > populacao2){
        printf("Populacao: carta1\n");
    }else{
        printf("Populacao: carta2\n");
    }

    if((unsigned int)area1 > (unsigned int)area2){
        printf("Area: carta1\n");
    }else{
        printf("Area: carta2\n");
    }

    if((unsigned int)pib1 > (unsigned int)pib2){
        printf("PIB: carta1\n");
    }else{
        printf("PIB: carta2\n");
    }

    if(numDePontosTuristicos1 > numDePontosTuristicos2){
        printf("Pontos Turisticos: carta1\n");
    }else{
        printf("Pontos Turisticos: carta2\n");
    }

    if((unsigned int)pibPerCapta1 > (unsigned int)pibPerCapta2){
        printf("PIB per capta: carta1\n");
    }else{
        printf("PIB per capta: carta2\n");
    }

    if((unsigned int)superPoder1 > (unsigned int)superPoder2){
        printf("Poder de carta: carta1\n");
    }else{
        printf("Poder de carta: carta2\n");
    }

    if((unsigned int)densidade1 < (unsigned int)densidade2){
        printf("Densidade populacional: carta1\n");
    }else{
        printf("Densidade populacional: carta2\n");
    }

    int varialvelMenu;

    for(int i = 1; i != 0;){

        printf("digite o numero correspondente ao Atributo que deseja comparar\n");
        printf("1. Populaçao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Numero de Pontos turisticos\n");
        printf("5. Densidade Demografica\n");
        printf("6. Sair\n");
        scanf("%d", &varialvelMenu);

        switch (varialvelMenu)
        {
        case 1:
            if (populacao1 > populacao2)
            {
                printf("a população da carta 1 é maior, portanto carta 1 vence\n");
            }else{
                printf("a população da carta 2 é maior, portanto carta 2 vence\n");
            }
            break;

        case 2:
            if (area1 > area2)
            {
                printf("a área da carta 1 é maior, portanto carta 1 vence\n");
            }else{
                printf("a área da carta 2 é maior, portanto carta 2 vence\n");
            }
            break;

        case 3:
            if (pib1 > pib2)
            {
                printf("o PIB da carta 1 é maior, portanto carta 1 vence\n");
            }else{
                printf("o PIB da carta 2 é maior, portanto carta 2 vence\n");
            }
            break;    
        case 4:
            if (numDePontosTuristicos1 > numDePontosTuristicos2)
            {
                printf("o número de pontos turísticos da carta 1 é maior, portanto carta 1 vence\n");
            }else{
                printf("o número de pontos turísticos da carta 2 é maior, portanto carta 2 vence\n");
            }
            break;
        case 5:
            if (densidade1 < densidade2)
            {
                printf("a densidade demográfica da carta 1 é menor, portanto carta 1 vence\n");
            }else{
                printf("a densidade demográfica da carta 2 é menor, portanto carta 2 vence\n");
            }
            break;
        case 6:
            printf("finalizando aplicaçao\n");
            i = 0;
            break;
        default:
            printf("código inválido\n");
            break;
        }

    }

    return 0;
}
