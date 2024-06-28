#include<stdio.h>

int main(){
    int num1, num2;
    float div;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num2 != 0){
        div = num1/num2;
        printf("Expected output: %.2f", div);
    } else{
        printf( "Division is not possible");
    }

    return 0;
}