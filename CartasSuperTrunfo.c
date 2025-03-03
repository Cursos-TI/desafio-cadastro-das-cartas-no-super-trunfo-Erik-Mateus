#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codDaCidade1[3];
    float pib1, area1, densidade1, pibPerCapta1, superPoder1;
    unsigned int populacao1, numDePontosTuristicos1;

    char codDaCidade2[3];
    float pib2, area2, densidade2, pibPerCapta2, superPoder2;
    unsigned int populacao2, numDePontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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

  

    //densidade populacional e PIB per capta

    densidade1 = populacao1 / area1;
    pibPerCapta1 = pib1 /populacao1;
    superPoder1 = pib1 + (float)populacao1 + area1 + (float)numDePontosTuristicos1 + (-densidade1);

    densidade2 = populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;
    superPoder2 = pib2 + (float)populacao2 + area2 + (float)numDePontosTuristicos2 + (-densidade2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


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

    //+++++++++++++++++++++++++++++++++++++++

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

    //comparação cartas

    unsigned int populacaoComp = populacao1 > populacao2;
    unsigned int areaComp = (unsigned int)area1 > (unsigned int)area2;
    unsigned int pibComp = (unsigned int)pib1 > (unsigned int)pib2;
    unsigned int pontoTuristicosComp = numDePontosTuristicos1 > numDePontosTuristicos2;
    unsigned int pibPerCaptaComp = (unsigned int)pibPerCapta1 > (unsigned int)pibPerCapta2;
    unsigned int superPoderComp = (unsigned int)superPoder1 > (unsigned int)superPoder2;
    unsigned int densidadeComp  = (unsigned int)densidade1 < (unsigned int)densidade2;

    printf("Comparação cartas:");

    printf("Populacao: %d \n", populacaoComp );
    printf("Area: %.2f \n", areaComp);
    printf("PIB: %.2f \n", pibComp);
    printf("Pontos Turisticos: %d \n", pontoTuristicosComp);
    printf("PIB per capta: %.2f \n", pibPerCaptaComp);
    printf("Poder de carta:  %.2f", superPoderComp);
    printf("Densidade populacional: %.2f \n", densidadeComp);

    
    return 0;
}
