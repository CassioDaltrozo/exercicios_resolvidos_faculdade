#include <stdio.h>

int main(){
    int price, perc_discount, discount;
    float final_price;

    printf("say the price of the product: ");
    scanf("%d", &price);
    printf("say the percentage of the discount: ");
    scanf("%d", &perc_discount);

    discount = price * (perc_discount * 0.01);
    final_price = price - discount;

    printf("the total discount is %d reais and the final price is %.2f reais\n", discount, final_price);
}