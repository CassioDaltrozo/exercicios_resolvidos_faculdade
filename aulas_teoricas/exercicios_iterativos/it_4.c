#include <stdio.h>

int main(){

    while(1){
    int n = 0, test_perf = 0;

    printf("enter a value: ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        if (n % i == 0){
            test_perf += i;
        }
    }

    if (test_perf == n){
        printf("%d is a perfect number.\n", n);
    }}
}