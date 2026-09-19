#include <stdio.h>
#include <math.h>

int main(){
    double x,y,z, arithmetic_mean, harmonic_mean;

    printf("enter x, y, z to calculate the mean: ");
    scanf("%lf %lf %lf", &x,&y,&z);

    arithmetic_mean = (x + y + z) / 3;
    harmonic_mean = (3 / ((1 / x) + (1 / y) + (1 / z)));

    printf("arithmetic mean: %.2lf\nharmonic mean: %.2lf\n", arithmetic_mean, harmonic_mean);

}