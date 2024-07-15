#include<stdio.h>

int main(){
    int arr[5];

    for(int i = 0; i < 5; i++){
        printf("Enter value of [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 5; i++){
        if(arr[i] < 5){
            printf("arr[%d] = %d \n", i, arr[i]);
        }
    }

    return 0;
}