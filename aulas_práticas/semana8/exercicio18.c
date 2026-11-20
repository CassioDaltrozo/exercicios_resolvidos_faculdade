#include <stdio.h>

void conversao(int seg, int *hor, int *min, int *segfinal);

int main(){
    int seg_atual, horas, minutos, segundos_fin;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &seg_atual);

    conversao(seg_atual, &horas, &minutos, &segundos_fin);

}

void conversao(int seg, int *hor, int *min, int *segfinal){
    *hor = seg / 3600;
    printf("Horas: %d\n", *hor);

    *min = (seg % 3600) / 60;
    printf("Minutos: %d\n", *min);

    *segfinal = (seg % 3600) % 60;
    printf("Segundos: %d\n", *segfinal);
}
