// Guess the output and write justification

#include <stdio.h>
int main()
{
    auto int j = 1;
    {
        auto int j = 2;
        {
            auto int j = 3;
            printf(" %d ", j);
        }
        printf("\t %d ", j);
    }
    printf("%d\n", j);
}

// Output: 3 2 1
/* Justification:
 * This program demonstrates variable scoping with the 'auto' storage class.
 * Each block creates a new variable 'j' that shadows (hides) the outer variables.
 * When accessing 'j', the compiler uses the most recently defined version in the current scope.
 * The output "3 2 1" shows each scope's variable being accessed as blocks close.
 */