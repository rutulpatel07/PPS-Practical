// Guess the output of following with appropriate justification.
// What will be the output of the following C code?
#include <stdio.h>
void main()
{
    int i = 0, j = 0;   
    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
            if (i > 1)
                break;
        }
        printf("Hi \n");
    }
}
// Output: Hi Hi Hi Hi Hi
// Justification: The outer loop runs 5 times, and the inner loop runs 4 times.
// However, the inner loop breaks when i > 1, so it only prints "Hi" 5 times.
// The inner loop does not affect the outer loop, so the outer loop continues to run.