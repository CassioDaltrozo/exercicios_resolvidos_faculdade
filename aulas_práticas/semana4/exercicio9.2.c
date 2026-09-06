#include <stdio.h>
#include <math.h>

int main(){
    double x, tolerance, sum = 0;
    int terms = 0, valid = 1;

    while(valid){

        printf("Enter the value of X (-1 to 1): ");
        scanf("%lf", &x);

        if (x < -1 || x > 1){
            printf("Value of x out of interval.\n");
            continue;
        }

        printf("Enter the value of the tolerance: : ");
        scanf("%lf", &tolerance);

        for(int i = 1;; i += 2){
            double next_term = pow(x, i) / (i * (i + 1));

            if(fabs(next_term) < tolerance){
                valid = 0;
                break;
            }

            terms++;

            if(terms % 2 == 0){
                sum -= next_term;
            }
            else{
                sum += next_term;
            }

        }
        }
    printf("The result was: %lf\n", sum);
    printf("Amount of terms used: %d\n", terms);
    }