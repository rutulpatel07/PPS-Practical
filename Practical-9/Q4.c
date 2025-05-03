// Write a program to print an address of a variable..

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    // Print the addresses of the variables
    printf("Address of variable a: %p\n", (void*)&a);
    printf("Address of variable b: %p\n", (void*)&b);
    printf("Address of variable c: %p\n", (void*)&c);

    return 0;
}