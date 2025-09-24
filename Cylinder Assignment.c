/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:Program to find volume and surface area of a cylinder
Volume = M_PI * pow(radius, 2) * height
Surface area = 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height
*/

#include <stdio.h>
#include <math.h>

int main(){
    float radius, height, surfacearea, volume;


    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

//Calculation of surface area and volume
    surfacearea = 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height;
    volume = M_PI * pow(radius, 2) * height;

    printf("\nSurface area of cylinder = %.2f\n", surfacearea);
    printf("\nVolume of the cylinder = %.2f\n", volume);
    return 0;
}
