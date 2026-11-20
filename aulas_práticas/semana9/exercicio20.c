#include <stdio.h>

#define N 3

//ASSINATURA DE FUNCOES E STRUCT
typedef struct Imovel{
    int codigo;
    float area;
    float valor;
} Imovel;

void atualizaValor(struct Imovel *imovel, float percentual);
void reajuste(Imovel imoveis_r[], int tam);
void relatorio(Imovel imovel_r[], int tam);

int main(){
    int i;
    Imovel imoveis[N];

    //DEFINE VALORES DO VETOR IMOVEIS
    for(i = 0; i < N; i++){
        printf("Digite o codigo do imovel %d: ", i);
        scanf("%d", &imoveis[i].codigo);

        printf("Digite a area do imovel %d: ", i);
        scanf("%f", &imoveis[i].area);

        printf("Digite o valor do imovel %d: ", i);
        scanf("%f", &imoveis[i].valor);
    }

    relatorio(imoveis, N);

    reajuste(imoveis, N);

    relatorio(imoveis, N);

}

void atualizaValor(struct Imovel *imovel, float percentual){
    imovel->valor *= 1 + (percentual / 100);
}

void reajuste(Imovel imoveis_r[], int tam){
    int i, codigo_teste;
    float percent;

    printf("\nInforme o codigo do imóvel para ajuste: ");
    scanf("%d", &codigo_teste);
    printf("Informe o percentual de reajuste: ");
    scanf("%f", &percent);

    for(i = 0; i < tam; i++){
        if (codigo_teste == imoveis_r[i].codigo){
            atualizaValor(&imoveis_r[i], percent);
        }
    }
}


void relatorio(Imovel imovel_r[], int tam){
    int i;
    printf("--- RELATORIO DE IMOVEIS ---\nCodigo  Area (m2)  Valor (R$)\n");
    for(i = 0; i < tam; i++){
        printf("%6d %9.2f %10.2f\n", imovel_r[i].codigo, imovel_r[i].area, imovel_r[i].valor);
    }
    printf("\n");
}
