#include<stdio.h>

int main(){
    int num, value = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        for(int i = 1; i <= 3; i++){
            printf("%d ", value);
            value++;
        }
        printf("\n");
    }

    return 0;
}