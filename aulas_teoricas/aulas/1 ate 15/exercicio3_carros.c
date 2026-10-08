#include <stdio.h>

int main(){
    int distancia_c1, distancia_c2, tempo_c1, tempo_c2;
    float velocidade_c1, velocidade_c2;

    printf("insira a distancia percorrida pelo c1 (em km): ");
    scanf("%d", &distancia_c1);
    printf("insira a distancia percorrida pelo c2 (em km): ");
    scanf("%d", &distancia_c2);

    printf("insira o tempo do c1 (em horas): ");
    scanf("%d", &tempo_c1);
    printf("insira o tempo do c2 (em horas): ");
    scanf("%d", &tempo_c2);

    velocidade_c1 = (float)distancia_c1 / (float)tempo_c1;
    velocidade_c2 = (float)distancia_c2 / (float)tempo_c2;

    printf("\n");

    if (velocidade_c1 > velocidade_c2){
        printf("carro 1: %.2f km/h e carro 2: %.2f km/h\ncarro 1 foi mais rapido.\n", velocidade_c1, velocidade_c2);
    }
    else if (velocidade_c2 > velocidade_c1){
        printf("carro 1: %.2f km/h e carro 2: %.2f km/h\ncarro 2 foi mais rapido.\n", velocidade_c1, velocidade_c2);
    } else {
        printf("carro 1: %.2f km/h e carro 2: %.2f km/h\nos carros obtiveram mesma velocidade.\n", velocidade_c1, velocidade_c2);
    }

}