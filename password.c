
/*
Author: Obed Onyango
Reg Number: BCS-05-0075/2026
Description: A password system that keeps prompting the user
Date: 25/10/2026
Version: 1
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%19s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}
