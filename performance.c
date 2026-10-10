/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:A student performance program
Date:07/10/2026
Version:1
*/
#include <stdio.h>

float calculate_total(float mark1, float mark2, float mark3);
float calculateAverage(float total_marks, int num_subjects);
void displayresult(float average_mark);

int main() {
    float subject1, subject2, subject3;
    float total, average;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    total = calculate_total(subject1, subject2, subject3);
    average = calculateAverage(total, 3);

    printf("\n==============\n");
    printf("Total Marks  : %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    displayresult(average);

    return 0;
}

float calculate_total(float mark1, float mark2, float mark3) {
    return mark1 + mark2 + mark3;
}

float calculateAverage(float total_marks, int num_subjects) {
    return total_marks / num_subjects;
}

void displayresult(float average_mark) {
    if (average_mark >= 50.0) {
        printf("Status       : Passed\n");
    } else {
        printf("Status       : Failed\n");
    }
}
