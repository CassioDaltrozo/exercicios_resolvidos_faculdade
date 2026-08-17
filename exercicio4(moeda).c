#include <stdio.h>
#include <math.h>
//100 50 20 10 5 2 1

int main(){
    int valor = 0;
    int n100, n50, n20, n10, n5, n2, n1;

    printf("fale um preço em inteiros: ");
    scanf("%d", &valor);

    n100 += valor / 100;
    valor %= 100;
    n50 += valor / 50;
    valor %= 50;
    n20 += valor / 20;
    valor %= 20;
    n10 += valor / 10;
    valor %= 10;
    n5 += valor / 5;
    valor %= 5;
    n2 += valor / 2;
    valor %= 2;
    n1 += valor / 1;
    valor %= 1;

    printf("| cedulas de 100: %d \n| cedulas de 50: %d \n| cedulas de 20: %d \n| cedulas de 10: %d \n| cedulas de 5: %d \n| cedulas de 2: %d \n| cedulas de 1: %d\n", n100,n50,n20,n10,n5,n2,n1);

}
