/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Description:Book title storage program
Date:7/11/2026
Version:1
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char title[100];

    fptr = fopen("borrowed_books.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fptr, "%s", title);

    fclose(fptr);

    printf("Book title successfully stored!");

    return 0;
}
