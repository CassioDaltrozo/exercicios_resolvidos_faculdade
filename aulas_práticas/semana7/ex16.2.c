#include <stdio.h>
#include <math.h>

int soma_num(int N);
int soma_quad(int N);
float media_nprim(int N);

int main(){
    int opcao, meuN;

    do{
    printf("1 - Calcular a soma dos N primeiros números naturais\n2 - Calcular a soma dos quadrados dos N primeiros números naturais\n3 - Calcular a média dos N primeiros números naturais\n0 - Sair\nOpcao: ");
    scanf("%d", &opcao);
    if(opcao < 0 || opcao > 3)
        printf("Opcao invalida.\n");
    } while(opcao < 0 || opcao > 3);

    while(opcao){
        switch (opcao)
        {
        case 1:
            printf("Digite um numero: ");
            scanf("%d", &meuN);
            printf("Soma: %d\n",soma_num(meuN));
            break;
        case 2:
            printf("Digite um numero: ");
            scanf("%d", &meuN);
            printf("Soma QUAD: %d\n", soma_quad(meuN));
            break;
        case 3:
            printf("Digite um numero: ");
            scanf("%d", &meuN);
            printf("Media: %.2f\n", media_nprim(meuN));
            break;
        }

        do{
        printf("1 - Calcular a soma dos N primeiros números naturais\n2 - Calcular a soma dos quadrados dos N primeiros números naturais\n3 - Calcular a média dos N primeiros números naturais\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);
        if(opcao < 0 || opcao > 3)
            printf("Opcao invalida.\n");
        } while(opcao < 0 || opcao > 3);
    }
}

int soma_num(int N){
    int soma = 0;
    for(int i = 1; i <= N; i++){
        soma += i;
    }
    return soma;

}

int soma_quad(int N){
    int soma = 0;
    for(int i = 1; i <= N; i++){
        soma += pow(i,2);
    }
    return soma;
}

float media_nprim(int N){
    int qnt_nat = 0;
    for(int i = 1; i <= N; i++){
        qnt_nat++;
    }
    return soma_num(N) / qnt_nat;
}