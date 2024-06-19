#include<stdio.h>

int main(){
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    if(num1 > num2){
        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if(num2 % num1 == 0){
        printf("Multipled!");
    } else{
        printf("Not Multipled!");
    }

    return 0;
}