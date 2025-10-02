/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:Program that Calculates water bill
*/

#include <stdio.h>

int main()
{
    int unit;
    float price;

    printf("Enter number of water units: ");
    scanf("%d", &unit);

    if (unit >= 0 && unit <= 30) {
       price = unit * 20;
    }
    else if (unit >= 31 && unit <= 60){
        price = unit * 25;
    }
    else if (unit >= 61){
        price = unit * 30;
    }
    else {printf("Invalid input!\n");
    return 1;//program ended abnormally
    }

    printf("Total price = %.2f\n", price);

    return 0;
}
