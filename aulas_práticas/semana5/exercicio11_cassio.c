#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 10

int main(){
    char str1[TAMANHO];
    char str2[TAMANHO];
    char strcopiada[TAMANHO];

    int contador = 0;

    printf("entre a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0';

    //LOOP PARA CRIAR STR2  
    for(int i = strlen(str1) - 1; i >= 0; i--){
        strcopiada[contador] = str1[i];
        str1[i] = tolower(str1[i]);
        str2[contador] = str1[i];
        contador++;
    }

    printf("a segunda string eh: %s\n", strcopiada);

    //LOOP PARA VERIFICAR STR1 E STR2
    for(int i = 0; i < strlen(str1); i++){
        if (str1[i] != str2[i]){
            printf("NÃO SÃO PALINDROMAS.\n");
            break;
        }
        else if (i = TAMANHO){
            printf("SÃO PALINDROMAS\n");
        }
    }

}
