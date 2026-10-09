#include <stdio.h>

void calcula_consumo(float km, float litros);

int main(){
    float meu_km, qntd_litros;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &meu_km);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &qntd_litros);
    calcula_consumo(meu_km, qntd_litros);
}


void calcula_consumo(float km, float litros){
    float consumo = km / litros;

    if(consumo < 8)
        printf("Venda o carro!!\n");
    else if(consumo >= 8 && consumo <= 14)
        printf("Carro econômico!\n");
    else
        printf("Carro super econômico!\n");
}
