#include<stdio.h>

int main(){
    int arr[5], sum = 0;

    for(int i = 0; i < 5; i++){
        printf("Enter value for[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 5; i++){
        if(arr[i]%2 != 0){
            sum = sum + arr[i];
        }
    }

    printf("Sum of all the odd values is: %d", sum);

    return 0;
}