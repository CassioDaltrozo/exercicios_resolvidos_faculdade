#include <stdio.h>

#define NUMEROSECRETO 67

int main(){
    int palpite = 0, tentativas = 0;

    do{
    //entrar com valores    
    printf("Tente adivinhar o numero secreto entre 0 e 100.\n");
    printf("Digite seu palpite: ");
    scanf("%d", &palpite);

    //condicional de palpites
    if(palpite < NUMEROSECRETO){
        printf("Numero secreto eh maior.\n");
        tentativas++;
    }
    else if(palpite > NUMEROSECRETO){
        printf("Numero secreto eh menor.\n");
        tentativas++;
    }

    //condicional de tentativas
    if(tentativas >= 5 && palpite != NUMEROSECRETO){
        if(NUMEROSECRETO % 2 == 0){
            printf("Numero secreto eh par.\n");
            tentativas++;
        }
        else{
            printf("Numero secreto eh impar.\n");
            tentativas++;
        }
    }} while (palpite != NUMEROSECRETO);

    printf("NUMERO CORRETO!!\n");
}
