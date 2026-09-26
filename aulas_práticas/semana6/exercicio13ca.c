#include <stdio.h>

int main(){
    int M[4][4];
    int soma_linhas[4] = {0};
    int i,j, soma_diagonal = 0;

    //GERANDO MATRIZ, FAZENDO SOMA DAS LINHAS E DA DIAGONAL PRINCIPAL
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento (%d,%d): ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
            soma_linhas[i] += M[i][j];
            if(i == j){
                soma_diagonal += M[i][j];
            }
        }
    }
    printf("\n");

    //IMPRIMINDO SOMA DA LINHA E DA DIAGONAL
    for(i = 0; i < 4; i++){
        printf("Soma linha %d: %d\n", i + 1, soma_linhas[i]);
    }
    printf("Soma da diagonal principal: %d\n", soma_diagonal);

    //TROCANDO >10 POR 10 E IMPRIMINDO MATRIZ RESULTANTE
    printf("\nMATRIZ RESULTANTE: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(M[i][j] > 10){
                M[i][j] = 10;
            }
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

}
