// Guess the output of following with appropriate justification.
// What is the output of C Program.?
int main()
{
    int a = 14;
    while (a < 20){
        ++a;
        if (a >= 16 && a <= 18){
            continue;
        }
        printf("%d ", a);
    }
    return 0;
}
//Output:- 15 19 20
//Explanation:-
// The loop starts with a = 14. In the first iteration, a is incremented to 15 and printed.
// In the next iterations, when a is 16 and 17, the continue statement is executed, skipping the print statement.
// Finally, when a is incremented to 19, it is printed. The loop ends when a becomes 20.