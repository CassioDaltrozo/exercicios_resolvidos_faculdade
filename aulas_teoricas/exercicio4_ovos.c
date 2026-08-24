#include <stdio.h>

int main(){
    char request;
    float priceA = 12, priceB = 15.5, priceC = 21.3, final_price;
    int limitA = 50, limitB = 30, limitC = 20, quantity;
    int cicle = 1;

    while(cicle){
        printf("what type of egg do you want? (A, B or C): ");
        scanf(" %c", &request);

        printf("how many eggs do you want? (Limits: A-50, B-30, C-20): ");
        scanf("%d", &quantity);

        switch (request){
        case 'A':
            if (quantity > limitA){
                printf("you passed the limit of eggs, using as quantity %d.\n", limitA);
                quantity = limitA;
            final_price = priceA * quantity;}
            break;

        case 'B':
            if (quantity > limitB){
                printf("you passed the limit of eggs, using as quantity %d.\n", limitB);
                quantity = limitB;
            final_price = priceA * quantity;}
            break;

        case 'C':
            if (quantity > limitC){
                printf("you passed the limit of eggs, using as quantity %d.\n", limitC);
                quantity = limitC;
            final_price = priceA * quantity;}
            break;
        }

        if (request != 'A' && request != 'B' && request != 'C'){
            printf("You choose the wrong type of egg, try again.\n");
            continue;
        }

        printf("\nYour order is %d type %c eggs and the final cost is %.2f reais.\n\n", quantity, request, final_price);
    }
}