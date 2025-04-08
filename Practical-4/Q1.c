/*
 * Program: Quadratic Equation Solver
 * Purpose: This program solves quadratic equations of the form ax² + bx + c = 0
 * It finds both real and complex roots using the quadratic formula
 */

#include <stdio.h>   // For input/output functions
#include <math.h>    // For sqrt() function

int main() {
    // Declare variables to store coefficients
    float a, b, c;   // a, b, c are coefficients where ax² + bx + c = 0
    float discriminant, root1, root2;  // Variables for discriminant and roots
    float realPart, imagPart;          // For complex roots if discriminant < 0

    // Get input from user
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Validate if the equation is quadratic
    // For a quadratic equation, coefficient 'a' must not be 0
    if (a == 0) {
        printf("This is not a quadratic equation as a = 0\n");
        return 1;  // Exit program with error status
    }

    // Calculate discriminant using formula: b² - 4ac
    // Discriminant determines the nature of roots:
    // > 0 : Real and different roots
    // = 0 : Real and equal roots
    // < 0 : Complex conjugate roots
    discriminant = b * b - 4 * a * c;

    // Find roots based on discriminant value
    if (discriminant > 0) {
        // Case 1: Real and different roots
        // Formula: [-b ± √(b² - 4ac)] / 2a
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);
        printf("Roots are real and different.\n");
    }
    else if (discriminant == 0) {
        // Case 2: Real and equal roots (repeated root)
        // Formula: -b / 2a
        root1 = root2 = -b / (2 * a);
        printf("Root1 = Root2 = %.2f\n", root1);
        printf("Roots are real and equal.\n");
    }
    else {
        // Case 3: Complex conjugate roots
        // Complex roots are in the form: real ± imaginary
        // Real part = -b / 2a
        // Imaginary part = √(-discriminant) / 2a
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
        printf("Roots are complex and different.\n");
    }

    return 0;  // Program completed successfully
}
