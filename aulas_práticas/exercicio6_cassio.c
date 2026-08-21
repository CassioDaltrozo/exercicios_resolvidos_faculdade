#include <stdio.h>

int main(){
    int x,y,z;

    //Entre com os dados
    printf("digite os lados x, y e z do triangulo: ");
    scanf(" %d %d %d", &x, &y, &z);

    //Testar se os valores são nulos
    if (x == 0 && y == 0 && z == 0) {
        printf("Isto não pode ser um triangulo. Inválido\n");
        return 0;
    }

    //Testar a validade do triangulo
    if (x < y + z && y < x + z && z < y + x){
        printf("Isto pode ser um triangulo.\n");

        if (x == y && x == z ) {
            printf("É um triangulo equilátero.\n");
        }
        else if (x == y || y == z || x == z) {
            printf("É um triangulo isoceles.\n");
        }
        else {
            printf("É um triangulo escaleno.\n");
        }
    }
    else {
    printf("Isto não pode ser um triangulo.");
        return 0;}
}
