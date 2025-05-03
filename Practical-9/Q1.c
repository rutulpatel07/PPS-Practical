/*
Write a program using structure to read following data of 3 students:
[a] Roll no.
[b] Student name
[c] Marks in subject-1
[d] Marks in subject-2
Compute and print total marks and percentage of all student.
*/
#include <stdio.h>

// Define structure for student
struct Student {
    int rollNo;
    char name[50];
    float marks1;
    float marks2;
    float total;
    float percentage;
};

int main() {
    struct Student students[3];

    // Input data for 3 students
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // to read full name including spaces
        printf("Marks in Subject 1: ");
        scanf("%f", &students[i].marks1);
        printf("Marks in Subject 2: ");
        scanf("%f", &students[i].marks2);

        // Calculate total and percentage
        students[i].total = students[i].marks1 + students[i].marks2;
        students[i].percentage = (students[i].total / 200) * 100;
    }

    // Display results
    printf("\n--- Student Results ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Total Marks: %.2f\n", students[i].total);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }

    return 0;
}
