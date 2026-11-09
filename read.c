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

    // Open binary file
    fptr = fopen("results.dat", "rb");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("STUDENT RESULTS\n");
    printf("-------------------------\n");

    // Read and display student records
    while (fread(&student, sizeof(student), 1, fptr) == 1) {
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n", student.marks);
        printf("-------------------------\n");
    }

    // Close file
    fclose(fptr);

    return 0;
}
