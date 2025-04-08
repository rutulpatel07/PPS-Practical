#include <stdio.h>
void main()
{
    int x, y, z;
    x = y = z = 1;    // Initialize all variables to 1
    
    // This expression uses logical AND operators with pre-increment operators
    // 1. ++x increments x from 1 to 2, then uses the value 2 (which is true in logical context)
    // 2. Since ++x is true, ++y is evaluated, incrementing y from 1 to 2
    // 3. Since ++y is also true, ++z is evaluated, incrementing z from 1 to 2
    // 4. The entire expression (2 && 2 && 2) evaluates to 1 (true in C)
    // 5. This value 1 is assigned back to z, overwriting its previous value
    z = ++x && ++y && ++z;
    
    // Final values:
    // x = 2 (incremented by ++x)
    // y = 2 (incremented by ++y)
    // z = 1 (incremented to 2 by ++z, then overwritten with 1 from the logical expression result)
    printf("x=%d y=%d z=%d", x, y, z);  // Output will be: x=2 y=2 z=1
}