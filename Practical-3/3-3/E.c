#include <stdio.h>
void main()
{
    float a = 1.5;
    int b = 3;
    a = b / 2 + b * 8 / b - b + a / 3;
    printf("%f", a);
}

// Output: 6.500000
// Explanation:
// The expression `b / 2 + b * 8 / b - b + a / 3` is evaluated as follows:
// `b / 2` is `3 / 2` is `1`, `b * 8 / b` is `3 * 8 / 3` is `8`, `1 + 8` is `9`, `9 - b` is `9 - 3` is `6`, `6 + a / 3` is `6 + 1.5 / 3` is `6 + 0.5` is `6.5`, and `6.5` is assigned to `a`.
// `a` is a float variable, so the value `6.5` is implicitly cast to a float value, and the final value of `a` is `6.5`.