#include <stdio.h>
#include <math.h>

int main(){
    int s1 = 0, s2 = 0, n = 0, m = 0;

    printf("Entre com o valor de N: ");
    scanf("%d", &n);

    //LOOP DA SOMA 1
    for(int i = 0; i <= n; i += 2){
        s1 += i;
    }

    //ENCONTRANDO M PARA FAZER LOOP DA SOMA 2
    if (n % 2 == 0){
        m += n;
    }
    else{
        m += n-1;
    }

    //LOOP DA SOMA 2
    for(int i = 2; i <= m; i += 2){
        if (i % 4 == 0){
            s2 -= pow(i,2);
        }
        else{
            s2 += pow(i,2);}
    }

    printf("%d\n", s1);
    printf("%d\n", s2);

}
