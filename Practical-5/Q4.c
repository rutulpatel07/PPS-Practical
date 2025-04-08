/*Write a program to calculate sum of all digits of a number.
(Ex: Enter any number: 456 -> 6+5+4:11)*/
#include <stdio.h>
int main() {
    int n, sum = 0, digit;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    while (n != 0) {
        digit = n % 10; // Get the last digit
        sum += digit;   // Add it to the sum
        n /= 10;        // Remove the last digit
    }
    
    printf("Sum of all digits: %d\n", sum);
    
    return 0;
}