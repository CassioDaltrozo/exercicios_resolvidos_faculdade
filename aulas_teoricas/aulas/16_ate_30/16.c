#include <stdio.h>

int returner(int *vector, int size);

int *maior(int vet[], int tam);

#define SIZE 3

int main(){
    int my_vector[SIZE] = {1,15,3};

    printf("%d\n", returner(my_vector, SIZE));
    
    printf("%d\n", *maior(my_vector, SIZE));

}

int returner(int *vector, int size){
    int bigger = *vector;
    int i_bigger = 0;
    for(int i = 0; i < size; i++){
        if (*(vector + i) > bigger){
            bigger = *(vector + i);
            i_bigger = i;
        }
    }
    return *(vector + i_bigger);
}

int *maior(int vet[], int tam){
    int i, *p;
    p = vet;
    for(i = 0; i < tam; i++){
        if(vet[i] > *p){
            p = vet + i;
        }
    }
    return p;
}