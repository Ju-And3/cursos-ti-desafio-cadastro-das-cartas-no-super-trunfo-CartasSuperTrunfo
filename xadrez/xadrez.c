#include <stdio.h>

int main() {
    int i;

    // Simulação da Torre 
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Simulação do Bispo 
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // Simulação da Rainha
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    // Simulação do Cavalo usando loops aninhados 
    printf("\nMovimento do Cavalo (2 casas para baixo, 1 para esquerda):\n");
    for (int j = 0; j < 2; j++) {
        printf("Baixo\n");
    }
    int k = 0;
    while (k < 1) {
        printf("Esquerda\n");
        k++;
    }

    return 0;
}
