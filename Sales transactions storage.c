/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:A program that store sales transactions for a retail shop
*/


#include <stdio.h>

int main()
{
    FILE *fptr;
    float amount, total = 0;

        fptr = fopen("sales.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fptr, "%f", &amount) == 1)
    {
        total += amount;
    }


    fclose(fptr);

    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
