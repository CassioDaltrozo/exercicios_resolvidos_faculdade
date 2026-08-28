#include <stdio.h>

int main(){
    int A,B, N, sum;
    int multiples[3] = {0};
    int z = 0;

    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for(int i = N;;i++){
        if ((i % A == 0) && (i % B == 0)){
            multiples[z] += i;
            if (z == 2){
                for(int j = 0; j <= 2; j++){
                    sum += multiples[j];
                }
                break;
            }
            z++;
        }
    }

    printf("The three commons multiples from [%d to %d] beginning with %d are: \n", A, B, N);
    printf("%d\n%d\n%d\n", multiples[0], multiples[1], multiples[2]);
    printf("Sum of the multiples founded: %d\n", sum);

}