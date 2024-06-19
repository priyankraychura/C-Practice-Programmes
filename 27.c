#include<stdio.h>

int main(){
    int num[5], pos=0, neg=0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for[%d]: ", i);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        if(num[i] < 0){
            neg++;
        } else{
            pos++;
        }
    }

    printf("Positive count: %d\n", pos);
    printf("Negative count: %d", neg);

    return 0;
}