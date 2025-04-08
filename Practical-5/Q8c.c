// Guess the output of following with appropriate justification.
// What will be the output of the C program?
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1, j = 1; i <= 3, j <= 3; i++, j++)
        printf("%d %d ", i, j);
    return 0;
}
// Output:-
// The output of the program will be: 1 1 2 2 3 3
// Justification:-
// The for loop will execute three times, with i and j both starting at 1 and incrementing by 1 in each iteration.
// The loop condition uses the comma operator, which evaluates both i <= 3 and j <= 3, but only the result of the last expression (j <= 3) is used to determine if the loop continues.
// Since both i and j are incremented in each iteration, the loop will print the values of i and j in each iteration until both reach 4, at which point the loop will terminate.
