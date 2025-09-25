#include <stdio.h>

int main () {
  
    // Carta 1
    int populacao1=0, pontosturisticos1=0;
    float PIB1=0.0, area1=0.0, densidade1=0.0, pibpercapita1=0.0;
    char nomecidade1[50]="", codigo1[50]="", estado1[50]="";


    // Carta 2
    int populacao2=0, pontosturisticos2=0;
    float PIB2=0.0, area2=0.0, densidade2=0.0, pibpercapita2=0.0;
    char nomecidade2[50]="", codigo2[50]="", estado2[50]="";




    // --------------------carta 1------------------
    printf("Carta 1 \n");
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao1);
    
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


    // Cálculo da Densidade Populacional
    densidade1 = populacao1 / area1;
   

    // Cálculo do PIB per Capita
    pibpercapita1 = PIB1 / populacao1;




    //Exibição dos resultados dos cálculo da Densidade Populacional
    printf("A Densidade Populacional é:  %.2f\n", densidade1);

    //Exibição dos resultados dos cálculos do PIB per Capita
    printf("O PIB per Capital é:  %.2f\n",  pibpercapita1);




    // exibição da carta 1
    printf(" Carta 1\n");
    printf("Habitantes: %d\n", populacao1);
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
    scanf("%d", &populacao2);
    
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



    // Cálculo da Densidade Populacional
    densidade2 = populacao2 / area2;
   

    // Cálculo do PIB per Capita
    pibpercapita2 = PIB2 / populacao2;



    //Exibição dos resultados dos cálculo da Densidade Populacional
    printf("A Densidade Populacional é:  %.2f\n", densidade2);

    //Exibição dos resultados dos cálculos do PIB per Capita
    printf("O PIB per Capital é:  %.2f\n",  pibpercapita2);



    // Exibição da carta 2
    printf("\n Carta 2 \n");
    printf("Habitantes: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("PIB: %.4f bilhões de reais\n", PIB2);
    printf("Área: %.4f km²\n", area2);
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
  

    return 0;
}