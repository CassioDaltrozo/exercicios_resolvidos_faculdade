#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b, float c, float* x1, float*x2);

int main(){
    float my_a = 1, my_b = 2, my_c = -3;
    float my_x1, my_x2;

    bhaskara(my_a, my_b, my_c, &my_x1, &my_x2);

}

void bhaskara(float a, float b, float c, float* x1, float* x2){
    float delta = (float)pow(b,2) - (4 * a * c);

    *x1 = (-b + (float)sqrt(delta)) / (2 * a);
    *x2 = (-b - (float)sqrt(delta)) / (2 * a);
    
    printf("X1= %.2f, e X2= %.2f.\n", *x1, *x2);
}

