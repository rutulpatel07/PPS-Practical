// Write a C program to find that the accepted number is Negative or
// Positive or Zero. (using nested if).

#include <stdio.h>

int main() {
    int number;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Using nested if to check if number is positive, negative or zero
    if (number >= 0) {
        if (number == 0) {
            printf("The number is Zero\n");
        } else {
            printf("The number is Positive\n");
        }
    } else {
        printf("The number is Negative\n");
    }
    
    return 0;
}

