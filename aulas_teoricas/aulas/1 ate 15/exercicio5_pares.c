#include <stdio.h>

int main(){
    int smaller, bigger;

    printf("enter the smaller and bigger number of the range: ");
    scanf("%d %d",&smaller, &bigger);
    printf("-------------------------------------------------\n");

    for (int counter = smaller; counter <= bigger; counter++){
        if ((counter % 2) == 0){
            printf("%d\n", counter);
        }
    }

}