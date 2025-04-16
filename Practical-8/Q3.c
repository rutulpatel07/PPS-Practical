// Write a program to demonstrate the use of extern storage class.
#include <stdio.h>

// Global variable
int count = 10;

void display();

int main() {
    extern int count;  // Referencing the global variable using extern
    printf("Inside main, count = %d\n", count);

    display(); // Call another function
    return 0;
}

void display() {
    extern int count;  // Access the same global variable
    count = 20;
    printf("Inside display, count changed to = %d\n", count);
}
