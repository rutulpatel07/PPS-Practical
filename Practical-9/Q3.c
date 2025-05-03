/*Write a program using union for storing students' data like name, subject
name, percentage for 3 three different students. Take all values from user and
print it to the screen.*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

// Define a union for student data
union StudentData
{
    char name[MAX_LENGTH];
    char subject[MAX_LENGTH];
    float percentage;
};

// Structure to manage multiple data fields
struct Student
{
    char name[MAX_LENGTH];
    char subject[MAX_LENGTH];
    float percentage;
};

int main()
{
    struct Student students[3];
    union StudentData data;

    // Input data for each student using the union
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", data.name);
        strcpy(students[i].name, data.name);

        printf("Enter subject name: ");
        scanf(" %[^\n]", data.subject);
        strcpy(students[i].subject, data.subject);

        printf("Enter percentage: ");
        scanf("%f", &data.percentage);
        students[i].percentage = data.percentage;
    }

    // Display data for each student
    printf("\n\nStudent Details:\n");
    printf("--------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Subject: %s\n", students[i].subject);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }

    return 0;
}
