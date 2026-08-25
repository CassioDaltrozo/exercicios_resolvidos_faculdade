#include <stdio.h>

int main(){
    int code1 = 1, total_piece1, code2 = 2, total_piece2;
    float value1, value2, IPIpercentage;
    double final_cost;

    printf("enter the code of piece 1 and 2, quantity of the two, the value of each and the IPI percentage: ");
    scanf("%d %d %d %d %f %f %f", &code1, &code2, &total_piece1, &total_piece2, &value1, &value2, &IPIpercentage);

    if (code1 != 1 && code2 != 2){
        printf("the code of the product must be right to proceed the buying.\n");
        return 1;
    }

    final_cost = total_piece1 * value1 * (1 - IPIpercentage/100) + total_piece2 * value2 * (1 - IPIpercentage/100);
    printf("the final cost is %.2lf\n", final_cost);
}