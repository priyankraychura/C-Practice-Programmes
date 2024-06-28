#include<stdio.h>

int main(){
    int arr[5], max = 0, pos;

    for(int i = 0; i < 5; i++){
        printf("Enter value for[%d]: ", i);
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
            pos = i + 1;
        }
    }

    printf("Max value is: %d \n", max);
    printf("Position is: %d", pos);

    return 0;
}