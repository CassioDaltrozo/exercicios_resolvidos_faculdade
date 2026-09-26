#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COLOR_R 0
#define COLOR_G 1
#define COLOR_B 2

int main(){
    srand(time(NULL));
    int matriz3D[4][4][3];
    int i,j,k, min = 0, max = 255;
    float R = 0.0 ,G = 0.0 , B = 0.0;
    int pixel_brilhante = 0, somaRGB, lb, cb;
    int escala_cinza[4][4] = {0};

    //GERAÇÃO DE VALORES E IMPRIMINDO MATRIZ
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("(");
            for(k = 0; k < 3; k++){
                matriz3D[i][j][k] = min + (rand() % (max - min + 1));
                printf("%3d,", matriz3D[i][j][k]);
            }
            printf(") ");
        }
        printf("\n");
    }

    //FAZENDO MEDIA RGB, ENCONTRANDO PIXEL MAIS BRILHANTE E FAZENDO ESCALA CINZA
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            R += matriz3D[i][j][COLOR_R];
            G += matriz3D[i][j][COLOR_G];
            B += matriz3D[i][j][COLOR_B];

            somaRGB = matriz3D[i][j][COLOR_R] + matriz3D[i][j][COLOR_G] + matriz3D[i][j][COLOR_B];
                if(somaRGB >= pixel_brilhante){
                    pixel_brilhante = somaRGB;
                    lb = i;
                    cb = j;
                }
            escala_cinza[i][j] += matriz3D[i][j][COLOR_R] + matriz3D[i][j][COLOR_G] + matriz3D[i][j][COLOR_B];
            }

            escala_cinza[i][j] /= 3;
        }
    R /= 16;
    G /= 16;
    B /= 16;

    //IMPRIMINDO MEDIA RGB, PIXEL MAIS BRILHANTE E ESCALA CINZA
    printf("\nmedia canal R: %.2f\nmedia canal G: %.2f\nmedia canal B: %.2f\n", R,G,B);
    printf("\nPixel mais brilhante: linha %d coluna %d\nSoma R+G+B: %d\n", lb, cb, pixel_brilhante);

    printf("\nImagem em escala de cinza: \n");
    for(i = 0; i < 4; i++){
        printf("( ");
        for(j = 0; j<4; j++){
            printf("%3d ", escala_cinza[i][j]);
        }
        printf(")\n");
    }
}
        