// Guess the output and write justification

#include <stdio.h>
void next(void);
static int counter = 7;
int main()
{
    while (counter < 10)
    {
        next();
        counter++;
    }
    return 0;
}
void next(void)
{
    static int iteration = 13;
    iteration++;
    printf("iteration=%d and counter= %d\n", iteration, counter);
}

/* Output:
 * iteration=14 and counter= 7
 * iteration=15 and counter= 8
 * iteration=16 and counter= 9
 */

/* Justification:
 * This program demonstrates static variables where 'counter' (static global) starts at 7 
 * and 'iteration' (static local) is initialized to 13 only once. The static local variable 
 * 'iteration' retains its value between function calls, incrementing from 14 to 16 across 
 * the three loop iterations while 'counter' increases from 7 to 9.
 */

