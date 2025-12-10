#include <stdio.h>

int main() {
    // -------------------------------
    // Simulação da Torre (usando FOR)
    // -------------------------------
    int casasTorre = 5; // número de casas que a Torre deve se mover
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Simulação do Bispo (usando WHILE)
    // -------------------------------
    int casasBispo = 5; // número de casas que o Bispo deve se mover
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // -------------------------------
    // Simulação da Rainha (usando DO-WHILE)
    // -------------------------------
    int casasRainha = 8; // número de casas que a Rainha deve se mover
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
