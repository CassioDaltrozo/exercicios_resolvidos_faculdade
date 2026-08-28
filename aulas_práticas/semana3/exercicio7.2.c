#include <stdio.h>

#define HOTDOG 12
#define SANDWITCH 15
#define DRINK 6
#define BURGUER 18

int main(){
    double t_value;
    int request = 0, burguers = 0, drinks = 0, inv_codes = 0;

    for(int i = 1; i <= 6; i++){
        printf("Request client %d: ", i);
        scanf("%d", &request);

        switch (request){
            case 1:
                t_value += BURGUER;
                burguers++;
                break;
            case 2:
                t_value += HOTDOG;
                break;
            case 3:
                t_value += SANDWITCH;
                break;
            case 4:
                t_value += DRINK;
                drinks++;
                break;
            default:
                inv_codes++;
                break;
        }
    }

    printf("\n--- REPORT ---\n\n");

    printf("Total value collected: %.2lf reais\n", t_value);
    printf("Burgers sold: %d\n", burguers);
    printf("Soft drinks sold: %d\n", drinks);
    printf("Invalid codes: %d\n", inv_codes);
}