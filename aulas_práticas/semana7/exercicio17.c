#include <stdio.h>

void multiplicar(int A, int* B, int multp);

int main(){
    int meuA, meuB, multiplicador;

    printf("Digite o valor de A: ");
    scanf("%d", &meuA);
    printf("Digite o valor de B: ");
    scanf("%d", &meuB);
    printf("Digite o multiplicador: ");
    scanf("%d", &multiplicador);

    printf("ANTES: A=%d, B=%d\n", meuA, meuB);
    multiplicar(meuA, &meuB, multiplicador);
    printf("DEPOIS: A=%d, B=%d\n", meuA, meuB);
}

void multiplicar(int A, int* B, int multp){
    A *= multp;
    *B *= multp;
}
