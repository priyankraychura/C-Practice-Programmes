#include<stdio.h>
#define PI 3.14

int main(){
    int radius;
    float area, perimeter;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    perimeter =  2 * PI * radius;
    printf("Perimeter of the circle: %f inches\n", perimeter);

    area = PI * radius * radius;
    printf("Area of the circle: %f inches\n", area);

    return 0;
}