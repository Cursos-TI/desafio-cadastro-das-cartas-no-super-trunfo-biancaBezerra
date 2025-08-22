#include <stdio.h>

int main() {

    char codigo_carta1[10], estado1[10], cidade1[50], codigo_carta2[10], estado2[10], cidade2[50];
    unsigned long int populacao1, populacao2;
    int area1,pontos_turisticos1, area2, pontos_turisticos2;
    float pib1, dens_populacional1, pib_per_capta1, superPoder1, pib2, dens_populacional2, pib_per_capta2, superPoder2;


    printf("\n-------------CADASTRO DA 1ª CARTA---------------\n");

    printf("DIGITE O CÓDIGO DA CARTA: ");
    scanf(" %[^\n]", codigo_carta1);

    printf("DIGITE O CODIGO DO ESTADO: ");
    scanf(" %[^\n]", estado1);

    printf("DIGITE O NOME DA CIDADE: ");
    scanf(" %[^\n]", cidade1);

    printf("DIGITE O TOTAL DA POPULAÇÃO: ");
    scanf("%ld", &populacao1);

    printf("DIGITE A ÁREA TOTAL: ");
    scanf("%d", &area1);

    printf("DIGITE O PIB: ");
    scanf("%f", &pib1);

    printf("DIGITE QUANTOS PONTOS TURISTICOS EXISTEM: ");
    scanf("%d", &pontos_turisticos1);

    dens_populacional1 = (float) populacao1 / area1;
    pib_per_capta1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + (float)area1 + pib1 + (1.0 / dens_populacional1) + pib_per_capta1;


    printf("\n-------------CADASTRO DA 2ª CARTA---------------\n");
    
    printf("DIGITE O CÓDIGO DA CARTA: ");
    scanf(" %[^\n]", codigo_carta2);
    
    printf("DIGITE O CODIGO DO ESTADO: ");
    scanf(" %[^\n]", estado2);

    printf("DIGITE O NOME DA CIDADE: ");
    scanf(" %[^\n]", cidade2);

    printf("DIGITE O TOTAL DA POPULAÇÃO: ");
    scanf("%ld", &populacao2);

    printf("DIGITE A ÁREA TOTAL: ");
    scanf("%d", &area2);

    printf("DIGITE O PIB:");
    scanf("%f", &pib2);

    printf("DIGITE QUANTOS PONTOS TURISTICOS EXISTEM: ");
    scanf("%d", &pontos_turisticos2);

    dens_populacional2 = (float)populacao2 / area2;
    pib_per_capta2 = pib2 / (float) populacao2;
    superPoder2 = (float)populacao2 + (float)area2 + pib2 + (1.0 / dens_populacional2) + pib_per_capta2;
    

    printf("\n************  1ª CARTA  ************\n");
    printf("\nCódigo: %s\n", codigo_carta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %dkm²\n ", area1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("PIB (Produto Interno Bruto): %.2f(BI)\n ", pib1);
    printf("Densidade Populacional: %.2f\n", dens_populacional1);
    printf("PIB per CAPTA: %.2f\n", pib_per_capta1);
    printf("SUPER PODER: %.2f\n", superPoder1);

    printf("\n************  2ª CARTA  ************\n");
    printf("\nCódigo: %s\n", codigo_carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %dkm²\n ", area2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("PIB (Produto Interno Bruto): %.2f(BI)\n", pib2);
    printf("Densidade Populacional: %.2f\n", dens_populacional2);
    printf("PIB per CAPTA: %.2f\n", pib_per_capta2);
    printf("SUPER PODER: %.2f\n", superPoder2);
    

    int venceuPopulacao = populacao1 > populacao2;
    int venceuArea = area1 > area2;
    int venceuPib = pib1 > pib2;
    int venceuPontosTuristicos = pontos_turisticos1 > pontos_turisticos2;
    int venceuDensidade = dens_populacional1 < dens_populacional2;
    int venceuPibPerCapta = pib_per_capta1 > pib_per_capta2;
    int venceuSuperPoder = superPoder1 > superPoder2;
    

    printf("\n!!!!! RESULTADO 0 = NÃO  ------  RESULTADO 1 = SIM !!!!!!\n");

    printf("\n************ COMPARAÇÃO DAS CARTAS ************\n");
    printf("População: Carta 1 venceu (%d)\n", venceuPopulacao);
    printf("Área: Carta 1 venceu (%d)\n",venceuArea);
    printf("PIB: Carta 1 venceu (%d)\n", venceuPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceuPontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n",venceuDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n",venceuPibPerCapta);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceuSuperPoder);

    printf("\n-------- QUAL CARTA VENCEU COM O SUPER PODER MAIOR ----------\n");

    if (superPoder1 > superPoder2){
        printf ("\nRESULTADO: A CARTA 1 VENCEU!\n");
    } else
        printf ("\nRESULTADO: A CARTA 2 VENCEU!\n");

    printf("CARTA 1: %s - (%s): %.2f \n", cidade1, estado1, superPoder1);
    printf("CARTA 2: %s - (%s): %.2f \n", cidade2, estado2, superPoder2);

    return 0;
}
