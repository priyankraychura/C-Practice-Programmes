#include<stdio.h>

int main(){
    int num1, num2, sum = 0, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for(int i = num1; i <= num2; i++){
        if((i%17) != 0){
            sum = sum + i;
        }
    }

    printf("Sum: %d", sum);

    return 0;
}