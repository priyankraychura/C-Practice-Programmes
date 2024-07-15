#include<stdio.h>

int main(){
    int num, arr[5];

    printf("Enter a starting number: ");
    scanf("%d", &num);

    for(int i = 0; i < 5; i++){
        arr[i] = num;  
        num *= 3;
    }

    printf("The values are: ");
    for(int i = 0; i < 5; i++){
        printf("arr[%d] = %d",i, arr[i]);
    }

    return 0;
}