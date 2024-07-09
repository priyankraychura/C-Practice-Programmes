#include<stdio.h>

int main(){
    int marks[100], count = 0;
    float avg, total = 0;

    printf("Enter the maths marks (0 to terminate): ");

    for(int i = 0; ; i++){
        scanf("%d", &marks[i]);

        if(marks[i] <= 0 ){
            break;
        }
        count++;
        total = total + marks[i];
    }

    avg = total / count;

    printf("Average marks in Mathematics: %.2f\n", avg);

    return 0;
}