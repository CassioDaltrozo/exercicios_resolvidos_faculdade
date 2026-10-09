#include <stdio.h>
#include <math.h>

void inverte_numero(int numero);

int main(){
    int num;
    printf("digite um numero inteiro positivo: ");
    scanf("%d", &num);

    inverte_numero(num);
}

void inverte_numero(int numero){
    printf("Numero Invertido: ");
    while(numero > 0){
        int digito = numero % 10;
        printf("%d", digito);
        numero /= 10;
    }
    printf("\n");
}