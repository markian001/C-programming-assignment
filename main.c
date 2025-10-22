/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:A program that the fare to be paid by entering the distance covered
*/

#include <stdio.h>

float calculateFare(float distance)
{
    float fare = 0;

        fare = distance * 50;

    return fare;
}
    int main()
    {
        float distance;
        float fare;

        printf("Enter distance covered (in KM): ");
        scanf("%f", &distance);

        fare = calculateFare(distance);

        printf("Fare to be paid is: %.2f\n", fare);

    return 0;
}
