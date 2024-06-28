#include<stdio.h>

int main(){
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("The pair is in descending order!");
    } else if(num1 < num2){
        printf("The pair is in ascending order!");
    } else{
        printf("Values are equal");
    }

    return 0;
}