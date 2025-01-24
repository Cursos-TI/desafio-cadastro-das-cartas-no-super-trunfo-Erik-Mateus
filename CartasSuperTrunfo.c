#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codDaCidade[3];
    int populacao, numDePontosTuristicos, pib, area;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

     printf("Digite o codigo da sua cidade\n");
    scanf("%s", &codDaCidade);

    printf("Digite a populacao da sua cidade\n");
    scanf("%d", &populacao);

    printf("Digite pib da sua cidade\n");
    scanf("%d", &pib);

    printf("Digite a area da sua cidade\n");
    scanf("%d", &area);

    printf("Digite o numero de pontos turisticos da sua cidade\n");
    scanf("%d", &numDePontosTuristicos);

    printf("\n");
    printf("Sua Carta: %s \n", codDaCidade);
    printf("\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Populacao da cidade: %d \n", populacao );
    printf("Area da cidade: %d \n", area);
    printf("PIB da cidade: %d \n", pib);
    printf("Pontos Turisticos da cidade: %d \n", numDePontosTuristicos);


    
    return 0;
}
