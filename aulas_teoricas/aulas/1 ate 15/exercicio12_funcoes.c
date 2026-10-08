#include <stdio.h>

void mostrarMenu();
void mostrarDivisores();
void somaValores();
void mostrarseqPares();
void numeroPerfeito();

int main(){
    int opc, saida = 0;

    while(!saida){
        mostrarMenu();

        do{
        scanf("%d", &opc);
        if(opc < 1 || opc > 5)
            printf("\nPor favor, insira entre 1 e 5: ");
        } while(opc < 1 || opc > 5);

        switch(opc){
            case 1:
                somaValores();
                break;
            case 2:
                mostrarDivisores();
                break;
            case 3:
                mostrarseqPares();
                break;
            case 4:
                numeroPerfeito();
                break;
            case 5:
                saida = 1;
                break;
            
        }
    }
    
}

void mostrarMenu(){
    printf(" ");
    for(int i = 0; i < 5; i++){
        printf("*");
    }
    printf("\n  MENU\n ");
    for(int i = 0; i < 5; i++){
        printf("*");
    }
    printf("\n\n   1 – Soma de dois valores reais\n   2 – Divisores do numero\n   3 – Sequencia de numeros pares\n   4 – Verifica se o numero eh perfeito\n   5 -- SAIR\n\nInforme a opcao desejada: ");

}

void somaValores(){
    int x, y;
    printf("\nInsira 2 valores: ");
    scanf("%d%d", &x, &y);
    printf("a soma de %d e %d é: %d\n\n", x, y, x+y);
}

void mostrarDivisores(){
    int x;
    printf("Insira um valor: ");
    scanf("%d", &x);
    for(int i = 1; i <= x; i++){
        if((x % i) == 0){
            printf("%d é divisor de %d/ ", i, x);
        }
    printf("\n\n");
    }
}

void mostrarseqPares(){
    int x;
    printf("Insira um valor: ");
    scanf("%d", &x);
    printf("SEQUENCIA PARES ATÉ %d: ", x);
    for(int i = 0; i <= x; i++){
        if((i % 2) == 0)
            printf("%d,", i);
    }
    printf("\n\n");
}

void numeroPerfeito(){
    int x;
    int soma_div = 0;
    printf("Insira um valor: ");
    scanf("%d", &x);
    for(int i = 1; i < x; i++){
        if((x % i) == 0){
            soma_div += i;
        }
    }
    if(soma_div == x){
        printf("O numero %d eh perfeito\n\n", x);
    }
    else {
        printf("o numero nao eh perfeito.\n\n");
    }

}