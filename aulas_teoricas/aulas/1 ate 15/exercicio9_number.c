#include <stdio.h>

#define SIZE_SET 10

int main() {
    int set[SIZE_SET];
    int v, counter = 0;

    printf("enter %d integers: ", SIZE_SET);
    for (int i = 0; i < SIZE_SET; i++) {
        scanf("%d", &set[i]);
    }

    printf("enter the value of v(integer): ");
    scanf("%d", &v);

    printf("values bigger than %d:\n", v);
    for (int i = 0; i < SIZE_SET; i++) {
        if (set[i] == v) {
            counter++;
        } else if (set[i] > v) {
            printf("%d ", set[i]);
        }
    }

    printf("\nthe value %d appears %d times in the set\n", v, counter);

    for(int i = 0; i < SIZE_SET - 1; i++){
        for(int j = i + 1; j < SIZE_SET; j++){
            if(set[i] > set[j]){
                int temp = set[i];
                set[i] = set[j];
                set[j] = temp;
            }
        }
    }

    for(int i = 0; i < SIZE_SET; i++){
        printf("%d ", set[i]);
    }


    printf("\n");

    return 0;
}