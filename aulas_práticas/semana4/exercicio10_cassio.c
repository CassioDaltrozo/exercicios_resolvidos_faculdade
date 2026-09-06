#include <stdio.h>

int main(){
    int N = 0, divisores = 0, maior_divisor = 0, qntd_domaiordivisor = 0;
    printf("digite o valor de N: ");
    scanf("%d", &N);

    //LOOP SEQUENCIA DE N
    for(int i = 1; i <= N; i++){
        divisores = 0;

        //CALCULA A QUANTIDADE DE DIVISORES DO VALOR i
        for(int j = 1; j <= i; j++){
            if (i % j == 0){
                divisores++;
            }
        }

        //TESTA CONDICIONAL DO NUMERO E DA QUANTIDADE DE DIVISORES DELE
        if(qntd_domaiordivisor < divisores){
            maior_divisor = i;
            qntd_domaiordivisor = divisores;
        }
    }
    printf("Numero com mais divisores: %d\n", maior_divisor);
    printf("Quantidade de divisores: %d\n", qntd_domaiordivisor);
}
