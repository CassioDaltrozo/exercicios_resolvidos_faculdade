#include <stdio.h>
#include <string.h>

#define MAX 50

typedef struct Atleta{
    char nome[MAX];
    float altura;
} Atleta;

void le_atleta(char filename[]);
void imprime_atleta(char filename[]);
void limpabuffer();

int main(){
    char nome[] = "aulas_teoricas/aulas/16_ate_30/19.bin";

    le_atleta(nome);
    imprime_atleta(nome);

}

void imprime_atleta(char filename[]){
    FILE *arq;
    Atleta atleta_t;

    arq = fopen(filename, "rb");

    if (arq != NULL){
        fread(&atleta_t, sizeof(atleta_t), 1, arq);
        printf("atleta: %s\naltura : %.2f\n", atleta_t.nome, atleta_t.altura);
        fclose(arq);
    }
}

void le_atleta(char filename[]){
    FILE *arq1;
    Atleta mano1;

    printf("digite um nome: ");
    fgets(mano1.nome, sizeof(mano1.nome), stdin);
    mano1.nome[strlen(mano1.nome) - 1] = '\0';

    printf("digite uma altura: ");
    scanf("%f", &mano1.altura);
    limpabuffer();

    arq1 = fopen(filename, "wb"); 
    if (arq1 != NULL){
        fwrite(&mano1, sizeof(Atleta), 1, arq1);
        fclose(arq1);
    }

}

void limpabuffer(){
    int i;
    while((i = getchar()) != '\n' && i != EOF);
}