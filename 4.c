#include<stdio.h>

int main(){
    char c1, c2, c3;

    printf("Enter three characters: ");
    scanf("%c %c %c", &c1, &c2, &c3);

    printf("The reverse of %c%c%c is %c%c%c", c1, c2, c3, c3, c2, c1);

    return 0;
}