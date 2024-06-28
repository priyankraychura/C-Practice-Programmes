#include<stdio.h>

int main(){
    int upto;

    printf("Enter the value: ");
    scanf("%d", &upto);

    for(int i = 1; i < upto; i++){
        if(i%2 == 0){
            printf("%d ^ %d = %d\n", i, i, i*i);
        }
    }

    return 0;
}