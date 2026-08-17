#include <stdio.h>

int main(){
    int segundos = 0;
    int *psegundos;
    int dias = 0, horas = 0, minutos = 0;

    printf("Insira uma quantidade de segundos em inteiros: ");
    scanf("%d", &segundos);

    psegundos = &segundos;
    int segundos_user = *psegundos;

    dias = segundos / 86400;
    segundos %= 86400;
    horas = segundos / 3600;
    segundos %= 3600;
    minutos = segundos / 60;
    segundos %= 60;

    printf("\n%d segundos correspondem a %d dias, %d horas, %d minutos e %d segundos.\n",segundos_user, dias, horas, minutos, segundos);

}
