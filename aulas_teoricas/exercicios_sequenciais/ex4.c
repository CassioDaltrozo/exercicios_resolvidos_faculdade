#include <stdio.h>

#define SALARIO_FAMILIA 67.54

int main(){
    int horas_totais, valor_phora, filhos;
    float salario;

    printf("insira as horas totais de trabalho, o valor por hora remunerado e o número de filhos menores de 14 anos que o individuo possui: ");
    scanf("%d %d %d", &horas_totais, &valor_phora, &filhos);

    salario = horas_totais * valor_phora + filhos * SALARIO_FAMILIA;

    printf("o salario total do individuo no mes será %.2f\n", salario);

}