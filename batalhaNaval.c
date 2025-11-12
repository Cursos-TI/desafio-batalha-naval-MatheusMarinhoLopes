#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10]; // tamanho do tabuleiro
    int i, j;
    int tamanhoNavio = 3;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // posicionamento do Navio 1 (navio horizontal)
    int linhaH = 2; // o 'H' significa que é o navio na horizontal
    int colunaH = 4; // o 'H' significa que é o navio na horizontal

    tabuleiro[linhaH][colunaH] = 3;
    tabuleiro[linhaH][colunaH + 1] = 3;
    tabuleiro[linhaH][colunaH + 2] = 3;

    // posicionamento do Navio 2 (navio vertical)
    int linhaV = 5; // o 'V' significa que é o navio na vertical
    int colunaV = 7; // o 'V' significa que é o navio na vertical

    tabuleiro[linhaV][colunaV] = 3;
    tabuleiro[linhaV + 1][colunaV] = 3;
    tabuleiro[linhaV + 2][colunaV] = 3;

    // posicionamento do Navio 3 (navio diagonal principal)
    for (int i = 0; i < tamanhoNavio; i++){
        int linhaDiagonalPrincipal = 0 + i;
        int colunaDiagonalPrincipal = 0 + i;

        tabuleiro[linhaDiagonalPrincipal][colunaDiagonalPrincipal] = 3;
    }

    // posicionamento do Navio 4 (navio diagonal secundária)
    for (int i = 0; i < tamanhoNavio; i++){
        int linhaDiagonalSecundaria = 5 + i;
        int colunaDiagonalSecundaria = 4 - i;

        tabuleiro[linhaDiagonalSecundaria][colunaDiagonalSecundaria] = 3;
    }

        printf("  -- Tabuleiro Batalha Naval --  \n"); // imprime o tabuleiro e as posições dos 2 navios
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
            printf("\n");
    }
            printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
