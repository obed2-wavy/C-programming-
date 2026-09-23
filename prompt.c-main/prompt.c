/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Deascription:Volume and Surface area program
Date:19/09/2026
Version: 1
*/

#include <stdio.h>
int main()
{
    float radius,height;
    float volume,surfacearea;
    float pi=3.142;

    printf("Enter the radius:\t");
    scanf("%f",&radius);

    printf("Enter the height:\t");
    scanf("%f",&height);

    volume=pi * radius * radius * height;

    surfacearea = 2 * pi * radius * radius + 2 * radius * height;

    printf("The volume is: %2f\n",volume);
    printf("The Surface area is: %2f\n",surfacearea);

    return 0;
}
