/*Demonstrate the concept of:
1. Call by value
2. Call by reference
By swapping values of two variables.
(Note: Make 2 different programs)*/

#include <stdio.h>

// Function prototype
void swapByValue(int a, int b);

int main() {
    int num1 = 10, num2 = 20;
    
    printf("Before swap (in main): num1 = %d, num2 = %d\n", num1, num2);
    
    // Function call with values
    swapByValue(num1, num2);
    
    printf("After swap (in main): num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}

// Function to swap values (call by value)
void swapByValue(int a, int b) {
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    
    printf("During swap (in function): a = %d, b = %d\n", a, b);
}