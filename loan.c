/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Date:24/09/2026
Deascription:Bank loan program
Version:1
*/

#include <stdio.h>

int main()
{
    int age;
    double income;

 printf("Enter your age: ");
 scanf("%d",&age);

 printf("Enter your annual income: ");
 scanf("%lf",&income);

 if(age>=21 &&income>=21000){
    printf("Congragulations you qualify for a loan.");
 }
 else{
    printf("Unfortunately,we are unable to offer you a loan at this time.");
 }
 return 0;

}




