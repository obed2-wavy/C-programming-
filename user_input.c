   /*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Deascription:Program with user input
Date:13/09/2026
Version:1
*/
#include<stdio.h>
int main()
{
float height;
double bankbalance;
char phonenumber[20];
printf("Enter your height:");
scanf("%f",&height);

printf("Enter your bank balance:");
scanf("%lf",&bankbalance);

printf("Enter your phone number:");
scanf("%19s",&phonenumber);

printf(" Your Height is:%2f \n",height);
printf("Your Bank Balance is:Ksh %2f\n",bankbalance);
printf("Your Phone Number is:%s\n",phonenumber);

 return 0;
}

