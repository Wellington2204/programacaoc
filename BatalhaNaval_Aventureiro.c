#include <stdio.h>

#define linhas 10
#define colunas 10
#define AGUA 0
#define NAVIO 3

// Inicializa o tabuleiro com água

void inicializarTabuleiro(int tabuleiro[linhas][colunas]) {
    printf("Jogo Batalha Naval\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

// Imprime o tabuleiro
void imprimirTabuleiro(int tabuleiro[linhas][colunas]) {
    printf("  ");
    for (int j = 0; j < colunas; j++) {
        printf("%d ", j + 1);  // Mostrar colunas de 1 a 10
    }
    printf("\n");

    for (int i = 0; i < linhas; i++) {
        printf("%d ", i + 1);  // Mostrar linhas de 1 a 10
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Coloca um navio horizontalmente a partir da posição (linha, coluna)
void colocarNavioHorizontal(int tabuleiro[linhas][colunas], int linha, int coluna, int tamanho) {
    linha--;   // Ajusta para índice de matriz (0-based)
    coluna--;
 
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha][coluna -i ] = NAVIO;
    }
}

void colocarNavioVertical(int tabuleiro[linhas][colunas], int linha, int coluna, int tamanho) {
 
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha][coluna + i] = NAVIO;
    }
}
void colocarNavioDiagonal(int tabuleiro[linhas][colunas], int linha, int coluna, int tamanho) {
 
    for (int i = 0; i < linha; i++) {
        tabuleiro[i][i] = NAVIO;
    }
}

int main() {
    int tabuleiro[linhas][colunas];

    inicializarTabuleiro(tabuleiro);

    // Coloca um navio horizontal de tamanho 1 começando na posição (1,1)
    colocarNavioHorizontal(tabuleiro, 1, 1, 1);

     // Coloca um navio vertical de tamanho 1 começando na posição (2,2)
     colocarNavioVertical(tabuleiro, 1, 1, 1);

     // Coloca dez navio diagonal de tamanho 1 começando na posição (1,10)
     colocarNavioDiagonal(tabuleiro, 10, 10, 1);

    // Mostra o tabuleiro
    imprimirTabuleiro(tabuleiro);

    return 0;
}
