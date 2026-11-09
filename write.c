/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:Reading student results from a binary file
Date:7/11/2026
Version:1
*/
#include <stdio.h>

struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    FILE *fptr;
    struct Student student;

    fptr = fopen("results.dat", "wb");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter student name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter registration number: ");
    scanf("%s", student.regNo);

    printf("Enter total marks: ");
    scanf("%f", &student.marks);

    fwrite(&student, sizeof(student), 1, fptr);

    fclose(fptr);

    printf("Student record saved successfully!");

    return 0;
}
