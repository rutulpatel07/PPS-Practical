// Write a program to create a file and perform basic I/O operations on the same.

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // ----------- Step 1: Get input from user -----------
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // safer way to read strings

    printf("Enter your age: ");
    scanf("%d", &age);

    // ----------- Step 2: Create/Open file for writing -----------
    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // ----------- Step 3: Write data to the file -----------
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);  // close after writing

    printf("\nData written to file successfully.\n");

    // ----------- Step 4: Reopen file for reading -----------
    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char ch;

    printf("\nReading data from file:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  // print file content character by character
    }

    fclose(fp);  // close after reading

    return 0;
}
