#include<stdio.h>

int main(){
    float n1, n2, n3, n4, max, min;

    printf("Entet value of n1, n2, n3 and n4 in order: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    if(n1 > n2 && n1 > n3 && n1 > n4){
        max = n1;
    } else if(n2 > n1 && n2 > n3 && n3 > n4){
        max = n2;
    } else if(n3 > n1 && n3 > n2 && n3 > n4){
        max = n3;
    } else if(n4 > n1 && n4 > n2 && n4 > n3){
        max = n4;
    }

    if(n1 < n2 && n1 < n3 && n1 < n4){
        min = n1;
    } else if(n2 < n1 && n2 < n3 && n2 < n4){
        min = n2;
    } else if(n3 < n1 && n3 < n2 && n1 < n4){
        min = n3;
    } else if(n4 < n1 && n4 < n2 && n4 < n3){
        min = n4;
    }

    printf("Max number is: %.2f \n", max);
    printf("Min number is: %.2f \n", min);
    printf("Difference is: %.2f", max - min);

    return 0;
}