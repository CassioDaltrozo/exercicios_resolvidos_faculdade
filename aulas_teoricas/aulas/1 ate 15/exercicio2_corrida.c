#include <stdio.h>

#define step_lenght 70
#define cm_TO_Km 100000

int main(){
    int step1 = 0, stepU = 0, minute_time = 0, hour_time = 0;
    float average_step = 0, distance = 0, total_step = 0, total_mtime = 0;

    printf("say the total steps in the first minute: ");
    scanf("%d", &step1);
    printf("say the steps in the final minute: ");
    scanf("%d", &stepU);
    printf("how many hours it passed? ");
    scanf("%d",&hour_time);
    printf("and minutes? ");
    scanf("%d",&minute_time);

    average_step = (step1 + stepU) / 2;
    total_mtime = hour_time * 60 + minute_time;
    total_step = average_step * total_mtime;
    distance = step_lenght * total_step / cm_TO_Km;

    printf("the total distance was %.2f km\n", distance);

}
