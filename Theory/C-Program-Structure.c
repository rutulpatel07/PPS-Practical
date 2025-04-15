/* 
   Program: Area Calculator
   Author: Rutul Patel
   Date: April 15, 2025
   Purpose: Calculate area of circle and rectangle with user input
   
   WHY HERE: Placed at the top as an introduction and quick reference for anyone
   reading the code - helps with future maintenance and understanding.
*/

// Header Files Section
#include <stdio.h>    // For input/output functions like printf and scanf
#include <math.h>     // For mathematical functions like sqrt, pow, etc.
/* WHY HERE: Headers must come first as they declare external functions that
   our program will use. Without these, the compiler wouldn't recognize
   functions like printf() or math functions. */

// Definition Section
#define PI 3.14159    // Defines the value of PI for calculations
#define SQUARE(x) ((x)*(x))    // A macro to calculate square of a number
/* WHY HERE: Constants and macros are defined early because the preprocessor 
   replaces all instances before compilation. They need to be available 
   throughout the entire program for consistency. */

// Global Declaration Section
int globalCounter = 0;    // A global variable accessible to all functions
/* WHY HERE: Global variables are placed outside any function to make them
   accessible everywhere in the program and retain their values between
   function calls. */

// Function Prototypes
float calculateCircleArea(float radius);
float calculateRectangleArea(float length, float width);
void displayResults(float area, char* shape);
/* WHY HERE: Function prototypes must appear before any calls to these functions.
   They inform the compiler about the function's signature (return type and
   parameters) before the actual implementation. */

// Main Function - Program execution starts here
int main() {
    /* WHY HERE: Every C program requires exactly one main() function.
       This is where program execution always begins. */
    
    // Declaration part
    int choice;
    float radius, length, width, area;
    /* WHY HERE: Variables are declared at the beginning of functions to
       clearly establish what data the function will work with and reserve
       memory for these variables. */
    
    // Execution part
    printf("Area Calculator\n");
    printf("1. Circle\n2. Rectangle\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter the radius of circle: ");
        scanf("%f", &radius);
        area = calculateCircleArea(radius);
        displayResults(area, "circle");
        /* WHY HERE: Conditional blocks organize program flow based on user input.
           Each option handles specific tasks, making the code readable and easier
           to maintain or extend. */
    }
    else if (choice == 2) {
        printf("Enter length and width of rectangle: ");
        scanf("%f %f", &length, &width);
        area = calculateRectangleArea(length, width);
        displayResults(area, "rectangle");
    }
    else {
        printf("Invalid choice! Please enter 1 or 2.");
        /* WHY HERE: Error handling prevents program crashes and improves
           user experience by providing feedback on invalid inputs. */
    }
    
    printf("\nProgram executed %d times", ++globalCounter);
    
    return 0;    // Signals successful program completion
    /* WHY HERE: Return statement is the last line in main(), indicating
       program termination status to the operating system. */
}

// User-defined Functions
float calculateCircleArea(float radius) {
    return PI * SQUARE(radius);
    /* WHY SEPARATE FUNCTION: Encapsulates specific calculations, making code
       reusable, easier to test, and keeping the main() function cleaner. */
}

float calculateRectangleArea(float length, float width) {
    return length * width;
    /* WHY SEPARATE FUNCTION: Isolates this specific calculation for better
       organization and easier future modifications. */
}

void displayResults(float area, char* shape) {
    printf("The area of the %s is: %.2f square units", shape, area);
    /* WHY SEPARATE FUNCTION: Separates display logic from calculation logic,
       following the single responsibility principle and making output formatting
       consistent throughout the program. */
}
