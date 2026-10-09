#include <stdio.h>
#include <math.h>

int contar_digitos(int N);
int calcular_soma(int N);
float calcular_media(int N);

int main(){
    int opcao, meuN;

    do{
    printf("1 - Contar a quantidade de dígitos de um número\n2 - Calcular a soma dos dígitos de um número\n3 - Calcular a média dos dígitos de um número\n0 - Sair\nOpcao: ");
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
            printf("Quantidade: %d\n",contar_digitos(meuN));
            break;
        case 2:
            printf("Digite um numero: ");
            scanf("%d", &meuN);
            printf("Soma: %d\n", calcular_soma(meuN));
            break;
        case 3:
            printf("Digite um numero: ");
            scanf("%d", &meuN);
            printf("Media: %.2f\n", calcular_media(meuN));
            break;
        }

        do{
        printf("1 - Contar a quantidade de dígitos de um número\n2 - Calcular a soma dos dígitos de um número\n3 - Calcular a média dos dígitos de um número\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);
        if(opcao < 0 || opcao > 3)
            printf("Opcao invalida.\n");
        } while(opcao < 0 || opcao > 3);
    }

}

int contar_digitos(int N){
    return (int)(log10(N) + 1);
}

int calcular_soma(int N){
    int soma_digitos = 0;
    while(N > 0){
        soma_digitos += N % 10;
        N /= 10;
    }
    return soma_digitos;
}

float calcular_media(int N){
    return (float)calcular_soma(N) / contar_digitos(N);
}
