#include <stdio.h>
#include <string.h>

void inverte(char* str1, char str2[]);

int main(){
    char str1[30];
    char str2[30];

    printf("digite: ");
    fgets(str1, 30, stdin);
    str1[strlen(str1) - 1] = '\0';

    inverte(str1, str2);

    printf("string1: %s\nstring2: %s\n", str1, str2);



}

void inverte(char str1[], char* str2){
    for(int i = 0; i < strlen(str1); i++){
        str2[i] = str1[strlen(str1) - 1 - i];
    }
}