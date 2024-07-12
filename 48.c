#include<stdio.h>

int main(){
    int arr[7], x;

    for(int i = 0; i < 7; i++){
        printf("Enter value for[%d]: ", i);
        scanf("%d", &x);

        if(x > 0){
            arr[i] = x;
        } else{
            arr[i] = 100;
        }
    }

    printf("Array values are: ");
    for(int i = 0; i < 7; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}