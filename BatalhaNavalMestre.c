#include <stdio.h>
 
int main() {
    
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10];
    int habilidade_cone[5][5];
    int habilidade_cruz[5][5];
    int habilidade_octaedro[5][5];

    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};   
    int navio_diagonal1[3] = {3, 3, 3};
    int navio_diagonal2[3] = {3, 3, 3};
    
    //Inicializando matriz tabuleiro

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
            
        }
        
    }
    
    //Posicionamento dos navios

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[0][0 + i] = navio_horizontal[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[7 + i][9] = navio_vertical[i];
    }

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[6 + i][4 + i] = navio_diagonal1[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[2 + i][4 - i] = navio_diagonal2[i];
    }

    //Habilidades especiais
   

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            habilidade_cone[i][j] = 5;
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = -i; j <= i; j++)
        {
            tabuleiro[0 + i][6 + j] = habilidade_cone[i][j];
        }
        
    }
    
    int base_i = 5; 
    int base_j = 7;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            habilidade_cruz[i][j] = 5;
        }
        
    }
    
    for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5 ; j++){
                if (i == 2 || j == 2)
                {
                    tabuleiro[base_i + (i - 2)][base_j + (j - 2)] = habilidade_cruz[i][j];
                }
            } 
        }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            habilidade_cone[i][j] = 5;
        }
        
    }

    for (int i = 0; i < 5; i++) {  
    int alcance = (i <= 2) ? i : 4 - i; 
    for (int j = 0; j < 5; j++) { 
        if (j >= 2 - alcance && j <= 2 + alcance) { 
            habilidade_octaedro[i][j] = 5;
        } else { 
            habilidade_octaedro[i][j] = 0;
        }
    }
}
    int baseO_i = 7;    
    int baseO_j = 2;
    for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        tabuleiro[baseO_i + (i - 2)][baseO_j + (j - 2)] = habilidade_octaedro[i][j];//
    }
}
        

   printf("### TABULEIRO BATALHA NAVAL ### \n");
printf("   ");
for (int i = 0; i < 10; i++) {
    printf("%c ", 'A' + i);
}
printf("\n");

// Imprime tabuleiro
for (int i = 0; i < 10; i++) {
    printf("%2d ", i + 1);  
    for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}

    return 0;
}