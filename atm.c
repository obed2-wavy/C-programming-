/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:while loop program
Date:02/10/2026
Version:1
*/

#include <stdio.h>

int main() {
    float balance, withdrawal;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance -= withdrawal;
        printf("Current balance: %.2f\n", balance);
    }

    printf("Transaction ended. Final balance: %.2f\n", balance);
    return 0;
}
