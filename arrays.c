
/*
Author: Obed Onyango
Reg Number: BCS-05-0075/2026
Description: A hotel management system
Date: 10/10/2026
Version: 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DAYS 7
#define FLOORS 5
#define ROOMS 10
#define BRANCHES 3


int main() {
    double revenue[DAYS];
    double totalRevenue = 0.0;
    double averageRevenue;

    int occupancy[FLOORS][ROOMS];
    int chain[BRANCHES][FLOORS][ROOMS];

    int day, floor, room, branch;
    int occupied, vacant;
    int totalOccupied = 0;

    printf("Enter the revenue for each day of the week:\n");

    for (day = 0; day < DAYS; day++) {
        printf("Day %d: KSh. ", day + 1);

        if (scanf("%lf", &revenue[day]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        totalRevenue += revenue[day];
    }

    averageRevenue = totalRevenue / DAYS;

    printf("\nTotal weekly revenue: KSh. %.2f\n", totalRevenue);
    printf("Average daily revenue: KSh. %.2f\n", averageRevenue);

    srand((unsigned int)time(NULL));


    printf("\nRoom occupancy for one branch:\n");

    for (floor = 0; floor < FLOORS; floor++) {
        occupied = 0;

        for (room = 0; room < ROOMS; room++) {
            occupancy[floor][room] = rand() % 2;
            occupied += occupancy[floor][room];
        }

        vacant = ROOMS - occupied;

        printf("Floor %d: %d occupied, %d vacant\n",
               floor + 1, occupied, vacant);
    }


    for (branch = 0; branch < BRANCHES; branch++) {
        for (floor = 0; floor < FLOORS; floor++) {
            for (room = 0; room < ROOMS; room++) {
                if (branch == 0) {
                    chain[branch][floor][room] = occupancy[floor][room];
                } else {
                    chain[branch][floor][room] = rand() % 2;
                }

                totalOccupied += chain[branch][floor][room];
            }
        }
    }

    printf("\nTotal occupied rooms across all branches: %d\n",
           totalOccupied);

    return 0;
}



