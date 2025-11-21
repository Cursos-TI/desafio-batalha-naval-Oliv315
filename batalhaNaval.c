#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main(){
    char horizontal[10]={'A','B','C','D','F','G','H','I','J','H'};
    int vertical[10]={1,2,3,4,5,6,7,8,9,10};

    int tabuleiro[LINHA][COLUNA];
    

    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {        //dando valor ao tabuleiro
            tabuleiro[i][j] = 0;
        }
    }
    //for (int d = 0; d < 10; d++) {            //imprimir o 3 quando  a linha e coluna forem valores iguais a1 b2 c3...
    //tabuleiro[d][d] = 3;
    //}
 //------------
    for (int b = 0; b < 5; b++){
        tabuleiro[b][2] = 3;                         // <<  imprime o 3 quando chegar na casa C até a contagem 5                     
        for (int c = 0; c < 5; c++)                   //<< imprime o 3 do A ao F ate a contagem 5
        {                                        
            tabuleiro[2][c] = 3;
        }
    }
 //-----------

    for (int r = 0; r < 1; r++)
    {   tabuleiro[7][2] = 3;                //imprime o 3 uma vez na casa 8-3
        for (int t = 1; t < 4; t++)              
        {
            tabuleiro[8][t] = 3;                //imprime o 3 três vezes nas casas 9-2 ate 9-4
            for (int y = 0; y < 5; y++)
            {
                tabuleiro[9][y] = 3;        //imprime o 3 cinco vezes nas casas 10-1 ate 10-5
            }
            
        }
    }
    //---------
    for (int f = 0; f < 1; f++)   //só imprime uma vez o numero 3 no 4-8
    {
        tabuleiro[3][7] = 3;
        for (int g = 6; g < 9; g++)         // imprime o 3 três vezes nas casas 5-7 ate 5-9
        {
            tabuleiro[4][g] = 3;            
            for (int h = 0; h < 1; h++)
            {
                tabuleiro[5][7] = 3;         // imprime o 3 uma vez na casa 6-8 
            }  
        }  
    }
    
    


    printf("   ");
    for (int h = 0; h < 10; h++) {                    // imprimir letras A ate H
        printf(" %c", horizontal[h]);
    }
    printf("\n");

    
    for (int i = 0; i < LINHA; i++) {               // exibir o tabuleiro 
        printf("%2d ", vertical[i]);  

        for (int j = 0; j < COLUNA; j++) {
            printf(" %d", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}