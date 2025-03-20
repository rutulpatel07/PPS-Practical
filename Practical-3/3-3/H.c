#include <stdio.h>
void main()
{
    float a, b;
    int i, j;
    a = (i = sizeof(i), j = sizeof(b), i + j);
    printf("%f", a);
}


// Output: 8.000000
// Explanation:
// The sizeof operator returns the size of the variable in bytes. The size of an integer variable is 4 bytes, and the size of a float variable is 4 bytes. The expression i = sizeof(i), j = sizeof(b), i + j is evaluated as follows:
// i = sizeof(i) => i = 4 
// j = sizeof(b) => j = 4
// i + j = 4 + 4 = 8
// The value of a is 8.000000, which is printed on the console.  