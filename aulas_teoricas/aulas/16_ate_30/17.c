#include <stdio.h>

void trocatroca(int mat[], int lin, int col);

void printer(int x, int y, int vet[][y]);

int main(){
    int lin, col;

    do{
    printf("Digite o numero de linhas da matriz (entre 2 e 5): ");
    scanf("%d", &lin);
    } while (lin < 2 || lin > 5);

    do{
    printf("Digite o numero de colunas da matriz (entre 2 e 5): ");
    scanf("%d", &col);
    } while (col < 2 || col > 5);

    int my_mat[lin][col];

    printf("Digite os elementos da matriz:\n");

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &my_mat[i][j]);
        }
    }

    printf("\n");

    printer(lin, col, my_mat);

    trocatroca(*my_mat, lin, col);

    printer(lin, col, my_mat);
    
}

void trocatroca(int *mat, int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(i == j){
                *(mat + (i * col) + j) = 0;
            }
        }
    }
}

void printer(int x, int y, int vet[][y]){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}