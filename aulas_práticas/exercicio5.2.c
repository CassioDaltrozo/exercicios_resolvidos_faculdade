#include <stdio.h>

int main(){
    float balance, p_credit, percent;

    printf("Insert your medium balance: ");
    scanf("%f", &balance);
    if (balance <= 2000 &&  balance > 0){
        p_credit = 0;
    }
    else if (balance > 2000 && balance <= 5000){
        p_credit = balance * 0.2;
    }
    else if (balance > 5000 && balance <= 10000){
        p_credit = balance * 0.3;
    }
    else {
        p_credit = balance * 0.4;
    }
    printf("the client will receive %.2f reais of bonus of the medium balance", p_credit);
}