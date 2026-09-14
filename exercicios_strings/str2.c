#include <stdio.h>

/*dado um texto, identificar se a frase é palindroma (inverter a frase e verificar se é igual).*/

#define SIZE 40

int main(){
    char word[SIZE];
    char word_inverse[SIZE];
    int words_and_quantity[SIZE] = {0};
    int old_i = 0, numb = 0, word_size = 0;
    int reverse_count = 0;
    int palindrom = 1;

    printf("enter a word: ");
    fgets(word, sizeof(word), stdin);

    for(int i = 0; word[i] != '\0' ; i++){
        if (word[i] == '\n' || word[i] == ' '){
            words_and_quantity[numb] = i - old_i;
            old_i = i + 1;
            numb++;
        }
        word_size = i;
    }
    
    for(int i = word_size - 1; i >= 0; i--){
            word_inverse[reverse_count] = word[i];
            reverse_count++;
        }

    for(int i = 0; i < word_size; i++){
        if (word[i] != word_inverse[i]){
            palindrom = 0;
        }
    }

    if (palindrom == 1){
        printf("the phrase is a palindrom.\n");
    }
    else{
        printf("the phrase isnt a palindrom.\n");
    }

    for (int i = 0; words_and_quantity[i] != 0; i++){
        printf("%d\n", words_and_quantity[i]);
    }

}