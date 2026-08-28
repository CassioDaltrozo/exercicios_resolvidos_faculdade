#include <stdio.h>

int main(){
    int lenght, height, width;

    printf("insert the lenght, width and the height of the box: ");
    scanf(" %d %d %d", &lenght, &width, &height);

    if (lenght == 0 || width == 0 || height == 0){
        printf("no dimension can be 0.\n");
        return 0;
    }

    if (lenght == width && lenght == height){
        printf("its a cube\n");
    }
    else if (lenght == width || lenght == height || width == height){
        printf("its a prism of square base.\n");
    }
    else if (lenght != width && lenght != height && height != width){
        printf("its a parallelepiped.\n");
    }
}