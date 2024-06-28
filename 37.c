#include<stdio.h>

int main(){
    int num1, num2;

    printf("Enter two values: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > 0 && num2 > 0){
        printf("Quadrant-I(+,+)");
    } else if(num1 < 0 && num2 > 0){
        printf("Quadrant-II(-,+)");
    } else if(num1 < 0 && num2 < 0){
        printf("Quadrant-III(-,-)");
    } else if(num1 > 0 && num2 < 0){
        printf("Quadrant-IV(+,-)");
    } else{
        printf("Invalid values");
    }

    return 0;
}