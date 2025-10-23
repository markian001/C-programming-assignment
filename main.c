/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:A program that converts Fahrenheit to celsius
            C = (F - 32) * 5 / 9
*/


#include <stdio.h>

float calculateToCelsius(float fahrenheit)
{
  float celsius = 0;

  celsius = ((fahrenheit - 32 ) * 5 / 9);

  return celsius;
}

int main()
{
    float celsius;
    float fahrenheit;


    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = calculateToCelsius(fahrenheit);

    printf("Temperature is:%.2f\n", celsius);

    return 0;
}
