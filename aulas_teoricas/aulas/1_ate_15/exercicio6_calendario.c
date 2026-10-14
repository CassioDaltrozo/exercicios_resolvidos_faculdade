#include <stdio.h>

int main(){
    int dias_tmes, dia_inic, contador = 0;
    printf("Insira o dia (1-7) que o mês começa: ");
    scanf("%d", &dia_inic);
    printf("Insira o numero de dias do mês (28-31): ");
    scanf("%d", &dias_tmes);
    printf("-------------------------------------------\n");
    printf("D      S      T      Q      Q      S      S\n");
    
    for (int i = 1; i < dia_inic; i++){
        printf("       ");
        contador++;
    }

    for (int i = 1; i <= dias_tmes; i++){
        printf("%d", i);

        if (i < 10){
            printf("      ");}
        else{
            printf("     ");}

        contador++;

        if (contador % 7 == 0)
            printf("\n");
    }

    printf("\n-------------------------------------------\n");
    

}