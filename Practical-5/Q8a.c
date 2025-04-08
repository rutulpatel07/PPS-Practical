//Guess the output of following with appropriate justification.
/*What will be the output of the program, if input is 6?*/
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i > 9; i += 3){
        printf("for ");
    }
    return 0;
}
//Output:-
//The output of the program will be nothing.
//Justification:-
//The for loop will not execute because the condition i > 9 is false at the beginning (i is initialized to 0).
// Therefore, the loop body will not be executed, and nothing will be printed to the console.