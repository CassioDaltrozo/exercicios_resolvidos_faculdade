#include <stdio.h>
#include <ctype.h>

#define VENENO 0.98
#define BONUS 1.05

void simulaJogo(float *vida, float valor, char acao);

int main(){
    float vida_at, valor_at = 0.0;
    char acao_at;

    printf("Digite a vida inicial: ");
    scanf("%f", &vida_at);

    do{
        printf("--- MENU ---\nC - Cura\nD - Dano\nB - Bonus de armadura\nV - Veneno\nS - Sair\n");
        printf("Escolha uma ação: ");
        scanf(" %c", &acao_at);
        acao_at = toupper(acao_at);

        if(acao_at == 'C' || acao_at == 'D'){
            printf("Digite o valor: ");
            scanf("%f", &valor_at);
        }

        simulaJogo(&vida_at, valor_at, acao_at);
    } while(acao_at != 'S');

}

void simulaJogo(float *vida, float valor, char acao){
    switch(acao){
        case 'C':
            *vida += valor;
            break;
        case 'D':
            *vida -= valor;
            break;
        case 'B':
            *vida *= BONUS;
            break;
        case 'V':
            *vida *= VENENO;
            break;
        case 'S':
            printf("Jogo encerrado!\n");
            return;
            break;
        default:
            printf("Ação Inválida!\n");
            return;
            break;
    }
    if(*vida > 0)
        printf("Vida atual: %.2f\n\n", *vida);
    else
        printf("Voce Morreu!\n\n");

}
