/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:A program that calculates the room occupancy
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0));

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;
        }
    }

   printf("Room Occupancy Report (1 = Occupied, 0 = Vacant)\n\n");

    for(int i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        printf("Floor %d: ", i + 1);
        for(int j = 0; j < 10; j++) {
            printf("%d ", occupancy[i][j]);
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("\nOccupied: %d | Vacant: %d\n\n", occupied, vacant);
    }

    return 0;
}
