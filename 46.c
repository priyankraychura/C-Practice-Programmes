#include<stdio.h>

int main(){
    float s = 0, d;
    int j = 1;

    for(int i = 1; i <= 7; i+=2){
        d = (float)i/j;
        s += d;    
        j = j*2;
    }

    printf("%f", s);

    return 0;
}