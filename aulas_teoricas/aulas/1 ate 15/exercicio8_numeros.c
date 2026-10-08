#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define QUANTITY 20000
#define MIN 1000
#define MAX 100000

int main(){
    int set[QUANTITY];
    int number = 0, biggest, smallest, average = 0, smallest_dif, closest = 0;

    srand(time(NULL));

    for(int i = 0; i < QUANTITY; i++){
        number = MIN + (rand() % (MAX - MIN + 1));
        set[i] = number;
    }

    for(int i = 0; i < QUANTITY; i++){
        if(i > 0 && set[i] > biggest){
            biggest = set[i];
        }
        else if(i > 0 && set[i] < smallest){
            smallest = set[i];
        }
        else if(i == 0){
            smallest = set[i];
            biggest = set[i];

        }
        average += set[i];
    }

    average /= QUANTITY;

    for(int i = 0; i < QUANTITY; i++){
        if(i > 0 && abs(set[i] - average) < smallest_dif){
            closest = set[i];
            smallest_dif = abs(set[i] - average);
        }
        else if(i == 0){
            smallest_dif = abs(set[i] - average);
        }
}

    printf("%d, %d, %d, %d, %d\n", biggest, smallest, smallest_dif, closest, average);


}