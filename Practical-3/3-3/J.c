#include <stdio.h>
void main()
{
    int x = 3;
    x *= x + 4;
    printf("x=%d", x);
}

// Output: x=21
// Explanation:
// The expression x *= x + 4 is evaluated as follows:
// x *= x + 4 => x = x * (x + 4) => x = 3 * (3 + 4) => x = 3 * 7 => x = 21
