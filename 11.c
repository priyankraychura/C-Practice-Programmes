#include<stdio.h>

int main(){
    float w1, i1, w2, i2, avg;

    printf("Enter weight-1 and item-1 in order: ");
    scanf("%f %f", &w1, &i1);
    printf("Enter weight-2 and item-2 in order: ");
    scanf("%f %f", &w2, &i2);

    avg = ((w1 * i1) + (w2 * i2))/(i1 + i2);

    printf("Average value: %f", avg);

    return 0;
}