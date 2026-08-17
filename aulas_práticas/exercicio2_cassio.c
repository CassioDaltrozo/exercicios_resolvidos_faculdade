#include <stdio.h>

int main(){
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0;
    float media_ponderada = 0.0;

    printf("Insira a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota do aluno: ");
    scanf("%f", &nota3);

    media_ponderada = (0.3 * nota1) + (0.3 * nota2) + (0.4 * nota3) / 1;

    printf("\nA media ponderada final do aluno ficou %.2f pontos.\n", media_ponderada);

    }
