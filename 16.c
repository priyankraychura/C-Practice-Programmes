#include<stdio.h>

int main(){
    int amt, notes;

    printf("Input the amount: ");
    scanf("%d",&amt);

    notes = amt/100;
    printf("%d Note(s) of 100\n", notes);
    amt = amt - (notes * 100);

    notes = amt/50;
    printf("%d Note(s) of 50\n", notes);
    amt = amt - (notes * 50);

    notes = amt/20;
    printf("%d Note(s) of 20\n", notes);
    amt = amt - (notes * 20);

    notes = amt/10;
    printf("%d Note(s) of 10\n", notes);
    amt = amt - (notes * 10);

    notes = amt/5;
    printf("%d Note(s) of 5\n", notes);
    amt = amt - (notes * 5);

    notes = amt/2;
    printf("%d Note(s) of 2\n", notes);
    amt = amt - (notes * 2);

    notes = amt/1;
    printf("%d Note(s) of 1\n", notes);
    amt = amt - (notes * 1);

    return 0;
}