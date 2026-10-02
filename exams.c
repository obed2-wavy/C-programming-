/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:Program to check exam eligibility
Date:02/10/2026
Version:1
*/

 #include <stdio.h>

int main()
{
    float attendance, averageMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not eligible\n");
    }

    return 0;
}
