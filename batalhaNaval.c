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
    for (int d = 0; d < 10; d++) {            //imprimir o 3 quando  a linha e coluna forem valores iguais a1 b2 c3...
    tabuleiro[d][d] = 3;
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






    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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
