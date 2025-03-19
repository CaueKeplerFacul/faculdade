#include <stdio.h>

#define TAMANHO 10
#define TAMANHO_HABILIDADE 5

void aplicarHabilidade(int matriz[TAMANHO][TAMANHO], int habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE], int origemLinha, int origemColuna) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            int linha = origemLinha + i - TAMANHO_HABILIDADE / 2;
            int coluna = origemColuna + j - TAMANHO_HABILIDADE / 2;
            if (linha >= 0 && linha < TAMANHO && coluna >= 0 && coluna < TAMANHO && habilidade[i][j] == 1) {
                matriz[linha][coluna] = 5;
            }
        }
    }
}

int main() {
    int matriz[TAMANHO][TAMANHO] = {0};
    int tamanhoNavio = 3;

    int linha1 = 2, coluna1 = 3;
    int linha2 = 5, coluna2 = 6;
    int linha3 = 1, coluna3 = 1;
    int linha4 = 1, coluna4 = 8;

    for (int i = 0; i < tamanhoNavio; i++) {
        if (coluna1 + i < TAMANHO) {
            matriz[linha1][coluna1 + i] = 3;
        }
    }

    for (int i = 0; i < tamanhoNavio; i++) {
        if (linha2 + i < TAMANHO) {
            matriz[linha2 + i][coluna2] = 3;
        }
    }

    for (int i = 0; i < tamanhoNavio; i++) {
        if (linha3 + i < TAMANHO && coluna3 + i < TAMANHO) {
            matriz[linha3 + i][coluna3 + i] = 3;
        }
    }

    for (int i = 0; i < tamanhoNavio; i++) {
        if (linha4 + i < TAMANHO && coluna4 - i >= 0) {
            matriz[linha4 + i][coluna4 - i] = 3;
        }
    }

    int cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    aplicarHabilidade(matriz, cone, 4, 4);
    aplicarHabilidade(matriz, cruz, 6, 6);
    aplicarHabilidade(matriz, octaedro, 7, 2);

    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
