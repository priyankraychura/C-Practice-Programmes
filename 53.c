#include<stdio.h>

int main(){
    float p, r, t, si;

    printf("Enter principle, rate of interest in order: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t)/100;

    printf("Simple Interest is: %.2f", si);

    return 0;
}