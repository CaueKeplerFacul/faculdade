#include <stdio.h>
 
int main() {
    int matriz[10][10] = {0}; // Inicializa o tabuleiro com zeros
    int tamanhoNavio = 3;

    // Coordenadas para os navios
    int linha1 = 2, coluna1 = 3;
    int linha2 = 5, coluna2 = 6;
    int linha3 = 1, coluna3 = 1; // Diagonal crescente
    int linha4 = 1, coluna4 = 8; // Diagonal decrescente

    // Posicionando o primeiro navio horizontalmente
    for (int i = 0; i < tamanhoNavio; i++) {
        if (coluna1 + i < 10) {
            matriz[linha1][coluna1 + i] = 3;
        }
    }

    // Posicionando o segundo navio verticalmente
    for (int i = 0; i < tamanhoNavio; i++) {
        if (linha2 + i < 10) {
            matriz[linha2 + i][coluna2] = 3;
        }
    }

    // Posicionando o terceiro navio diagonal crescente
    for (int i = 0; i < tamanhoNavio; i++) {
        if (linha3 + i < 10 && coluna3 + i < 10) {
            matriz[linha3 + i][coluna3 + i] = 3;
        }
    }

    // Posicionando o quarto navio diagonal decrescente
    for (int i = 0; i < tamanhoNavio; i++) {
        if (linha4 + i < 10 && coluna4 - i >= 0) {
            matriz[linha4 + i][coluna4 - i] = 3;
        }
    }

    // Exibir o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
