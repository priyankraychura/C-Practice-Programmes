#include<stdio.h>

int main(){
    int height, width, area, perimeter;

    printf("Enter the height: ");
    scanf("%d", &height);

    printf("Enter the width: ");
    scanf("%d", &width);

    perimeter = 2 * (height + width);
    printf("Perimeter of the rectangle: %d inches\n", perimeter);

    area = height * width;
    printf("Area of the rectangle: %d inches\n", area);

    return 0;
}