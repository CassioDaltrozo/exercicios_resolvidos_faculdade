#include <stdio.h>
#include <ctype.h>

int main(){
    double height, ideal_weight = 0.0;
    char gender;

    do{
    printf("Enter your height: ");
    scanf("%lf", &height);
    printf("Enter your gender (M) or (F): ");
    scanf(" %c", &gender);

    if(height > 0.0 && height <= 2){
        switch(toupper(gender)){
            case 'F':
                ideal_weight = height * 62.1 - 44.7;
                printf("the ideal weith of yours is : %.2lf\n", ideal_weight);
                break;
            case 'M':
                ideal_weight = height * 72.7 - 58;
                printf("the ideal weith of yours is : %.2lf\n", ideal_weight);
                break;
            default:
                printf("please, insert (M) OR (F).\n");
                break;
        }
    }
    else {
        printf("Please, insert right height and gender.\n");
    }

} while(ideal_weight == 0);

}