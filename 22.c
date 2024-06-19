#include<stdio.h>

int main(){
    int num[5], sum = 0;

    for(int i=0; i < 5; i++){
        printf("Enter value of num[%d]: ", i);
        scanf("%d", &num[i]);
    }

    for(int i=0; i < 5; i++){
        if(num[i]%2 != 0){
            sum = sum + num[i];
        }
    }

    printf("Sum of all odd number is: %d", sum);

    return 0;
}