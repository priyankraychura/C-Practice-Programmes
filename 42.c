#include<stdio.h>

int main(){
    int num, value = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        printf("%d %d %d \n", i, i*i, i*i*i);
    }

    return 0;
}