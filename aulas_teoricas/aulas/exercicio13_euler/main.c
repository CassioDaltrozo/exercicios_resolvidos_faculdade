#include "minhalib.h"
#include <stdio.h>
#include <math.h>

int main(){
    int i = 0;
    float x, resultado = 0;
    printf("digite o x: ");
    scanf("%f", &x);

    do{
        resultado += potencia(x,i) / fatorial(i);
        i++;
    } while((exp(x) - resultado) >= 0.0001);

    printf("resultado: %.2f\n", resultado);
}