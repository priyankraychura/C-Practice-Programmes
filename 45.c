#include<stdio.h>

int main(){
    float s = 0;

    for(int i = 1; i <= 50; i++){
        s += (float)1/i;
    }

    printf("%.2f", s);

    return 0;
}