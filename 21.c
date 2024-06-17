#include<stdio.h>

int main(){
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Number is negative");
    } else if(n >= 0 && n <= 20){
        printf("Range [0, 20]");
    } else if(n >= 21 && n <= 40){
        printf("Range [20, 40]");
    } else if(n >= 41 && n <= 60){
        printf("Range [40, 60]");
    } else if(n >= 61 && n <= 80){
        printf("Range [60, 80]");
    } else{
        printf("Number is more than 80");
    }


    return 0;
}