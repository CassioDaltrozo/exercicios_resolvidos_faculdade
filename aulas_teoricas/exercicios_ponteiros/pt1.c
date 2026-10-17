#include <stdio.h>

#define SIZE 5

int bigger_vmat(int mat[3][3]);
int vector_sum(int *vetor, int size);
void duplicator(int *num);

int main(){
    int x = 15;
    int my_vector[SIZE] = {1,2,3,4,5};
    int my_matrix[3][3] = {0};
    my_matrix[1][2] = 51;

    duplicator(&x);

    printf("NEW VALUE: %d\nSUM: %d\nBIGGEST MATRIX VALUE: %d\n", x, vector_sum(my_vector, SIZE), bigger_vmat(my_matrix));

}

void duplicator(int *num){
    *num *= 2;
}

int vector_sum(int *vector, int size){
    int sum = 0;
    int i = 0;
    while(i < size){
        sum += *(vector + i);
        i++;
    }
    return sum;
}

int bigger_vmat(int mat[3][3]){
    int biggest_v;
    int i, j;
    for(i = 0; i < 3; i++){
        if (i == 0)
            biggest_v = **mat;
        for(j = 0; j < 3; j++){
            if (*(*(mat + i) + j) > biggest_v)
                biggest_v = *(*(mat + i) + j);

        }
    }
    return biggest_v;
}