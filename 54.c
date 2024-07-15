#include<stdio.h>
#define INCH_TO_CM 2.54

int main(){
    float dis, inc;

    printf("Enter a distance: ");
    scanf("%f", &dis);

    inc = dis / INCH_TO_CM;

    printf("Distance of %0.2f is %0.2f", dis, inc);

    return 0;
}