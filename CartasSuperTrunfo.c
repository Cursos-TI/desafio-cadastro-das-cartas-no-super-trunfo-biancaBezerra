#include <stdio.h>

int main() {

    char codigo_carta1[10], estado1[10], cidade1[50], codigo_carta2[10], estado2[10], cidade2[50];
    unsigned long int populacao1, populacao2;
    int area1,pontos_turisticos1, area2, pontos_turisticos2, escolhaAtributo, atributoEscolhido;
    float pib1, dens_populacional1, pib_per_capta1, superPoder1, pib2, dens_populacional2, pib_per_capta2, superPoder2, valor1, valor2;


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
    

    printf("\n************  1ª CARTA  ************");
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

    printf("\n************  2ª CARTA  ************");
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
    

    printf("\n\n!!!!! RESULTADO 0 = NÃO  ------  RESULTADO 1 = SIM !!!!!!\n");

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

    printf("\nCARTA 1: %s - (%s): %.2f \n", cidade1, estado1, superPoder1);
    printf("CARTA 2: %s - (%s): %.2f \n", cidade2, estado2, superPoder2);

    printf("\n******* ESCOLHA QUAL ATRIBUTO QUER COMPARAR ENTRE AS CARTAS *******\n"
        "\n1. População 👨‍👩‍👧‍👦\n"
        "2. Area 🗺️\n"
        "3. PIB💲\n"
        "4. Pontos Turisticos ⛰️\n"
        "5. Densidade Populacional 🏢\n"
        "\nEscolha uma opção: ");

        scanf("%d", &escolhaAtributo);

        switch (escolhaAtributo) {
        case 1:
            printf("\nAtributo Escolhido - População\n");
            atributoEscolhido = 1;
            valor1 = populacao1;
            valor2 = populacao2;
            break;
        case 2:
            printf("\nAtributo Escolhido - Área\n");
            atributoEscolhido = 2;
            valor1 = area1;
            valor2 = area2;
            break;
        case 3:
            printf("\nAtributo Escolhido - PIB\n");
            atributoEscolhido = 3;
            valor1 = pib1;
            valor2 = pib2;
            break;
        case 4:
            printf("\nAtributo Escolhido - Pontos Turisticos\n");
            atributoEscolhido = 4;
            valor1 = pontos_turisticos1;
            valor2 = pontos_turisticos2;
            break;
        case 5:
            printf("\nAtributo Escolhido - Densidade Populacional\n");
            atributoEscolhido = 5;
            valor1 = dens_populacional1;
            valor2 = dens_populacional2;
            break;
        default:
            printf("\nOpção Inválida!\n");
            return;
    }


    if (atributoEscolhido == 5) {

        if (valor1 < valor2) {
            printf("\n ***** CARTA 1 VENCEU *****\n ");
        } else if (valor2 < valor1) {
            printf("\n ***** CARTA 2 VENCEU *****\n ");
        } else {
            printf("\n*** Deu empate ***\n");
        }
    } else {
        if (valor1 > valor2) {
            printf("\n ***** CARTA 1 VENCEU *****\n ");
        } else if (valor2 > valor1) {
            printf("\n ***** CARTA 2 VENCEU *****\n ");
        } else {
            printf("\n*** Deu empate ***\n");
        }
    }

    printf("Carta 1: %s | Carta 2: %s\n", cidade1, cidade2);
    printf("Valor comparado: ");
    switch (atributoEscolhido) {
        case 1: printf("População - %.0f vs %.0f\n", valor1, valor2); break;
        case 2: printf("Área - %.0f vs %.0f\n", valor1, valor2); break;
        case 3: printf("PIB - %.2f vs %.2f\n", valor1, valor2); break;
        case 4: printf("Pontos Turísticos - %.0f vs %.0f\n", valor1, valor2); break;
        case 5: printf("Densidade Populacional - %.2f vs %.2f\n", valor1, valor2); break;
    }

    return 0;
}
