#include <stdio.h>
void main()
{
    int x;
    x = 4 % 5 + 6 % 5;
    printf("%d", x);
}

// Output: 5
// Explanation:
// The expression `4 % 5 + 6 % 5` is evaluated as follows: `4 % 5` is `4`, and `6 % 5` is `1`, `4 + 1` is `5`.