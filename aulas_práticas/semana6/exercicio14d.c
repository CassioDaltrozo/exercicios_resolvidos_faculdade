#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Q 2
#define P 3
#define ALN 4

int main(){
    srand(time(NULL));
    float M[ALN][P][Q] = {0};
    float nfinal[ALN] = {0};
    float mediap1q2 = 0.0, n = 0.0;
    int i,j,k, max = 5, min = 1;

    // GERANDO RANDOMICOS
    for(i = 0; i < ALN; i++){
        for(j = 0; j < P; j++){
            for(k = 0; k < Q; k++){
                M[i][j][k] = min + ((float)rand() / RAND_MAX) * (max - min);
            }
        }
    }

    //FAZENDO MEDIA P1 Q2
    for(i = 0; i < ALN; i++){
        mediap1q2 += M[i][0][1];
    }
    mediap1q2 /= ALN;


    //FAZENDO MEDIA FINAL POR ALUNO
    for(i = 0; i < ALN; i++){
        n = 0;
        for(j = 0; j < P; j++){
            for(k = 0; k < Q; k++){
                n += M[i][j][k];
            }
            nfinal[i] = n / P;
        }
    }

    //IMPRIMINDO MATRIZ
    for(i = 0; i < ALN; i++){
        printf("ALUNO %d:\n", i + 1);
        for(j = 0; j < P; j++){
            printf("PROVA %d: ", j + 1);
            for(k = 0; k < Q; k++){
                printf("q%d(%.2f) ", k + 1, M[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    //IMPRIMINDO MEDIA Q2 P1
    printf("MEDIA TURMA QUESTAO 2 PROVA 1: %.2f\n", mediap1q2);

    //IMPRIMINDO NOTAS FINAIS
    printf("\nNOTAS FINAIS:\n");
    for(i = 0; i < ALN; i++){
        printf("aluno %d: %.2f\n", i, nfinal[i]);
    }

    
}