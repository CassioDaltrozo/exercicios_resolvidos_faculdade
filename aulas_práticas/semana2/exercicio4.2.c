#include <stdio.h>

int main(){
    int dice1, dice2, dice3;

    printf("Insert the value of dice1 between 1 and 6: ");
    scanf("%d", &dice1);
    printf("Insert the value of dice2: ");
    scanf("%d", &dice2);
    printf("Insert the value of dice3: ");
    scanf("%d", &dice3);

    if (dice1 == dice2 && dice1 == dice3 || 
       ((dice1 + dice2 + dice3) >= 12 && (dice1 == 6 || dice2 == 6 || dice3 == 6))) {
        printf("Winning move.\n");}
    else {
        printf("Losing move.\n");
    }
}