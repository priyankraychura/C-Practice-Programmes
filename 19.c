#include<stdio.h>

int main(){
    int p, q, r, s;

    printf("Input first integer: ");
    scanf("%d", &p);
    printf("Input second integer: ");
    scanf("%d", &q);
    printf("Input third integer: ");
    scanf("%d", &r);
    printf("Input fourth integer: ");
    scanf("%d", &s);

    if((q > r) && (s > p) && ((r+s) > (p+q) && (p%2==0))){
        printf("Correct Values");
    } else{
        printf("Incorrect values");
    }

    return 0;
}