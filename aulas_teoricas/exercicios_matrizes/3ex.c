#include <stdio.h>

//MULTIPLICADOR DE MATRIZES EXEMPLO

#define CA 3
#define LA 2
#define CB 2
#define LB 3
#define N 3

int main(){
    int A[LA][CA] = {{1,2,3},
                    {4,5,6}};

    int B[LB][CB] = {{7,8},
                    {9,1},
                     {2,3},};

    int C[LA][CB] = {0};
    int i,j,k, s = 0;

    for(i = 0; i < LA; i++){
        for(j = 0; j < CB; j++){
            for(k = 0; k < N; k ++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(i = 0; i < LA; i++){
        for(j = 0; j < CB; j++){
            printf("%2d,", C[i][j]);
        }
        printf("\n");
    }

}