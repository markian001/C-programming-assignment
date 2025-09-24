/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:Program that validates loan application for customers
*/


#include <stdio.h>

int main(){
int age;
float income;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    //To check whether the customer qualifies for the loan
    if(age >= 21 &&income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
