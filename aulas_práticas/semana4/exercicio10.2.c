#include <stdio.h>

int main(){
    int height, test = 0;
    printf("enter the value of the height: ");
    scanf("%d", &height);

    for(int i = 1; i <= height; i++){
        for(int k = height; k >= i; k--){
            printf(" ");
        }

        for(int j = (2 * i) - 1; j >= 1; j--){
            printf("*");}
        
    printf("\n");}
}