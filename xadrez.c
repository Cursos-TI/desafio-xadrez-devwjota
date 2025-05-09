#include <stdio.h>

int main() {
    int x = 3, y = 3; // posição base da peça (linha 3, coluna 3 em um tabuleiro 8x8)

    // Movimento do Bispo (diagonais)
    printf("Movimento do Bispo a partir da posição (3, 3):\n");
    for (int i = 1; i < 8; i++) {
        if (x + i < 8 && y + i < 8) printf("(%d, %d)\n", x + i, y + i); // diagonal inferior direita
        if (x - i >= 0 && y - i >= 0) printf("(%d, %d)\n", x - i, y - i); // diagonal superior esquerda
        if (x + i < 8 && y - i >= 0) printf("(%d, %d)\n", x + i, y - i); // diagonal inferior esquerda
        if (x - i >= 0 && y + i < 8) printf("(%d, %d)\n", x - i, y + i); // diagonal superior direita
    }

    // Movimento da Torre (linha e coluna)
    printf("\nMovimento da Torre a partir da posição (3, 3):\n");
    for (int i = 0; i < 8; i++) {
        if (i != x) printf("(%d, %d)\n", i, y); // mesma coluna
        if (i != y) printf("(%d, %d)\n", x, i); // mesma linha
    }

    // Movimento da Rainha (combina torre e bispo)
    printf("\nMovimento da Rainha a partir da posição (3, 3):\n");
    // Torre
    for (int i = 0; i < 8; i++) {
        if (i != x) printf("(%d, %d)\n", i, y);
        if (i != y) printf("(%d, %d)\n", x, i);
    }
    // Bispo
    for (int i = 1; i < 8; i++) {
        if (x + i < 8 && y + i < 8) printf("(%d, %d)\n", x + i, y + i);
        if (x - i >= 0 && y - i >= 0) printf("(%d, %d)\n", x - i, y - i);
        if (x + i < 8 && y - i >= 0) printf("(%d, %d)\n", x + i, y - i);
        if (x - i >= 0 && y + i < 8) printf("(%d, %d)\n", x - i, y + i);
    }

    // Movimento do Cavalo (em L)
    printf("\nMovimento do Cavalo a partir da posição (3, 3):\n");
    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
    int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8) {
            printf("(%d, %d)\n", nx, ny);
        }
    }

    return 0;
}
