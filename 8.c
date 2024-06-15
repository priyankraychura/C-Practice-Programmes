#include<stdio.h>

int main(){
    int days, d, w, y;

    printf("Enter days: ");
    scanf("%d", &days);

    y = days/365;
    w = (days % 365)/7;
    d = days - ((y * 365) + (w * 7));
    
    printf("years: %d\n", y);
    printf("weeks: %d\n", w);
    printf("days: %d", d);

    return 0;
}