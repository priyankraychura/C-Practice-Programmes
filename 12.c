#include<stdio.h>

int main(){
    int id;
    float hour, hourSal, totalSal;

    printf("Enter employee id: ");
    scanf("%d", &id);

    printf("Enter working hours: ");
    scanf("%f", &hour);

    printf("Enter Salary/hr: ");
    scanf("%f", &hourSal);

    totalSal = (hour * hourSal);

    printf("Employee id = %d\n", id);
    printf("Salary = %.2f", totalSal);

    return 0;
}