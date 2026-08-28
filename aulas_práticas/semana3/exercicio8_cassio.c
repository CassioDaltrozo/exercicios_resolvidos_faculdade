#include <stdio.h>

int main(){

    int temp_atual = 0, maior_temp = -273, maior_horario = 0, condic_tempo = 0;
    int ensolarado = 0, nublado = 0, chuvoso = 0;
    double media_temp = 0;

    for(int i = 0; i <= 12; i += 3){

        //ENTRADA DE VARIAVEIS
        printf("Temperatura registrada as %dh: ", i);
        scanf("%d", &temp_atual);
        printf("Condicao do tempo (1-Ensolarado, 2-Nublado, 3-Chuvoso): ");
        scanf("%d", &condic_tempo);

        //TESTE DA VALIDADE DA CONDIÇÃO DO TEMPO
        if (condic_tempo < 0 || condic_tempo > 3){
            printf("insira uma condição válida.\n");
            return 0;
        }

        //TESTE DE CONDIÇAO DO TEMPO (ENS, NUBL OU CHUVOSO)
        switch(condic_tempo){
            case 1:
                ensolarado++;
                break;
            case 2:
                nublado++;
                break;
            case 3:
                chuvoso++;
                break;
        }

        //CONDIÇÃO DE MAIOR TEMPERATURA E HORARIO
        if(maior_temp <= temp_atual){
            maior_temp = temp_atual;
            maior_horario = i;
        }

        //MÉDIA DA TEMPERATURA
        media_temp += temp_atual;
        if(i == 12){
            media_temp /= 5;
        }
    }

    printf("media temp: %.2lf graus\n", media_temp);
    printf("maior temp %d graus\n", maior_temp);
    printf("maior horario %dh\n", maior_horario);
    printf("Medicoes com tempo ensolarado: %d\n", ensolarado);
    printf("Medicoes com tempo nublado: %d\n", nublado);
    printf("Medicoes com tempo chuvoso: %d\n", chuvoso);

}
