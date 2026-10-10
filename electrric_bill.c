#include <stdio.h>

/*
Author: Obed Onyango
Reg Number: BCS-05-0075/2026
Description: Program to calculate electric bill
Date: 10/10/2026
Version: 2
*/

double calculateElectricBill(int units) {
    double bill = 0.0;
    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + (units - 100) * 15.0;
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + (units - 200) * 20.0;
    }
    return bill;
}

int main() {
    int units;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    double totalBill = calculateElectricBill(units);

    printf("Units Consumed: %d\n", units);
    printf("Total Electric Bill: KSh. %.2f\n", totalBill);

    return 0;
}



