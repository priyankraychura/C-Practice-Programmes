#include<stdio.h>

int main(){
    int s, m, h, sec;

    printf("Enter seconds: ");
    scanf("%d", &sec);

    h = (sec/3600);
    m = (sec - (3600*h))/60;
    s = (sec - (3600*h))-(m*60);

    printf("H-%d M-%d S-%d", h, m, s);

    return 0;
}