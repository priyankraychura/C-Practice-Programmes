#include<stdio.h>

int main(){
    int num = 123, revNum, temp;

    while(num != 0){
        temp = num%10;
        num = num/10;
    }

    return 0;
}