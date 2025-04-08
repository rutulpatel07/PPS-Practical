// Guess the output of following with appropriate justification.
// What will be the output of the C program?

// Note: This program may lead to an infinite loop, and it is not a good practice to write such code.Do not run this code on machine
#include <stdio.h>
int main()
{
    for (5; 2; 2)
        printf("Hello");
    return 0;
}
// Output:-
// The output of the program will be "Hello" printed infinitely.
//Justification:- 
// The for loop in C has three expressions: initialization, condition, and increment/decrement.
// In this case, the initialization (5) and increment/decrement (2) expressions are not used in a meaningful way.
// The condition (2) is always true because any non-zero value is considered true in C.
// Therefore, the loop will execute indefinitely, printing "Hello" repeatedly until the program is terminated manually or the system runs out of resources.