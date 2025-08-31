#include <stdio.h>

int main(){

    int tabuleiro[10][10] = {0};
    int i, j;
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //Marcação do navio horizontal

    for (int j = 6; j < 9; j++) {
        tabuleiro[6][j] = 3;
    }


    //Marcação do navio vertical

    for (int i = 3; i < 6; i++) {
        tabuleiro[i][2] = 3;
    }

    //Marcações navios na Diagonal

    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    //Colunas

    for (i = 0; i < 10; i++)
    {
        printf(" %c", colunas[i]);
    }
        printf("\n");

    //Tabuleiro

    for (i = 0; i < 10; i++)
    {
        printf ("%d ",i + 1 );
        for (j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}