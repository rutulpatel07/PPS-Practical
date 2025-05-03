// Write a program to demonstrate user of error handling functions.
#include <stdio.h>

int main() {
    FILE *fp;

    // Trying to open a file that doesn't exist
    fp = fopen("error.txt", "r");

    if (fp == NULL) {
        printf("File open error detected!\n");

        // Using perror() to display the error
        perror("Error");

        return 1;  // Exit with error code
    }

    // Attempt to read file (unreachable here since file doesn't open)
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Check if end of file was reached
    if (feof(fp)) {
        printf("\nReached end of file.\n");
    }

    // Check if any file error occurred
    if (ferror(fp)) {
        printf("A file read error occurred!\n");
    }

    // Clear errors (if any)
    clearerr(fp);

    fclose(fp);
    return 0;
}
