#include <stdio.h>

int main () {
  
    int numcartas; 
    int populacao,pontosturisticos;
    float PIB, area;
    char nomecidade [50],codigo[50],estado[50];
  

    //carta 1
    printf("Carta 2 \n");
    printf("Digite a quantidade de habitantes: %d\n", populacao);
    scanf("%d", &populacao);
    
    printf("Digite o número de pontos turísticos: %d\n", pontosturisticos);
    scanf("%d", &pontosturisticos);

    printf("PIB: %.4f\n", PIB);
    scanf("%.4f", &PIB);

    printf("Área: %.4f\n", area);
    scanf("%.4f", &area);

    printf("EStados: %c\n", estado);
    scanf("%c", estado); 

    printf("Codigo da carta: %s\n", codigo);
    scanf("%s", codigo); 

    printf("Nome da cidade: %s\n", nomecidade);
    scanf("%s", nomecidade); 

    //mostrar carta 1
    printf ("Digite a quantidade de habitantes: %d habitantes- Digite o número de pontos turísticos: %d - PIB: %.4f\n ", populacao, pontosturisticos,PIB);
    printf ("Área: %.4f km2 - EStados: %c - Codigo da carta: %s - Nome da cidade: %s", area, estado,codigo,nomecidade);

    
    //carta 2
    printf("Carta 2 \n");
    printf("Digite a quantidade de habitantes: %d\n", populacao);
    scanf("%d", &populacao);
    
    printf("Digite o número de pontos turísticos: %d\n", pontosturisticos);
    scanf("%d", &pontosturisticos);

    printf("PIB: %.4f\n", PIB);
    scanf("%.4f", &PIB);

    printf("Área: %.4f\n", area);
    scanf("%.4f", &area);

    printf("EStados: %c\n", estado);
    scanf("%c", estado); 

    printf("Codigo da carta: %s\n", codigo);
    scanf("%s", codigo); 

    printf("Nome da cidade: %s\n", nomecidade);
    scanf("%s", nomecidade); 

    //mostrar carta 2
    printf ("Digite a quantidade de habitantes: %d habitantes- Digite o número de pontos turísticos: %d - PIB: %.4f\n ", populacao, pontosturisticos,PIB);
    printf ("Área: %.4f km2 - EStados: %c - Codigo da carta: %s - Nome da cidade: %s", area, estado,codigo,nomecidade);



    return 0;


}