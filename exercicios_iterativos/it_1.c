#include <stdio.h>

int main(){
    int x = 1, z = 3, j = 1;

    //laço dividido em 3 listas; numerador, denominador e razão, o valor da sequencia sera a soma dos valores da lista 3
    double list1[20], list2[20], list3[20], sum = 0;

    for(int i = 0; i <= 19; i++){
        list1[i] = j;
        j += 2;

        list2[i] = x;
        x += z;
        z += 2;

        list3[i] = list1[i] / list2[i];
        if (list3[i] <= 0.1){
            break;
        }
        sum += list3[i];
    }

    printf("the sum is : %.2lf\n", sum);

}