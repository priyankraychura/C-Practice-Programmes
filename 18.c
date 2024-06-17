#include<stdio.h>

int main(){
    int d, m, y, days;

    printf("Enter days: ");
    scanf("%d", &days);

    y = days/365;
    m = (days - (y*365))/30;
    d = (days - (y*365)) - (m*30);

    printf("Y-%d M-%d D-%d", y, m, d);

    return 0;
}