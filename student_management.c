/*
Author:Obed Onyango
Reg Number:BCS-05-0075\2026
Description:Student record management program
Date:9/11/2026
Version:1
*/

#include <stdio.h>

// Function declarations
void saveStudent();
void displayStudents();
void addStudent();

int main()
{
    // Save the first student's details
    saveStudent();

    // Display the first student's record
    printf("\n--- FIRST STUDENT RECORD ---\n");
    displayStudents();

    // Add another student's details
    addStudent();

    // Display all student records
    printf("\n--- ALL STUDENT RECORDS ---\n");
    displayStudents();

    return 0;
}

// Function to save the first student
void saveStudent()
{
    FILE *fptr;
    int admission;
    char name[100], course[100];

    fptr = fopen("students.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!");
        return;
    }

    printf("Enter admission number: ");
    scanf("%d", &admission);

    printf("Enter full name: ");
    scanf(" %[^\n]", name);

    printf("Enter course: ");
    scanf(" %[^\n]", course);

    fprintf(fptr, "Admission Number: %d\n", admission);
    fprintf(fptr, "Full Name: %s\n", name);
    fprintf(fptr, "Course: %s\n\n", course);

    fclose(fptr);

    printf("\nStudent record saved successfully!\n");
}

// Function to display all student records
void displayStudents()
{
    FILE *fptr;
    char ch;

    fptr = fopen("students.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file!");
        return;
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        putchar(ch);
    }

    fclose(fptr);
}

// Function to add another student
void addStudent()
{
    FILE *fptr;
    int admission;
    char name[100], course[100];

    fptr = fopen("students.txt", "a");

    if (fptr == NULL)
    {
        printf("Error opening file!");
        return;
    }

    printf("\nEnter another student's admission number: ");
    scanf("%d", &admission);

    printf("Enter full name: ");
    scanf(" %[^\n]", name);

    printf("Enter course: ");
    scanf(" %[^\n]", course);

    fprintf(fptr, "Admission Number: %d\n", admission);
    fprintf(fptr, "Full Name: %s\n", name);
    fprintf(fptr, "Course: %s\n\n", course);

    fclose(fptr);

    printf("\nNew student added successfully!\n");
}
