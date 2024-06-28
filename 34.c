#include<stdio.h>

int main(){
    int num1, num2, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    for(int i = num2; i <= num1; i++){
        if(i%2 != 0){
            printf("%d \n", i);
            sum = sum + i;
        }
    }

    printf("Sum of odd numbers: %d", sum);

    return 0;
}