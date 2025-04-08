#include <stdio.h>
void main()
{
    int a;
    
    // sizeof() operator returns the memory size (in bytes) of its operand
    // 3.14 is a floating-point literal, which by default is treated as type 'double' in C
    // This statement calculates how many bytes a double value occupies in memory
    a = sizeof(3.14);
    
    // Print the result using %d format specifier for integers
    // On most modern systems, this will print 8, as a double typically occupies 8 bytes (64 bits)
    // The exact size can vary depending on the system architecture and compiler
    printf("%d", a);
}