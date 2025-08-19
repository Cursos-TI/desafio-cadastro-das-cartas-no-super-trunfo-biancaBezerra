#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char codigo_carta1[10];
    char estado1[10];
    char cidade1[50];
    int populacao1;
    int area1;
    int pontos_turisticos1;
    float pib1, dens_populacional1, pib_per_capta1;

    char codigo_carta2[10];
    char estado2[10];
    char cidade2[50];
    int populacao2;
    int area2;
    int pontos_turisticos2;
    float pib2, dens_populacional2, pib_per_capta2;


    printf("\n-------------CADASTRO DA 1ª CARTA---------------\n");

    printf("DIGITE O CÓDIGO DA CARTA: ");
    scanf(" %[^\n]", codigo_carta1);

    printf("DIGITE O CODIGO DO ESTADO: ");
    scanf(" %[^\n]", estado1);

    printf("DIGITE O NOME DA CIDADE: ");
    scanf(" %[^\n]", cidade1);

    printf("DIGITE O TOTAL DA POPULAÇÃO: ");
    scanf("%d", &populacao1);

    printf("DIGITE A ÁREA TOTAL: ");
    scanf("%d", &area1);

    printf("DIGITE O PIB: ");
    scanf("%f", &pib1);

    printf("DIGITE QUANTOS PONTOS TURISTICOS EXISTEM: ");
    scanf("%d", &pontos_turisticos1);

    dens_populacional1 = (float) populacao1 / area1;
    pib_per_capta1 = pib1 / (float)populacao1;



    printf("\n-------------CADASTRO DA 2ª CARTA---------------\n");
    
    printf("DIGITE O CÓDIGO DA CARTA: ");
    scanf(" %[^\n]", codigo_carta2);
    
    printf("DIGITE O CODIGO DO ESTADO: ");
    scanf(" %[^\n]", estado2);

    printf("DIGITE O NOME DA CIDADE: ");
    scanf(" %[^\n]", cidade2);

    printf("DIGITE O TOTAL DA POPULAÇÃO: ");
    scanf("%d", &populacao2);

    printf("DIGITE A ÁREA TOTAL: ");
    scanf("%d", &area2);

    printf("DIGITE O PIB:");
    scanf("%f", &pib2);

    printf("DIGITE QUANTOS PONTOS TURISTICOS EXISTEM: ");
    scanf("%d", &pontos_turisticos2);

    dens_populacional2 = (float)populacao2 / area2;
    pib_per_capta2 = pib2 / (float) populacao2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n************  1ª CARTA  ************\n");
    printf("\nCódigo: %s\n", codigo_carta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %d\n", area1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("PIB (Produto Interno Bruto): %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", dens_populacional1);
    printf("PIB per CAPTA: %.2f\n", pib_per_capta1);

    printf("\n************  2ª CARTA  ************\n");
    printf("\nCódigo: %s\n", codigo_carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %d\n", area2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("PIB (Produto Interno Bruto): %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", dens_populacional2);
    printf("PIB per CAPTA: %.2f\n", pib_per_capta2);


    return 0;
}
