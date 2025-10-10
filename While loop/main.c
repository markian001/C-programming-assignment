/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:A while loop program
*/
#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter your initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;

        printf("Remaining balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("\nYour account balance is zero or negative. Transaction stopped.\n");
        }
    }

    return 0;
}
