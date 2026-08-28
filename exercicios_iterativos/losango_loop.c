#include <stdio.h>
#include <unistd.h>

int main() {
    int x = 0;

    printf("digite um numero (tamanho do losango): ");
    scanf("%d", &x);

    printf("\n");

    // Parte Superior
    for (int i = 1; i <= x; i++) {

        for (int j = 1; j <= x - i; j++) {
                printf("   ");}

        for (int j = 1; j <= (2 * i - 1); j++) {
                printf("(-)");
                usleep(100000);}

            printf("\n");}

    // Parte Inferior
    for (int i = x - 1; i >= 1; i--) {

        for (int j = 1; j <= x - i; j++) {
                printf("   ");}

        for (int j = 1; j <= (2 * i - 1); j++) {
                printf("(-)");
                usleep(100000);}

            printf("\n");}
        
        }
