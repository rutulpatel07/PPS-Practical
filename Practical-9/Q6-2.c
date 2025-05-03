/* 2. Call by reference*/

#include <stdio.h>

// Function prototype
void swapByReference(int *a, int *b);

int main() {
    int num1 = 10, num2 = 20;
    
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    
    // Function call with addresses
    swapByReference(&num1, &num2);
    
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}

// Function to swap values (call by reference)
void swapByReference(int *a, int *b) {
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
    printf("During swap (in function): *a = %d, *b = %d\n", *a, *b);
}