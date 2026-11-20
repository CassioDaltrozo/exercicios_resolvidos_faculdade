#include <stdio.h>

#define N 3

//DEFINICAO INSCRICAO
typedef struct Inscricao{
int numero;
int idade;
char categoria;
} Inscricao;

//ASSINATURA FUNCOES
void cadastra(char filename[], char modo[], int num);
void le_relatorio(char filename[], int num);

int main(){
    char nome_arquivo[] = "inscricoes.bin";

    //CHAMAMENTO DAS FUNCOES NA ORDEM PEDIDA E NOS MODOS
    printf("CADASTRO INICIAL\n");
    cadastra(nome_arquivo, "wb", N);
    le_relatorio(nome_arquivo, N);

    printf("\nCADASTRO DE NOVAS INSCRICOES\n");
    cadastra(nome_arquivo, "ab", 2);
    le_relatorio(nome_arquivo, N + 2);

}

//PASSA NOME, MODO E QUANDIDADE PARA CADASTRAR NO ARQUIVO
void cadastra(char filename[], char modo[], int num){
    int i;
    FILE *arquivo;
    Inscricao inscric[num];
    arquivo = fopen(filename, modo);

    if (arquivo == NULL){
        printf("ERROR.\n");
    }

    for(i = 0; i < num; i++){
        printf("\nInscrição %d\n", i + 1);
        printf("Numero: ");
        scanf("%d", &inscric[i].numero);
        printf("Idade: ");
        scanf("%d", &inscric[i].idade);
        printf("Categoria (E/P/G): ");
        scanf(" %c", &inscric[i].categoria);
    }
    fwrite(inscric, sizeof(Inscricao), num, arquivo);
    fclose(arquivo);
}

//PASSA NOME E QUANTIDADE DE INSCRICOES PARA RELATORIO
void le_relatorio(char filename[], int num){
    int i;
    FILE *arquivo = fopen(filename, "rb");
    Inscricao lidos;
    int total_insc = 0, total_prof = 0, total_pub = 0, total_est = 0;
    float id_media = 0.0f;

    printf("\nRELATORIO DE INSCRICOES\n-----------------------------------\nNumero Idade Categoria\n-----------------------------------\n");
    for(i = 0; i < num; i++){
        fread(&lidos, sizeof(Inscricao), 1, arquivo);
        printf("%5d%5d%5c\n", lidos.numero, lidos.idade, lidos.categoria);
        switch(lidos.categoria){
            case 'E':
                total_est++;
                break;
            case 'P':
                total_prof++;
                break;
            case 'G':
                total_pub++;
                break;
        }
        total_insc++;
        id_media += lidos.idade;
    }
    id_media /= total_insc;
    printf("-----------------------------------\n");
    printf("Total de inscricoes: %d\nEstudantes: %d\nProfessores: %d\nPublico geral: %d\nIdade media: %.2f\n\n", total_insc, total_est, total_prof, total_pub, id_media);

    fclose(arquivo);
}
