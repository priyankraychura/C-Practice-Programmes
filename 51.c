#include<stdio.h>

int main(){
    int arr[5];

    for(int i = 0; i < 5; i++){
        printf("Enter value of [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 4; i >= 0; i--){
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    return 0;
}