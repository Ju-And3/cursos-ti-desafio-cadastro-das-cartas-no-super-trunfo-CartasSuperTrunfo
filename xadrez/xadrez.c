#include <stdio.h>

int main() {
    int i;

    // Simulação da Torre usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Simulação do Bispo usando while
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // Simulação da Rainha usando do-while
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
