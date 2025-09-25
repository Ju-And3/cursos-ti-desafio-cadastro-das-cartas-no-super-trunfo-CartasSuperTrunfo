#include <stdio.h>

int main () {
  
    // Carta 1
    int  pontosturisticos1=0;
    float PIB1=0.0, area1=0.0, densidade1=0.0, pibpercapita1=0.0, superPoder1 = 0.0, inversoDensidade1 = 0.0;
    char nomecidade1[50]="", codigo1[50]="", estado1[50]="";
    unsigned long int populacao1=0;
   

    // Carta 2
    int pontosturisticos2=0;
    float PIB2=0.0, area2=0.0, densidade2=0.0, pibpercapita2=0.0, superPoder2 = 0.0, inversoDensidade2 = 0.0;
    char nomecidade2[50]="", codigo2[50]="", estado2[50]="";
    unsigned long int populacao2=0;


    // --------------------carta 1------------------
    printf("Carta 1 \n");
    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Qual o Estado: ");
    scanf("%s", estado1); 

    printf("Digite o código da carta: ");
    scanf("%s", codigo1); 

    printf("Nome da cidade: ");
    scanf("%s", nomecidade1); 


    //Cálculos
    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = PIB1 / (float) populacao1;
    inversoDensidade1 = 1.0 / densidade1;
    superPoder1 = (populacao1 + area1  + PIB1  + pontosturisticos1  + pibpercapita1 + inversoDensidade1 );



    //Exibição dos resultados dos cálculo da Densidade Populacional
    printf("A Densidade Populacional é:  %.2f\n", densidade1);

    //Exibição dos resultados dos cálculos do PIB per Capita
    printf("O PIB per Capital é:  %.2f\n",  pibpercapita1);





    // exibição da carta 1
    printf(" Carta 1\n");
    printf("Habitantes: %lu\n", populacao1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("PIB: %.4f bilhoes de reais\n", PIB1);
    printf("Área: %.4f km²\n", area1);
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);




    //---------------carta 2-------------
    printf("Carta 2 \n");

    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Qual o Estado: ");
    scanf("%s", estado2); 

    printf("Digite o código da carta: ");
    scanf("%s", codigo2); 

    printf("Nome da cidade: ");
    scanf("%s", nomecidade2); 


    //Cálculos
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = PIB2 / (float) populacao2;
    inversoDensidade2 = 1.0 / densidade2;
    superPoder2 = (populacao2  + area2 + PIB2 + pontosturisticos2 + pibpercapita2 + inversoDensidade2 );



    //Exibição dos resultados dos cálculo da Densidade Populacional
    printf("A Densidade Populacional é:  %.2f\n", densidade2);

    //Exibição dos resultados dos cálculos do PIB per Capita
    printf("O PIB per Capital é:  %.2f\n",  pibpercapita2);



    // Exibição da carta 2
    printf("\n Carta 2 \n");
    printf("Habitantes: %lu\n", populacao2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("PIB: %.4f bilhões de reais\n", PIB2);
    printf("Área: %.4f km²\n", area2);
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
  


     // -------------------- Comparações --------------------
    int vencedorPopulacao = (populacao1 > populacao2) ? 1 : 0;
    int vencedorArea = (area1 > area2) ? 1 : 0;
    int vencedorPIB = (PIB1 > PIB2) ? 1 : 0;
    int vencedorPontos = (pontosturisticos1 > pontosturisticos2) ? 1 : 0;
    int vencedorDensidade = (densidade1 < densidade2) ? 1 : 0; // menor densidade vence
    int vencedorPibPerCapita = (pibpercapita1 > pibpercapita2) ? 1 : 0;
    int vencedorSuperPoder = (superPoder1 > superPoder2) ? 1 : 0;


   // -------------------- Exibição dos resultados --------------------
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", vencedorPopulacao ? 1 : 2, vencedorPopulacao);
    printf("Área: Carta %d venceu (%d)\n", vencedorArea ? 1 : 2, vencedorArea);
    printf("PIB: Carta %d venceu (%d)\n", vencedorPIB ? 1 : 2, vencedorPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vencedorPontos ? 1 : 2, vencedorPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vencedorDensidade ? 1 : 2, vencedorDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vencedorPibPerCapita ? 1 : 2, vencedorPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", vencedorSuperPoder ? 1 : 2, vencedorSuperPoder);




    return 0;
}