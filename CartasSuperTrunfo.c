#include <stdio.h>

int main () {
  
    int numcartas=0; 
    int populacao=0, pontosturisticos=0;
    float PIB=0.0, area=0.0;
    char nomecidade[50]="", codigo[50]="", estado[50]="";
  
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

    // mostrar carta 1
    printf(" Carta 1\n");
    printf("Habitantes: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("PIB: %.4f bilhoes de reais\n", PIB);
    printf("Área: %.4f km²\n", area);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);


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

    // mostrar carta 2
    printf("\n Carta 2 \n");
    printf("Habitantes: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("PIB: %.4f\n", PIB);
    printf("Área: %.4f km²\n", area);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);

    return 0;
}