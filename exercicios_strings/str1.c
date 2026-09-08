#include <stdio.h>
#include <string.h>

/*Faça um programa que recebe um texto de até 40 caracteres e gera, em um vetor, a
distribuição de freqüência de comprimento de palavras. Considere que no texto
podem aparecer palavras de até 10 caracteres. As palavras podem estar separadas por
espaços em branco ou pelos caracteres vírgula e ponto. O final do texto é sinalizado
pelo caracter #.*/

int main(){
    char string[40];
    int lenght[40] = {0};
    int sum = 0, words = 0;

    printf("write a text: ");
    fgets(string,sizeof(string),stdin);

    for(int i = 0; string[i] != '\0'; i++){
        if (string[i] == ' ' || string[i] == ',' || string[i] == '.' || string[i] == '\n' || string[i] == '#'){
            lenght[i] = sum;
            sum = 0;
        }
        else{
            sum++;
        }
    }

    printf("%s", string);
    for(int j = 0; j < 40; j++){
        if (lenght[j] > 10){
            words++;
            printf("word %d passed 10 characters.\n", words);
        }
        else if (lenght[j] != 0){
            words++;
            printf("word %d: %d letters\n", words, lenght[j]);
    }}
}