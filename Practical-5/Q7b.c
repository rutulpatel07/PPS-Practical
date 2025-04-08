/*Write a program to print below patterns
B.)
* * * * *
* * * *
* * *
* * 
*
*/
#include <stdio.h>
int main() {
    int i, j, n = 5; // Number of rows

    for (i = n; i >= 1; i--) { // Loop for each row
        for (j = 1; j <= i; j++) { // Loop for printing stars in each row
            printf("* "); // Print star followed by space
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}