/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:Mobile data bundle purchase program
Date:02/10/2026
Version:1
*/

#include <stdio.h>

int main(void) {
    int choice;

    printf("Select data bundle:\n");
    printf("1. 100 MB @ 50 KES\n");
    printf("2. 500 MB @ 200 KES\n");
    printf("3. 1 GB @ 350 KES\n");
    printf("4. 2 GB @ 600 KES\n");

    printf("Enter your choice (1-4): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("You selected 100 MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500 MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1 GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2 GB. Cost = 600 KES\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
