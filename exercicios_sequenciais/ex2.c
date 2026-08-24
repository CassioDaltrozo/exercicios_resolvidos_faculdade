#include <stdio.h>

int main(){
    double reais, dollars = 0.19; //valores do dia (24/08/2026)

    printf("insert a value in reais: ");
    scanf("%lf", &reais);

    dollars *= reais;
    printf("%.2lf reais is equal to %.2lf dollars.\n", reais, dollars);

}