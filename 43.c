#include<stdio.h>

int main(){
    int num = 1, lines, chars;

    printf("Enter number of lines: ");
    scanf("%d", &lines);
    printf("Enter number of characters in a line: ");
    scanf("%d", &chars);

    for(int i = 1; i <= lines; i++){
        for(int j = 1; j <= chars; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");   
    }

    return 0;
}