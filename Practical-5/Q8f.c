// Guess the output of following with appropriate justification.
// What is the output of C Program.?
#include<stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++);
    printf("i=%d\n", i);
    return 0;
}
//Output:- 11
//Explanation:- The semicolon at the end of the for loop is an empty statement.
// The loop runs from 1 to 10, but the body of the loop is empty due to the semicolon.
// After the loop, the value of i is 11, which is printed by the printf statement.
