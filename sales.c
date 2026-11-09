/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:Reading student results from a binary file
Date:7/11/2026
Version:1
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    float amount;
    float total = 0;

    fptr = fopen("sales.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while (fscanf(fptr, "%f", &amount) == 1) {
        total = total + amount;
    }

    printf("Total sales for the day: %.2f\n", total);

    fclose(fptr);

    return 0;
}



