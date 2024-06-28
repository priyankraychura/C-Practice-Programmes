#include<stdio.h>

int main(){
    int num[5], sum = 0, pos = 0, avg;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for[%d]: ", i);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        if(num[i] > 0){
            pos++;
            sum = sum + num[i];
        } 
    }

    avg = sum/5;

    printf("Number of positive numbers: %d", pos);
    printf("Average value of the said positive numbers: %f");

    return 0;
}