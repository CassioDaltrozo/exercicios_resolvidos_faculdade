#include <stdio.h>
#include <math.h>

int main(){
    int j = 25, y = 1;
    double x, sum1 = 0, sum2 = 0, sum3 = 0;

    printf("enter the value of x: ");
    scanf("%lf", &x);

    //soma dos impares
    for(int z = 0; z <= 12; z++){
        sum1 += pow(x, j) / y;
        y += 2;
        j -= 2;
    }

    //soma dos pares  
    j = 24;
    y = 2;
    for(int z = 0; z <= 12; z++){
        sum2 += pow(x, j) / y;
        y += 2;
        j -= 2;
    }

    //soma total : impares - pares
    sum3 = sum1 - sum2;
    printf("the total sum is : %.2lf\n", sum3);
}