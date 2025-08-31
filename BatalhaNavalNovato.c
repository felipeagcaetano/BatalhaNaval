#include <stdio.h>

int main(){

    int tabuleiro[10][10] = {0};
    int i, j;
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //Marcação do navio horizontal

    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    //Marcação do navio vertical

    tabuleiro[4][4] = 3;
    tabuleiro[5][4] = 3;
    tabuleiro[6][4] = 3;

    //Colunas

    for (i = 0; i < 10; i++)
    {
        printf("%c ", colunas[i]);
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