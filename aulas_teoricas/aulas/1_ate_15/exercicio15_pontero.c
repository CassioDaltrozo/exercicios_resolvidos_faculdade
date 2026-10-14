#include <stdio.h>

void ordena(int* n1, int* n2, int* n3);

int main(){
    int my_n1 = 1, my_n2 = 3, my_n3 = 2;

    ordena(&my_n1, &my_n2, &my_n3);

}

void ordena(int* n1, int* n2, int* n3){
    int aux;
    if(*n3 <= *n2 && *n3 < *n1){
        aux = *n3;
        *n3 = *n1;
        *n1 = aux;
    }
    else if(*n2 <= *n3 && *n2 < *n1){
        aux = *n2;
        *n2 = *n1;
        *n1 = aux;
    }
    if (*n3 < *n2){
        aux = *n2;
        *n2 = *n3;
        *n3 = aux;
    }
    printf("New values:\nN1= %d, N2= %d, N3= %d\n", *n1, *n2, *n3);
}
