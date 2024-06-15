#include<stdio.h>

int main(){
    int dis;
    float cons, fuel;

    printf("Input total distance in km: ");
    scanf("%d", &dis);

    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    cons = dis/fuel;

    printf("Average consumption (km/lt): %.2f", cons);

    return 0;
}