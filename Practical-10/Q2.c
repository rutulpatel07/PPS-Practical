// Write a program to illustrate the use of fputc(), fputs(), and fgets()

#include <stdio.h>

int main() {
    FILE *fp;
    
    // -------- Step 1: Open file for writing --------
    fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // -------- Step 2: Use fputc() to write a single character --------
    fputc('R', fp);  // writes character R

    // -------- Step 3: Use fputs() to write a string --------
    fputs("\nHello, this is Rutul!\n", fp);

    fclose(fp);  // close file after writing

    printf("Data written successfully using fputc() and fputs().\n");

    // -------- Step 4: Reopen file for reading --------
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // -------- Step 5: Use fgets() to read a line from file --------
    char buffer[100];

    printf("\nReading from file using fgets():\n");

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);  // display line
    }

    fclose(fp);  // close file after reading

    return 0;
}
