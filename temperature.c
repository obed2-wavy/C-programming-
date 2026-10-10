/*
Author: Obed Onyango
Reg Number: BCS-05-0075/2026
Description: Program to convert temperature from Fahrenheit to Celsius
Date: 10/10/2026
Version: 1
*/

#include <stdio.h>

double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    double celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Fahrenheit: %.2f F\n", fahrenheit);
    printf("Temperature in Celsius: %.2f C\n", celsius);

    return 0;
}
