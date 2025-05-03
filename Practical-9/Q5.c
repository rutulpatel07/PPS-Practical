// Write a program to change the value of a variable using pointer
#include <stdio.h>

int main() {
    // Declare and initialize a variable
    int num = 10;
    
    // Declare a pointer variable
    int *ptr;
    
    // Assign address of num to the pointer
    ptr = &num;
    
    // Print the initial value
    printf("Initial value of num: %d\n", num);
    
    // Change the value using pointer
    *ptr = 25;
    
    // Print the new value to verify the change
    printf("After modification through pointer, value of num: %d\n", num);
    
    return 0;
}

