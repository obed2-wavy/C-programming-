/*
Author: Obed Onyango
Reg Number: BCS-05-0075/2026
Description: Program to calculate travel fare based on distance
Date: 10/10/2026
Version: 1
*/

#include <stdio.h>

double calculateFare(double distance) {
    return distance * 50.0;
}

int main() {
    double distance;

    printf("Enter distance traveled (in km): ");
    scanf("%lf", &distance);

    double fare = calculateFare(distance);

    printf("Distance: %.2f km\n", distance);
    printf("Total Fare: KSh. %.2f\n", fare);

    return 0;
}
