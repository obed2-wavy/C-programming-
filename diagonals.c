/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:program to calculatebdiagonal length
Date:10/10/2026
Version: 1
*/

#include <stdio.h>
#include <math.h>

int main() {
    double length, width, diagonal;

    printf("Enter the length of the window: ");
    scanf("%lf", &length);

    printf("Enter the width of the window: ");
    scanf("%lf", &width);

    diagonal = sqrt(pow(length, 2) + pow(width, 2));

    printf("\n--- Window Dimensions ---\n");
    printf("Length: %.2lf\n", length);
    printf("Width: %.2lf\n", width);
    printf("Diagonal: %.2lf\n", diagonal);

    return 0;
}
