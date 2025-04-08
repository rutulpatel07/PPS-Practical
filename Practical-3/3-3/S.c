#include<stdio.h>
void main()
{
    int x,y,z;
    x=y=z=-1;  // Initialize all variables to -1
    
    // This expression uses logical operators with pre-increment operators
    // 1. ++x increments x from -1 to 0, then uses the value 0 (which is false in logical context)
    // 2. Due to short-circuit evaluation, since ++x is 0 (false), ++y is not evaluated
    // 3. Because (++x && ++y) is false, the right side of || is evaluated
    // 4. ++z increments z from -1 to 0, then returns 0
    // 5. The result 0 is assigned to z
    z=++x && ++y || ++z;
    
    // Final values:
    // x = 0 (incremented by ++x)
    // y = -1 (not incremented because of short-circuit)
    // z = 0 (incremented by ++z and assigned the result)
    printf("x=%d y=%d z=%d",x,y,z);  // Output will be: x=0 y=-1 z=0
}