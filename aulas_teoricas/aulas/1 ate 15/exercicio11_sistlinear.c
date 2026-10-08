#include <stdio.h>
/*
Escrever um programa que leia do teclado os coeficientes de um sistema linear
triangular superior, os termos independentes, e calcule (imprimindo na tela) o vetor
solução. Assuma que o sistema possui solução única. Estabeleça um n máximo de 5.*/

#define NMAX 5

int main(){
    int n = 0;
    float sum = 0.0;
    float x_values[NMAX] = {0};

    printf("enter a value of N: ");
    scanf("%d", &n);

    if(n > 5)
        n = NMAX;

    int a_values[n][n];
    int b_values[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(i <= j){
                printf("enter the value of A in matrix[%d][%d]: ", i,j);
                scanf("%d", &a_values[i][j]);}
            else{
                a_values[i][j] = 0;}

        }
    }

    for(int i = 0; i < n; i++){
        printf("enter the value of B in matrix[%d]: ", i);
        scanf("%d", &b_values[i]);
    }

    for(int i = n - 1; i >= 0; i--){
        sum = 0.0;
        for(int j = i + 1; j < n; j++){
            sum += a_values[i][j] * x_values[j];
        }
        x_values[i] = (b_values[i] - sum) / a_values[i][i];
    }

    //PRINT MATRIZES
    printf("\nvalues of a: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a_values[i][j]);
        }

        printf("\n");
    }

    printf("\nvalues of b: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", b_values[i]);
        }

    printf("\nvalues of x: \n");

    for(int i = 0; i < n; i++){
        printf("x%d = %.2f\n", i + 1, x_values[i]);
    }

}

