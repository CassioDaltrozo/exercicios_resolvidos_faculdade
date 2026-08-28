#include <stdio.h>

int main(){
    int a,b,c,d,e,f,g,h,i;

    //Descrição e entrar com os dados
    printf("A seguir, digite 0 ou 1 nas posições do tabuleiro\na b c \nd e f\ng h i\n");
    printf("insira os valores :\n");
    scanf("%d %d %d"
          "%d %d %d"
          "%d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);

    //Soma de cada coluna, linha e diagonal possível. em caso de somatória 3, o jogador vence
    if ((a + b + c) == 3 || (d + e + f) == 3 || (g + h + i) == 3 || (a + d + g) == 3 ||
        (b + e + h) == 3 || (c + f + i) == 3 || (a + e + i) == 3 || (c + e + g) == 3) {
        printf("O jogador venceu.\n");
    }
    else {
        printf("O computador venceu.\n");}
    
    }
