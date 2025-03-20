#include <stdio.h>
void main()
{
    int x;
    x = 3 * 4 % 5;
    printf("x=%d", x);
}

// Output: x=2
// Explanation:
// The expression `3 * 4 % 5` is evaluated as follows:  `3 * 4` is `12`, and `12 % 5` is `2`.