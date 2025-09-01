#include <stdio.h>


int main(){
    int linha[10];
    char coluna[10];
    int tabuleiro[10][10];
    int navioHorizontal[3];
    int navioVertical[3];
    int navioDiagonal1[3];
    int navioDiagonal2[3];

    // Estrutura de repetição para preencher o conteúdo do tabuleiro com o valor 0
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Recebe a posição do navio horizontal
    for (int i = 0; i < 3; i++){
        navioHorizontal[i] = 3;
        tabuleiro[2][4] = navioHorizontal[i];
        tabuleiro[2][5] = navioHorizontal[i];
        tabuleiro[2][6] = navioHorizontal[i];
    }

    // Recebe a posição do navio vertical
    for (int j = 0; j < 1; j++){
        navioVertical[j] = 3;
        tabuleiro[5][7] = navioVertical[j];
        tabuleiro[6][7] = navioVertical[j];
        tabuleiro[7][7] = navioVertical[j];
    }

    // Recebe a posição dos navios diagonais
    for (int j = 0; j < 1; j++){
        navioDiagonal1[j] = 3;
        tabuleiro[0][0] = navioVertical[j];
        tabuleiro[1][1] = navioVertical[j];
        tabuleiro[2][2] = navioVertical[j];
    }

    for (int j = 0; j < 1; j++){
        navioDiagonal2[j] = 3;
        tabuleiro[5][0] = navioVertical[j];
        tabuleiro[6][1] = navioVertical[j];
        tabuleiro[7][2] = navioVertical[j];
    }

    // Recebe a quantidade de linhas
    for (int i = 0; i < 10; i++){
        linha[i] = i + 1;
    }

    // Recebe a quantidade de colunas
    for (int i = 0; i < 10; i++){
        coluna[i] = 'A' + i;
    }
    printf("\n");

    // Exibe o nome do jogo
    printf("### TABULEIRO BATALHA-NAVAL ###\n");
    printf("   ");

    // Imprime na tela as colunas
    for (int i = 0; i < 10; i++){
        printf("%c ", coluna[i]);
    }
    printf("\n");

    // Exibe a posição dos navios no tabuleiro
    for (int i = 0; i < 10; i++){
        printf("%2d", linha[i]);
        for (int j = 0; j < 10; j++){
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}