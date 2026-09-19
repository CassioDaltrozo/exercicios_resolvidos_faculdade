#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10

int main(){
    srand(time(NULL));
    double min_val = 1.0, max_val = 20.0, biggest, smallest, difference = 0.0;
    double set[SIZE];

    //GENERATING VALUEST AND VERIFYING SIZES
    printf("VALUES GENERATED: (with 3 decimals)\n");
    for(int i = 0; i < SIZE; i++){
        set[i] = min_val + ((float) rand() / RAND_MAX) * (max_val - min_val);
        printf("%.3lf\n", set[i]);

        if(biggest < set[i] || i == 0){
            biggest = set[i];
        }

        if(smallest > set[i] || i == 0){
            smallest = set[i];
        }
    }

    printf("Biggest value: %lf\nLittlest value: %lf\n", biggest, smallest);


    //VERIFYING THE DIFFERENCES
    for(int i = 0; i < SIZE - 1; i++){
        for(int j = i + 1; j < SIZE; j++){
            if(fabs(set[i] - set[j]) < difference || i == 0){
                difference = fabs((set[i] - set[j]));
                biggest = set[i];
                smallest = set[j];
            }
        }
    }
    printf("Values closer to one another: %lf and %lf\nDifference: %lf\n", smallest, biggest, difference);


}