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

void buscarAlturaAtletas(const char *nomeArquivo);

float calcula_medias(char filename[]);

int main(){
    char nome[] = "aulas_teoricas/aulas/16_ate_30/19.bin";

    le_atleta(nome);
    imprime_atleta(nome);
    buscarAlturaAtletas(nome);
    printf("altura media: %.2f\n", calcula_medias(nome));

}

void imprime_atleta(char filename[]){
    FILE *arq;
    Atleta atleta_t;
    int i;

    arq = fopen(filename, "rb");

    if (arq != NULL){
       
        while(fread(&atleta_t, sizeof(atleta_t), 1, arq) == 1){
            printf("atleta: %s\naltura : %.2f\n", atleta_t.nome, atleta_t.altura);
        }
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

    arq1 = fopen(filename, "ab"); 
    if (arq1 != NULL){
        fwrite(&mano1, sizeof(Atleta), 1, arq1);
        fclose(arq1);
    }

}

void limpabuffer(){
    int i;
    while((i = getchar()) != '\n' && i != EOF);
}

void buscarAlturaAtletas(const char *nomeArquivo) {
    // 1. Abre o arquivo binário para leitura ("rb")
    FILE *arquivo = fopen(nomeArquivo, "rb");
    if (arquivo == NULL) {
        printf("Erro: Nao foi possivel abrir o arquivo '%s'.\n", nomeArquivo);
        return;
    }

    char nomeBusca[50];
    Atleta atleta;
    int encontrado;

    // 2. Laço para possibilitar a busca de diversos atletas
    printf("--BUSCA DE ATLETAS--");
    while (1) {
        printf("\nDigite o nome do atleta (ou 'sair' para encerrar): ");
        scanf(" %49[^\n]", nomeBusca); // Lê o nome completo, incluindo espaços

        if (strcmp(nomeBusca, "sair") == 0) {
            break;
        }

        // 3. Reposiciona o ponteiro de leitura para o início do arquivo a cada nova busca
        rewind(arquivo);
        encontrado = 0;

        // 4. Lê registro por registro até o fim do arquivo
        while (fread(&atleta, sizeof(Atleta), 1, arquivo) == 1) {
            if (strcmp(atleta.nome, nomeBusca) == 0) {
                printf("-> Altura de %s: %.2f m\n", atleta.nome, atleta.altura);
                encontrado = 1;
                break; // Para a busca atual assim que encontrar o atleta
            }
        }

            if (!encontrado) {
                printf("-> Atleta '%s' nao encontrado no arquivo.\n", nomeBusca);
            }
        }

    // 5. Fecha o arquivo antes de encerrar a função
    fclose(arquivo);
    printf("Busca encerrada e arquivo fechado.\n");
}

float calcula_medias(char filename[]){
    FILE *arq;
    arq = fopen(filename, "rb");
    float altura_media;
    int athletes = 0;
    Atleta my_atlethe;

    while(fread(&my_atlethe, sizeof(Atleta), 1, arq) == 1){
        altura_media += my_atlethe.altura;
        athletes++;
    }
    altura_media /= (float)athletes;
    fclose(arq);
    return altura_media;
}