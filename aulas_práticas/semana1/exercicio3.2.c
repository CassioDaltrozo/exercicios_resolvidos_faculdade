#include <stdio.h>
#include <math.h>

int main(){
    int debt, overdue_months;
    float month_fee, p_compound, p_testcompound, p_simple;

    printf("say the inicial debt: ");
    scanf("%d", &debt);
    printf("say the month fee (in percent): ");
    scanf("%f",&month_fee);
    printf("say the total of overdue months: ");
    scanf("%d", &overdue_months);

    p_simple = debt * ( 1 + ((month_fee * overdue_months) / 100));

    p_testcompound = 1 + (month_fee / 100);
    
    p_compound = debt * pow(p_testcompound, overdue_months);

    printf("\n===DEBT ATUALIZED===\n\n");
    printf("final prize with coumpound fees: %.2f\n", p_compound);
    printf("final price with simple fees: %.2f\n", p_simple);
}