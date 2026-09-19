#include <stdio.h>
#include <string.h>

#define SIZE 20

int main(){
    char str[SIZE];
    char my_char, my_char2;
    int k = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    printf("Enter the first character: ");
    scanf(" %c", &my_char);

    printf("Enter the second character: ");
    scanf(" %c", &my_char2);

    for(int i = 0; i < strlen(str) + 1; i++){
        if(str[i] == my_char){
            str[i] = my_char2;
            k++;
        }
    }

    printf("New STRING: %s\nCharacters modified: %d\n", str, k);

}