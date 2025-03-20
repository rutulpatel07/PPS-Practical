#include <stdio.h>
void main()
{
    int x;
    x = 3 + 4 - 7 * 8 / 5 % 10;
    printf("x=%d", x);
}

// Output: x=3
// Explanation:
// The expression `3 + 4 - 7 * 8 / 5 % 10` is evaluated as follows:
// `7 * 8` is `56`, `56 / 5` is `11`, `11 % 10` is `1`, `3 + 4 - 1` is `6 - 1` is `5`.