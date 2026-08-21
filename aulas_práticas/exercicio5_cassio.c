#include <stdio.h>

int main(){
    int idade;

    //Entrar com a idade
    printf("Informe sua idade para análise eleitoral: ");
    scanf("%d", &idade);

    //Análise de idade eleitoral
    if (idade < 16) {
        printf("Você é não votante.\n");
        return 0;
    }
    else if (18 <= idade  && idade <= 69) {
        printf("Vocẽ é eleitor obrigatório. \n");
        return 0;
    }
    else if ((idade < 18 && idade >= 16) || idade >= 70) {
        printf("Você é eleitor facultativo. \n");
        return 0;
    }
}
