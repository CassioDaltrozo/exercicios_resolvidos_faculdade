#include <stdio.h>

int main() {
    int M[4][4];
    int pares = 0, i, j, d_sec = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);

            if (M[i][j] % 2 == 0) {
                pares++;
            }
        }
        d_sec += M[i][3 - i];  //CUIDAR COM OS INDICES!!!!
    }

    printf("\nQuantidade elementos pares: %d\nDiagonal secundaria: %d\n\n", pares, d_sec);

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%2d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}