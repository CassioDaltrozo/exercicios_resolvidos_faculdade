#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Preencha (com números aleatórios de 1 a 99, supondo que a semente de números
aleatórios seja 0) uma matriz quadrada (de inteiros) de ordem 10 e obtenha a sua
transposta. Imprima as duas matrizes para averiguação.*/

#define L 10
#define C 10

int main(){
    srand(time(NULL));
    int min = 1;
    int max = 99;
    int matriz[L][C];
    int matriz_transposta[L][C];

    printf("MATRIZ NORMAL:\n");

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            matriz[i][j] = (min + (rand() % (max - min + 1)));
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\nMATRIZ TRANSPOSTA:\n");
    
    for(int j = 0; j < L; j++){
        for(int i = 0; i < C; i++){
            matriz_transposta[j][i] = matriz[i][j];
            printf("%d ", matriz_transposta[j][i]);
        }

        printf("\n");
    }

    
}