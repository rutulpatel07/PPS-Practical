#include <stdio.h>
void main()
{
    int x;
    x = -3 * -4 % -6 / -5;
    printf("%d", x);
}

// Output: -2
// Explanation:
// The expression `-3 * -4 % -6 / -5` is evaluated as follows: `-3 * -4` is `12`, `12 % -6` is `0`, and `0 / -5` is `0`.
