#include<stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%2 == 0 && num > 0){
        printf("Positive Even");
    } else if(num%2 == 0 && num < 0){
        printf("Negative Even");
    } else if(num%2 != 0 && num > 0){
        printf("Positive Odd");
    } else if(num%2 != 0 && num < 0){
        printf("Negative Odd");
    } else{
        printf("Some error occured");
    }

    return 0;
}