/*Clearly show the concept of:
1. Making a Function Prototype.
2. Function Definition
3. Function Calling
By making a user defined function that will print whether the number is prime
or not.*/
#include <stdio.h>
// Function prototype
int isPrime(int num);
// Function definition
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Found a divisor, not prime
        }
    }
    return 1; // No divisors found, it's prime
}
// Function calling
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}
