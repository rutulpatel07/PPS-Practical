#include <stdio.h>
void main()
{
    int x = 11, y = 6, z;
    z = x == 5 || y != 4;
    printf("z=%d", z);
}

// Output: z=1
// Explanation:
// The expression x == 5 || y != 4 is evaluated as follows:
// x == 5 => 11 == 5 => false => 0
// y != 4 => 6 != 4 => true => 1
// 0 || 1 => 1
// The value of z is 1, which is printed on the console.
