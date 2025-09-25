#include <stdio.h>

int main () {
  
    int numcartas=0; 
    int populacao=0, pontosturisticos=0;
    float PIB=0.0, area=0.0, media1 =0.0, media2 =0.0;
    char nomecidade[50]="cidade", codigo[50]="codigo", estado[50]="estado";
  
    // carta 1
    printf("Carta 1 \n");
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB);

    printf("Digite a Área: ");
    scanf("%f", &area);

    printf("Qual o Estado: ");
    scanf("%s", estado); 

    printf("Digite o código da carta: ");
    scanf("%s", codigo); 

    printf("Nome da cidade: ");
    scanf("%s", nomecidade); 


    // Cálculo da Densidade Populacional
    media1 = (float) (populacao + area ) / 2;
   

    // Cálculo do PIB per Capita
    media2 = (float) (PIB + populacao ) / 2;


    //Exibição dos resultados dos cálculo da Densidade Populacional
    printf("A Densidade Populacional é:  %.2f\n", media1);

    //Exibição dos resultados dos cálculos do PIB per Capita
    printf("O PIB per Capital é:  %.2f\n", media2);




    // mostrar carta 1
    printf(" Carta 1\n");
    printf("Habitantes: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("PIB: %.4f bilhoes de reais\n", PIB);
    printf("Área: %.4f km²\n", area);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Densidade Populacional: %.2f Hab/km²\n",  media1);
    printf("PIB per Capita: %.2f reais\n", media2);



    // carta 2
    printf("Carta 2 \n");

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB);

    printf("Digite a Área: ");
    scanf("%f", &area);

    printf("Qual o Estado: ");
    scanf("%s", estado); 

    printf("Digite o código da carta: ");
    scanf("%s", codigo); 

    printf("Nome da cidade: ");
    scanf("%s", nomecidade); 


    // Cálculo da Densidade Populacional
    media1 = (float) (populacao + area ) / 2;
   

    // Cálculo do PIB per Capita
    media2 = (float) (PIB + populacao ) / 2;
    

    //Exibição dos resultados dos cálculo da Densidade Populacional
    printf("A Densidade Populacional é:  %.2f\n", media1);

    //Exibição dos resultados dos cálculos do PIB per Capita
    printf("O PIB per Capital é:  %.2f\n", media2);



    // mostrar carta 2
    printf("\n Carta 2 \n");
    printf("Habitantes: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("PIB: %.4f bilhões de reais\n", PIB);
    printf("Área: %.4f km²\n", area);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Densidade Populacional: %.2f Hab/km²\n", media1);
    printf("PIB per Capita: %.2f reais\n", media2);
  

    return 0;
}