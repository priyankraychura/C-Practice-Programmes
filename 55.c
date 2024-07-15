#include<stdio.h>

int main(){
    int num1 = 25, num2 = 35;

    printf("Before swaping value of num1 and num2 = %d and %d \n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swaping value of num1 and num2 = %d and %d \n", num1, num2);

    return 0;
}