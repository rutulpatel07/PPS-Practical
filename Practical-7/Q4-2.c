/*Write a Program using function to find out Factorial of given number.
(b) Without recursion*/
#include <stdio.h>

int factorial(int n);

// Main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

// Function definition using loop
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
