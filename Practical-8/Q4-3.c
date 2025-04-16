// Guess the output and write justification

#include <stdio.h>
int main()
{
    register int weight;
    int *ptr = &weight;
}

/* Output:
 * Compilation Error
 */

/* Justification:
 * This program demonstrates a key restriction of register variables in C.
 * The 'register' keyword suggests the variable be kept in a CPU register for faster access.
 * Since register variables may not have memory locations, taking their address with
 * the & operator is prohibited, causing a compilation error.
 */