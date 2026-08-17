#include <stdio.h>

int main() {
    int saldo_inic = 0, valor_desejado = 0, valor_economizado = 0;
    float tempo_necessario = 0.0;

    printf("Insira o saldo inicial: ");
    scanf("%d", &saldo_inic);

    printf("Insira o valor desejado: ");
    scanf("%d", &valor_desejado);

    printf("Insira o valor economizado por mês: ");
    scanf("%d", &valor_economizado);

    if (valor_desejado < saldo_inic) {
        printf("O valor desejado precisa ser maior do que o saldo inicial.\n");
        return 0;
    }

    tempo_necessario = (valor_desejado - saldo_inic) / (float)valor_economizado;
    printf("\nÉ necessario %.2f mês/meses para atingir o valor desejado.\n", tempo_necessario);
    }
