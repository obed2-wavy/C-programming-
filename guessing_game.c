/*
Author: Obed Onyango
Reg Number: BCS-05-0075/2026
Description: A number guessing game
Date: 10/10/2026
Version: 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secretNumber;
    int guess;
    int attempts = 0;

    srand((unsigned int)time(NULL));
    secretNumber = rand() % 20 + 1;

    do {
        printf("Guess a number from 1 to 20: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("Total attempts: %d\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
