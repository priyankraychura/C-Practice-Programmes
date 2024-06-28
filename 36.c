#include<stdio.h>

int main(){
    int pass = 1234, userPass;

    while(1){
        printf("Enter the password: ");
        scanf("%d", &userPass);

        if(userPass == pass){
            printf("Corrected password");
            break;
        }
    }

    return 0;
}