/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:Program to calculate total water bill
Date:02/10/2026
Version:1
*/

#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 30)
    {
        bill = units * 20;
    }
    else if (units <= 60)
    {
        bill = units * 25;
    }
    else
    {
        bill = units * 30;
    }

    printf("Total water bill: %.2fKES\n", bill);

    return 0;
}
