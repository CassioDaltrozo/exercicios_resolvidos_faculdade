#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 20

int main(){
    srand(time(NULL));

    int conjunto[TAMANHO];
    int max = 10, min = 1;
    int frequencia = 0;
    float media = 0.0;

    //GERANDO O VETOR, VERIFICANDO A MEDIA E IMPRIMINDO
    printf("VETOR GERADO: \n");
    for(int i = 0; i < TAMANHO; i++){
        conjunto[i] = (min + (rand() % (max - min + 1)));
        media += conjunto[i];
        printf("%d ", conjunto[i]);
    }
    media /= TAMANHO;


    //LOOP PARA FREQUENCIA USANDO CONTADOR
    printf("\n\nFREQUENCIA ABSOLUTA: \n");

    for(int i = 1; i <= max; i++){
        frequencia = 0;
        for(int j = 0; j <= TAMANHO; j++){
            if(conjunto[j] == i){
                frequencia++;
            }
        }
        printf("NUMERO: %d apareceu %d vezes\n", i, frequencia);
    }

    //TESTANDO CONDIÇÃO DA MEDIA
    printf("\nMEDIA: %.2f\n", media);

    printf("NUMEROS MAIORES QUE A MEDIA: ");
    for(int i = 0; i < TAMANHO; i++){
        if(conjunto[i] > media){
            printf("%d ", conjunto[i]);
        }
    }

    printf("\n");

}
