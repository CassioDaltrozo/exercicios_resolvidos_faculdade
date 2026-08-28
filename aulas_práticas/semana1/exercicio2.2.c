#include <stdio.h>

int main(){
    int trip_distance, consumption;
    float fuel_price, fuel_required, final_cost;

    printf("say the distance of the trip in km: ");
    scanf("%d", &trip_distance);
    printf("say the average consumption of gasoline (km/l): ");
    scanf("%d", &consumption);
    printf("say the fuel price per liter: ");
    scanf("%f", &fuel_price);

    fuel_required = trip_distance / consumption;
    final_cost = fuel_required * fuel_price;
    
    printf("the amount of gasoline is %.2f liters and the totality of reais required is %.2f.\n", fuel_required, final_cost);
}