#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 20

int main(){
    srand(time(NULL));

    int conjunto[TAMANHO];
    int max = 10, min = 1;
    int frequencia[11] = {0};
    float media = 0.0;

    //GERANDO O VETOR, FAZENDO MÉDIA, CONJUGANDO FREQUENCIA
    printf("VETOR GERADO: \n");
    for(int i = 0; i < TAMANHO; i++){
        conjunto[i] = (min + (rand() % (max - min + 1)));
        media += conjunto[i];
        printf("%d ", conjunto[i]);
        frequencia[conjunto[i]]++;
    }
    media /= TAMANHO;

    //IMPRIMINDO FREQUENCIA 
    printf("\n\n");
    for(int i = 1; i < 11; i++){
        printf("NUMERO %d APARECE %d vezes\n", i, frequencia[i]);
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
