/*Write a program to generate a table of entered number using goto keyword.*/

#include <stdio.h>
int main() {
    int num, i = 1;
    printf("Enter a number that you want to generate table of: ");
    scanf("%d", &num);

    start: // Label for goto statement
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
        if (i <= 10) {
            goto start; // Jump to the label
        }

    return 0;
}