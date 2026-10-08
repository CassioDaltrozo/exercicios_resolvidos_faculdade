#include <stdio.h>

void ordena(int* n1, int* n2, int* n3);

int main(){
    int my_n1 = 3, my_n2 = 2, my_n3 = 4;

    ordena(&my_n1, &my_n2, &my_n3);

}

void ordena(int* n1, int* n2, int* n3){
    int aux = *n3;

    if(*n1 > *n2 && *n1 > *n3){
        *n3 = *n1;
        if(aux > *n2){
            *n1 = *n2;
            *n2 = aux;
        }
        else{
            *n1 = aux;
        }
    }
    else if(*n2 > *n3){
        *n3 = *n2;
        if(aux > *n1)
            *n2 = aux;
        else{
            *n2 = *n1;
            *n1 = aux;
        }
    }

    else{
        int aux2 = *n2;
        if(*n1 > *n2){
            *n2 = *n1;
            *n1 = aux2;
        }
    }

    printf("New values:\nN1= %d, N2= %d, N3= %d\n", *n1, *n2, *n3);
}
