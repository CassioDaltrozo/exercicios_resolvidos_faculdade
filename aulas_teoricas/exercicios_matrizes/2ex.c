#include <stdio.h>

int main() {
    int m[10][10];
    int vpar[50];       
    int v_diagonal[10]; 
    int counter = 0;

    printf("preencha a matriz 10x10:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("valor pra m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            
            if(i % 2 == 0) {
                vpar[counter] = m[i][j];
                counter++;
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        v_diagonal[i] = m[i][i] + m[i][9 - i];
    }

    printf("\nmatriz: \n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%4d ", m[i][j]); 
        }
        printf("\n");
    }
    printf("\nvetor linhas pares (50 elementos): \n");
    for(int i = 0; i < 50; i++) {
        printf("%d ", vpar[i]);
    }
    printf("\n");

    printf("\nvetor soma da diagonal: \n");
    for(int i = 0; i < 10; i++) {
        printf("Soma linha %d: %d\n", i, v_diagonal[i]);
    }
    printf("\n");

    return 0;

}

