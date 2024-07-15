#include<stdio.h>

int main(){
    int arr[5];

    for(int i = 0; i < 5; i++){
        printf("Enter value of [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int pos = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
            pos = i;
        }
    }

    printf("\n Smallest value is: %d \n", min);
    printf("Position is: %d", pos);

    return 0;
}