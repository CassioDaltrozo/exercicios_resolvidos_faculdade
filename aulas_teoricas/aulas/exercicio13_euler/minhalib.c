#include "minhalib.h"
#include <math.h>

float potencia(float x, int n){
    float resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= x;
    }
    return resultado;
}


int fatorial(int n){
    int resultado = 1;
    for(int i = n; i >= 1; i--){
        resultado *= i;
    }
    return resultado;
}

