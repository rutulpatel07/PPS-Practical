#include <stdio.h>

int main()
{
    int A, B, intSum;
    float C, D, floatSum;
    char X, Y, charSum;

    // Taking input from user
    printf("Enter two integer values: ");
    scanf("%d %d", &A, &B);

    printf("Enter two float values: ");
    scanf("%f %f", &C, &D);

    printf("Enter two characters: ");
    scanf(" %c %c", &X, &Y); // Space before %c to handle newline character

    // Calculating sums
    intSum = A + B;
    floatSum = C + D;
    charSum = X + Y;

    // Displaying results
    printf("The sum of integer variables %d and %d is: %d\n", A, B, intSum);
    printf("The sum of float variables %.2f and %.2f is: %.2f\n", C, D, floatSum);
    printf("The sum of character variables '%c' and '%c' is: %d\n", X, Y, charSum);

    return 0;
}
