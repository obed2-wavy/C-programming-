/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:Program to display units consumed per household
Date:02/10/2026
Version:1
*/

#include <stdio.h>

int main() {
    float units[10];
    int i;


    for (i = 0; i < 10; i++) {
        printf("Enter electricity units consumed by household %d: ", i + 1);
        scanf("%f", &units[i]);
    }

    printf("==============================\n");
    printf("Electricity units per household\n");
    printf("==============================\n");

    for (i = 0; i < 10; i++) {
        printf("Units consumed by Household %d: %f units\n", i + 1, units[i]);
    }

    return 0;
}
