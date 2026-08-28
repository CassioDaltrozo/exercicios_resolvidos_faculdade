#include <stdio.h>
#include <math.h>

int main(){
    double exp_value = 0, calculated_value = 0, x = 0, fatorial_sum = 1, term_count = 0;

    printf("enter the value of x: ");
    scanf("%lf", &x);

    exp_value = exp(x);

    for(int i = 0;; i++){

        term_count = i + 1;
        fatorial_sum = 1;

        for(int j = i; j >= 1; j--){
            fatorial_sum *= j;}
        
        calculated_value += pow(x,i) / fatorial_sum;

        if (fabs(calculated_value - exp_value) <= 0.0001){
            break;
        }
    }

    printf("the value of x is %.1lf, the value calculated in the series was %.2lf, the value given by the EXP function was %.2lf, and the total number of terms in the series was %.1lf.\n", x, calculated_value, exp_value, term_count);
}