/*Write a Program using function to find out Factorial of given number.
(a) With the help recursion*/
#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

// Function definition using recursion
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
