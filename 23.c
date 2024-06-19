#include<stdio.h>

int main(){
    float a, b, c, perimeter;

    printf("Enter first value: ");
    scanf("%f", &a);
    printf("Enter second value: ");
    scanf("%f", &b);
    printf("Enter third value: ");
    scanf("%f", &c);

    if(a + b > c && b + c > a && a + c > b){
        perimeter = a + b + c;
        printf("Perimeter: %.1f", perimeter);
    } else{
        printf("Triangle not possible");
    }

    return 0;
}